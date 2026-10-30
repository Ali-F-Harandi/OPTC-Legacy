# M3d — the cache write path: the REAL data1.dat decoder chain

> Status: **the entire consumer side is now reversed and *executable* statically:
> the cache-write/decrypt loop, the true NTY container format (emulated on the
> plaintext RES.DAT.00), the encrypted-NTY key-record mechanism, and the exact
> reason every previous key test failed (the M3c oracle rejected the true
> 'MM' magic).** The data1.dat key itself is a 32-byte signature delivered by
> the runtime APU table — the precise capture point is documented below.

## 1. What was rebuilt this session (full workspace recovery)

The sandbox was recycled; every artifact was regenerated from a fresh
uptodown XAPK of the exact 16.2.1 build (140,918,068 B; all five sha256 in
`hashes.txt` match bit-exactly — libgame.so 10e9f1d0…, lib__7ffe__.so
771d0f27…, base.apk b2ba3e50…, data1.dat 2325b9f9…):

```
XAPK -> libgame.so LOUSER+0 -> game stage-2 (IDENTICAL to evidence copy)
      -> game container {0x81, 0x96, 0xf3 raw 38.5MB, 0xe3}  (0 fail)
      -> matryoshka f3..f8 (57 modules, 0 fail)
      -> raw_L4_0x9d + L4_m9b -> 0x9d merged.bin (12,998 chunks, 288,942 relocs)
      -> plt.tsv (44,568 stubs)
```

Tools: `tools/m3d0_regen_game_modules.py`, `tools/m3d0b_merge_9d.py`.
Ghidra 11.3.2 headless (`-noanalysis` + `tools/ghidra-m3d/M3dPrep.java`:
region disassembly, 64,482 ASCII strings, 56 seeded functions) produced a
**55-function decompile of the whole GNP/cache cluster**
(`decomp/game-code/m3d-cache/`, `decompile-index.json` with hashes).

## 2. The cache write path (M3d-1 — the user-requested decoder)

```text
GlobalNtyPool::findVolumeByName 0x3a00388 (GNP dispatch, GOT 0x4203e60)
  ├─ lookupReadablePath 0x3a061f0: 31-hash of name -> GNPCACHE/%02X/name@version
  │    hit  -> IO::FileStream::open(path, 0x40000000)            [plain read]
  └─ miss -> findCacheDescriptor 0x3a00a58
        └─ NtyCacheDescriptor {NtyReader ctx@+8, flag@+0x18, KEYDESC@+0x20}
             ├─ keydesc set?  -> use it
             └─ else          -> NTYPOOL_GLOBAL_CONTEXT+8 (installed 0x1f2c6a0)
             -> volumeAcquire 0x39def6c (seek entry+0x268, clip +0x26c)
             -> BQ1597 decoderFactory 0x1ef3750
             -> decryptWriteCache 0x1f1c914   <<<< THE REAL data1.dat DECODER
                  ├─ decoderFromKeydesc 0x1f1cc78: class-bits@entry+0x260
                  │     bit29 -> Plane, bit0 -> SD159, bit2 -> SD144, bit1 -> SD40SE
                  │     key: keydesc+8 -> 0x39d3fd0 -> BQ1599BisqueKey
                  ├─ flags-byte@entry+0x25f bit 0x40 (gzip volumes: .ssd,
                  │     .textClipping) -> GzStreamInflater vtable 0x414a858 path
                  └─ else: 8KB read->decrypt->write loop into the cache stream
                          (opened with flags 0x2c000000)
```

Cache stamps: `entry+0x274` (or `+0x288` for gzip volumes) vs
`0x39e4464(path, global@0x41b61b0)` decides cache re-creation.

## 3. The TRUE NTY format (emulation ground truth)

`tools/m3d_emu_nty_full.py` runs the REAL parse_NTY (0x39ddab4) under
Unicorn on RES.DAT.00 with a fake `IO::Stream` (read/seek/tell as magic-page
services; all 490 zero-GOT imports patched with a mini-libc):

* header: BE `u16 'MM' (0x4d4d)`, `u16 0x002a`, `u32 data-end/metadata-off`,
  `u16 volume count`, `u32`
* RES.DAT.00 = **21 volumes** with full names (ArialBM.png …
  opening_movie_6th_mainvisual_iphoneX.png), flags 0x80000000 (plain) /
  0xc0000000 (gzip-wrapped), class-bits 0x4 / 0x10004, offsets/sizes/modes,
  and per-volume stamps at +0x274/+0x288.

FONT.DAT.00 and RES_LOADING.DAT.00 are also plaintext MM-headed NTYs —
**the plaintext reference family for oracle construction.**

