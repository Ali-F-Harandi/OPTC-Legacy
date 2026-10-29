/* M2b: exhaustive stream-key (x) sweep for data1.dat.
 *
 * The e3/stage-2 stream cipher's first dwords depend only on the key x:
 *   i=0: s1 = (A + x); s2 = (B + x); k0 = s1 ^ s2;  p0 = (c0 - k0) ^ k0
 * So we can test all 2^32 keys against cheap prefix oracles:
 *   A) scatter:  p2 == 16 (entries_off) && 0 < p1 <= 0x1000 && p3 <= len
 *   B) dd70:     count/kts sanity (kts % 3 == 0, kts <= 0x1B00) with seed = f(x)
 * Views: body (i starts at 0), body1 (head was dword 0), full (from offset 0).
 * Also sweeps the head word as a known key is NOT needed — full space covered.
 */
#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include <wmmintrin.h>
#include <omp.h>

static uint32_t buf[16];
static int ndw;
static uint32_t total_len;

static inline uint32_t clmul32(uint32_t a, uint32_t b) {
    __m128i va = _mm_set_epi64x(0, a), vb = _mm_set_epi64x(0, b);
    __m128i r = _mm_clmulepi64_si128(va, vb, 0x00);
    uint64_t p;
    _mm_storel_epi64((__m128i *)&p, r);
    /* reduce mod GF(2^32) with poly 0x579357EB (degree 32 -> folded twice) */
    for (int i = 62; i >= 32; i--) {
        if ((p >> i) & 1) {
            uint64_t poly = ((uint64_t)0x579357EB) << (i - 32);
            p ^= poly;
        }
    }
    return (uint32_t)p;
}

/* stream decrypt one dword at index i given the evolving states (x evolves) */
static inline uint32_t dec_dword(uint32_t c, uint32_t *x, uint32_t i,
                                 uint32_t *s1, uint32_t *s2) {
    uint32_t s1n = ((((*s1 + 0xE9FA57E4u) * (*s1)) + *x + 0x8E495673u));
    s1n <<= (i & 7);
    uint32_t s2n = ((((*s2 + 0x4F8B1BCAu) * (*s2)) + *x + 0x72F6FCBEu));
    s2n >>= ((i * i) & 0xF);
    *s1 = s1n; *s2 = s2n;
    *x = s1n ^ s2n;
    uint32_t v = c;
    v += (i & 0xD) * 0xB43B9BAFu;
    v ^= (i & 3) * 0xAF57F7FBu;
    v = v - *x;
    v ^= *x;
    return v;
}

