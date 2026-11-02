// m4b_binary_keysweep.c — full-spectrum 32-byte binary key sweep for OPTC 16.2.1 data1.dat
//
// The M3d static matrix only tested ASCII string keys. A 32-byte runtime
// signature registered via JNI/APU could equally live as a raw byte array in
// the DEX (fill-array-data), in libsigner.so, in the protector's decrypted
// modules, or in the restored engine image. This sweeper slides a 1-byte-
// stride window over every source blob and tests each window as the RC4-255
// key against the corrected MM oracle at payload offsets {0,4,8,0x10,0x34}.
//
// Core (Unicorn-verified in M3c/M3d, round-trip locked by m4_selftest.py):
//   KSA:  S = T1 (seed permutation); j=0; for i in 0..255:
//             j = (j + S[i] + key[i % 32]) & 0xFF; swap(S[i], S[j])
//   PRGA: from pristine S, i=j=0; ks[k] = S[(S[i']+S[j'])&0xFF] after swaps
//
// Oracle: pt[0:4] == 4d 4d 00 2a  AND  1 <= u16be(pt+8) <= 0x100
//
// Build: gcc -O2 -fopenmp -o m4b_binary_keysweep m4b_binary_keysweep.c
// Usage: ./m4b_binary_keysweep T1.bin data1.dat src1 [src2 ...]
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>

static uint8_t T1[256];
static uint8_t CT[300000];
static size_t CT_LEN;
static const size_t OFFS[5] = {0, 4, 8, 0x10, 0x34};

// generate first 12 keystream bytes for a key
static inline void ks12(const uint8_t *key, size_t klen, uint8_t *out) {
    uint8_t S[256];
    memcpy(S, T1, 256);
    uint8_t j = 0;
    for (int i = 0; i < 256; i++) {
        j = (uint8_t)(j + S[i] + key[i % klen]);
        uint8_t t = S[i]; S[i] = S[j]; S[j] = t;
    }
    // PRGA from pristine state
    uint8_t i2 = 0, j2 = 0;
    for (int k = 0; k < 12; k++) {
        i2 = (uint8_t)(i2 + 1);
        j2 = (uint8_t)(j2 + S[i2]);
        uint8_t t = S[i2]; S[i2] = S[j2]; S[j2] = t;
        out[k] = S[(uint8_t)(S[i2] + S[j2])];
    }
}

int main(int argc, char **argv) {
    if (argc < 4) {
        fprintf(stderr, "usage: %s T1.bin data1.dat src1 [src2 ...]\n", argv[0]);
        return 1;
    }
    FILE *f = fopen(argv[1], "rb");
    if (!f || fread(T1, 1, 256, f) != 256) { fprintf(stderr, "bad T1\n"); return 1; }
    fclose(f);
    f = fopen(argv[2], "rb");
    if (!f) { fprintf(stderr, "bad ct\n"); return 1; }
    CT_LEN = fread(CT, 1, sizeof(CT), f);
    fclose(f);
    printf("[*] T1 ok, ct %zu B, oracle offsets {0,4,8,0x10,0x34}\n", CT_LEN);

    long total_windows = 0, magic_hits = 0, total_reported = 0;
    for (int a = 3; a < argc; a++) {
        FILE *sf = fopen(argv[a], "rb");
        if (!sf) { fprintf(stderr, "[!] skip %s\n", argv[a]); continue; }
        fseek(sf, 0, SEEK_END);
        long sz = ftell(sf);
        fseek(sf, 0, SEEK_SET);
        uint8_t *buf = malloc(sz);
        if (!buf || fread(buf, 1, sz, sf) != (size_t)sz) {
            fprintf(stderr, "[!] read fail %s\n", argv[a]); fclose(sf); continue;
        }
        fclose(sf);
        long nwin = (sz >= 32) ? sz - 31 : 0;
        printf("[*] sweeping %s (%ld B, %ld windows)\n", argv[a], sz, nwin);
        fflush(stdout);

        long reported = 0;
        long local_reported = 0;
        #pragma omp parallel for schedule(static) reduction(+:magic_hits)
        for (long w = 0; w < nwin; w++) {
            uint8_t ks[12];
            ks12(buf + w, 32, ks);
            for (int o = 0; o < 5; o++) {
                size_t off = OFFS[o];
                if (off + 12 > CT_LEN) continue;
                if ((CT[off] ^ ks[0]) == 0x4d && (CT[off+1] ^ ks[1]) == 0x4d &&
                    (CT[off+2] ^ ks[2]) == 0x00 && (CT[off+3] ^ ks[3]) == 0x2a) {
                    magic_hits++;
                    // count sanity: u16 BE at pt+8
                    unsigned cnt = ((CT[off+8] ^ ks[8]) << 8) | (CT[off+9] ^ ks[9]);
                    #pragma omp critical
                    {
                        printf("  HIT %s w=%ld off=%zu count=%u key=", argv[a], w, off, cnt);
                        for (int k = 0; k < 32; k++) printf("%02x", buf[w + k]);
                        printf("%s\n", (cnt >= 1 && cnt <= 0x100) ? "  <== FULL PASS" : "");
                        reported++; local_reported++;
                    }
                }
            }
        }
        total_windows += nwin;
        total_reported += local_reported;
        free(buf);
    }
    printf("[*] done: %ld windows, %ld magic hits, %ld reported\n",
           total_windows, magic_hits, total_reported);
    return 0;
}