## 4. The encrypted-NTY key record (how the game opens data1.dat)

`sigInstall` 0x39dea94 (reached from parse_NTY via PLT 0x3fa2af0 with
NtyReader::open's 3rd argument):

```text
key record = { u32 id, sig[0x24]@+4, u32 len@+0x28, u32 crc32@+0x2c, ?@+0x30,
               ENCRYPTED NTY PAYLOAD @+0x34 }
1. the caller's record must match the NTY-embedded record (5-field signature)
2. keyExpand(ctx+0x457, 0x20, mode 0x40000000)   <- the 36-byte signature
   IS the key (first 32 bytes) — NOT an ASCII string
3. RC4-255 decrypt of record+0x34 (len bytes)
4. crc32 verify
5. destroy the ctx volume list, re-parse the NTY from the decrypted buffer
```

ntyOpenCaller2 (0x3a08a00) additionally memcmp's a 0x24-byte key signature
at NtyReader ctx+0x28 — the "APU" identity of the volume.

## 5. Why every prior key test failed — and the corrected oracle

The M3c oracle required `u16@0 <= 0x400`. The TRUE magic is
`'MM' = 0x4d4d = 19789` — **the oracle rejected the correct plaintext by
construction**, so all 55K-string sweeps were testing against an impossible
condition. Correct oracle: `pt[0:4] == 'MM\x00\x2a'` + sane count@8.

Retested with the corrected oracle:

* 7 keys (the 3 known + **4 newly found** in the 0x4210000-0x4220000
  descriptor-string table: `nyT006FiJkef5FE0E1daXePZdm0o9fMz`,
  `lox8YgVv31ttFRVAZ1OSJ2sjZFk3L1zr`,
  `PCRdp4BGwaygzUa0WJJXTX3nxzRjgVN5P72uZyUs`, `smqiXDxYl5Xis2rfhIEsxOkQD`)
  × {RC4-255, cipher159, cipher144} × {mode 0xE0000000, 0x40000000}
  × offsets {0, 4, 0x34} on data1.dat / RES.DAT.01 / FONT.DAT.01 — **0 hits**
* 134,083 strings (rodata + every DEX string) × RC4-255 × corrected oracle —
  **0 hits**
* UUID (RES/FONT .vb) and .idx-hash keys — negative
* 16-bit LCG stream solved from the 'MM' known-plaintext — body stays random
  — negative

**Cipher-family split (statistical proof):** data1.dat *preserves* the
positional byte bias (even-byte low-2 bits 0.326/0.197/0.232/0.244;
even-zero rate 0.011 — identical to a real NTY's) ⇒ **stream cipher**; the
encrypted RES/FONT/RES_LOADING .01 files are fully uniform ⇒ **block cipher**
(cipher159/144). So data1.dat uses the sinatra RC4-255 core with a
32-byte signature key — exactly the key-record mechanism above.

## 6. The APU table (M3d-2)

The 0x4203e30 region is the own-function GOT stretch holding the GNP method
cluster (`0x3a00110`, `0x3a00388`, `0x3a030bc`, `0x3a0332c`, `0x3a0de74`, …).
The per-volume keydescs themselves are **runtime-registered** —
`GNP::NtyAPU` (bisqueBase::util::GNP6NtyAPU, 7 symbols in the 0x9e DB),
`NtyCacheDescriptor`, `NtyManager` (map<GNPStoreKey,…>) — driven from
outside the 0x9d image (module-registry / JNI calls), so they are not
statically enumerable. **Runtime capture point (one Frida hook):**
`keyExpansion 0x39d39f4` — the data1.dat keydesc arrives as
`(key=32-byte signature, len=0x20, mode=0x40000000)`; or dump
`NtyCacheDescriptor+0x20` after registration.

## 7. Reproduce

```bash
python3 tools/m3d0_regen_game_modules.py   # rebuild m2/game_modules from libgame.so
python3 tools/m3d0b_merge_9d.py            # 0x9d image+patch -> merged.bin
python3 tools/m3d_emu_nty_full.py <file>   # REAL parse_NTY emulation on any NTY
python3 tools/m3d4_corrected_sweep.py      # string sweeps w/ the MM oracle
python3 tools/m3d9_matrix_mm.py            # emulated-core × key matrix
```

## 8. M3e work items

1. on-device: hook 0x39d39f4 / dump NtyCacheDescriptor+0x20 → the 32-byte
   per-volume signatures (then `sigInstall` semantics fully reproduce the
   decrypt offline).
2. enumerate the .01-family block-cipher keys (RES.DAT.01 etc.) the same way.
3. with the signatures, `tools/m3d_emu_nty_full.py` + the RC4-255 core
   decrypts data1.dat end-to-end offline.