int main(int argc, char **argv) {
    if (argc < 2) { fprintf(stderr, "usage: %s <data1.dat> [--selftest]\n", argv[0]); return 1; }

    if (argc > 2 && !strcmp(argv[2], "--selftest")) {
        /* validate dec_dword against the python reference:
         * e3 module chunk[0] first ciphertext dwords, x=0x14b4 */
        uint32_t c[4];
        FILE *sf = fopen("/home/z/my-project/scripts/selftest_ct.bin", "rb");
        if (!sf) { perror("selftest_ct.bin"); return 2; }
        fread(c, 4, 4, sf); fclose(sf);
        uint32_t s1 = 0x07B48238u, s2 = 0xE34EAC63u, p[4];
        uint32_t xt = 0x14B4u;
        for (uint32_t i = 0; i < 4; i++) p[i] = dec_dword(c[i], &xt, i, &s1, &s2);
        printf("C selftest: %08x %08x %08x %08x\n", p[0], p[1], p[2], p[3]);
        printf("expected   : 585c686c d4c639b6 07bbef03 a4ee241b\n");
        int ok = p[0] == 0x585c686cu && p[1] == 0xd4c639b6u &&
                 p[2] == 0x07bbef03u && p[3] == 0xa4ee241bu;
        printf(ok ? "SELFTEST PASS\n" : "SELFTEST FAIL\n");
        return ok ? 0 : 1;
    }

    if (argc > 2 && !strcmp(argv[2], "--chunk")) {
        /* chunked sweep: --chunk <start> <end_hex> <view_idx> */
        if (argc < 6) { fprintf(stderr, "--chunk start end view\n"); return 2; }
        unsigned long start = strtoul(argv[3], NULL, 0);
        unsigned long end = strtoul(argv[4], NULL, 0);
        int view_i = atoi(argv[5]);
        FILE *f2 = fopen(argv[1], "rb");
        fseek(f2, 0, SEEK_END); long sz2 = ftell(f2); fseek(f2, 0, SEEK_SET);
        uint8_t *raw2 = malloc(sz2); fread(raw2, 1, sz2, f2); fclose(f2);
        const uint8_t *ptr = view_i == 0 ? raw2 + 4 : raw2;
        uint32_t c[4]; memcpy(c, ptr, 16);
        long hA = 0, hB = 0;
        for (unsigned long xk = start; xk < end; xk++) {
            uint32_t x = (uint32_t)xk;
            uint32_t s1 = 0x07B48238u, s2 = 0xE34EAC63u, p[4];
            uint32_t xt = x;
            for (uint32_t i = 0; i < 4; i++) p[i] = dec_dword(c[i], &xt, i, &s1, &s2);
            if (p[2] == 16 && p[1] >= 1 && p[1] <= 0x1000 && p[3] >= 32 && p[3] <= (uint32_t)sz2 && p[0] <= 0x1000000u) {
                printf("[A] view%d x=%#010x base=%#x n=%u eoff=%#x doff=%#x\n", view_i, x, p[0], p[1], p[2], p[3]); hA++;
            }
            uint32_t sq = x * x, seed = (sq >> 17) ^ (sq << 11);
            uint32_t v1 = ((0x416E2AF2u >> (seed & 0xD)) + seed + 0xBD19C63Cu) ^ clmul32(0x94511DD2u, p[1]);
            uint32_t kts = ((0x643A3A3Bu << (seed & 0xB)) - (seed ^ 0x3B2BF538u)) + clmul32(0x94511DD2u, p[2]);
            if ((v1 & 0xFF) >= 1 && kts >= 3 && kts <= 0x1B00 && (kts % 3) == 0) {
                uint32_t total = seed * 0xF87B337Cu + (0xA21DFB3Au << (seed & 7)) + clmul32(0x94511DD2u, p[0]);
                if (total >= 1 && total <= 0x8000000u) {
                    printf("[B] view%d x=%#010x count=%u kts=%#x total=%#x flags=%#x\n", view_i, x, v1 & 0xFF, kts, total, (v1 >> 8) & 0xFF); hB++;
                }
            }
        }
        printf("chunk [%lx,%lx) view%d: A=%ld B=%ld\n", start, end, view_i, hA, hB);
        return 0;
    }

    FILE *f = fopen(argv[1], "rb");
    fseek(f, 0, SEEK_END);
    long sz = ftell(f);
    fseek(f, 0, SEEK_SET);
    uint8_t *raw = malloc(sz);
    fread(raw, 1, sz, f);
    fclose(f);
    total_len = (uint32_t)sz;

    /* three views, each 4 dwords */
    struct { const char *name; const uint8_t *ptr; } views[] = {
        {"body",  raw + 4},
        {"full",  raw},
    };
    printf("file %ld bytes; head=%02x%02x%02x%02x\n", sz, raw[3], raw[2], raw[1], raw[0]);

    for (int vi = 0; vi < 2; vi++) {
        printf("=== view %s ===\n", views[vi].name);
        uint32_t c[4];
        memcpy(c, views[vi].ptr, 16);

        long hitsA = 0, hitsB = 0;
        #pragma omp parallel for schedule(static) reduction(+:hitsA,hitsB)
        for (long xk = 0; xk < 0x100000000L; xk++) {
            uint32_t x = (uint32_t)xk;
            uint32_t s1 = 0x07B48238u, s2 = 0xE34EAC63u;
            uint32_t p[4];
            uint32_t xt = x;
            for (uint32_t i = 0; i < 4; i++)
                p[i] = dec_dword(c[i], &xt, i, &s1, &s2);

            /* oracle A: scatter {base, n, eoff, doff} */
            if (p[2] == 16 && p[1] >= 1 && p[1] <= 0x1000 &&
                p[3] >= 32 && p[3] <= total_len && p[0] <= 0x1000000u) {
                #pragma omp critical
                printf("  [A] x=%#010x base=%#x n=%u eoff=%#x doff=%#x\n",
                       x, p[0], p[1], p[2], p[3]);
                hitsA++;
            }
            /* oracle B: dd70 header with seed = f(x) */
            uint32_t sq = x * x;
            uint32_t seed = (sq >> 17) ^ (sq << 11);
            uint32_t w0 = p[0], w1 = p[1], w2 = p[2];
            uint32_t v1 = ((0x416E2AF2u >> (seed & 0xD)) + seed + 0xBD19C63Cu) ^ clmul32(0x94511DD2u, w1);
            uint32_t count = v1 & 0xFF;
            uint32_t kts = ((0x643A3A3Bu << (seed & 0xB)) - (seed ^ 0x3B2BF538u)) + clmul32(0x94511DD2u, w2);
            if (count >= 1 && kts >= 3 && kts <= 0x1B00 && (kts % 3) == 0) {
                uint32_t total = seed * 0xF87B337Cu + (0xA21DFB3Au << (seed & 7)) + clmul32(0x94511DD2u, w0);
                if (total >= 1 && total <= 0x8000000u) {
                    #pragma omp critical
                    printf("  [B] x=%#010x count=%u kts=%#x total=%#x flags=%#x\n",
                           x, count, kts, total, (v1 >> 8) & 0xFF);
                    hitsB++;
                }
            }
        }
        printf("  done view %s: A=%ld B=%ld\n", views[vi].name, hitsA, hitsB);
    }
    return 0;
}
