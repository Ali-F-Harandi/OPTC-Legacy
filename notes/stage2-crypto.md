# Stage-2 Protector — Crypto Architecture (M1b)

> Status: **crypto core fully reversed & verified** (AES-256 master key
> recovered, FIPS-197 vector passes). Remaining: exact buffer wiring for
> `data1.dat` (§7). Pseudocode: `decomp/native-loader-7ffe-stage2/`
> (269 auto + 67 forced functions). Tooling: `tools/stage2_crypto.py`.

## 1. Target

The stage-2 module is the 153,968-byte ARM64 blob decrypted by the
`lib__7ffe__.so` bootstrap (see `notes/7ffe-loader.md`). Regenerate with:

```bash
python3 tools/unpack_7ffe.py <lib__7ffe__.so> <out-dir>
# → 7ffe-payload.dec (this target)
```

Memory map of the decrypted image:

| range | contents |
|---|---|
| `0x00000–0x10500` | ARM64 code (entry `+0x5D4` from the stage-1 header) |
| `0x10500–0x11d10` | **second inlined copy of the AES round function** (non-contiguous, reached only via `b` — invisible to Ghidra's default pass) |
| `0x11d10–0x13110` | AES tables: `Td0/Td1/Td2/Td3` (1 KiB each, `0x400` stride) + byte-replicated inverse S-box at `0x12d10` + Rcon at `0x13110` |
| `0x13150–0x14000` | custom relocation table (sparse `0x41/0x9d/0xde/0xdd/0x1f/0x0c` opcode soup) |
| `0x14000–0x16000` | relocation/eh_frame-like data (sparse) |
| `0x16000–0x25000` | zero fill (BSS image) |
| `0x256b0–0x25738` | import name table: `liblog.so libstdc++.so libm.so libc.so libz.so libdl.so` (resolved by a hand-rolled ELF scanner, not the system linker) |
| `0x257e0–0x257ec` | config words: `0x55`, `0x26`, `0x14B4` (stream key / seed base), `0` |
| `0x257f0–0x258e4` | **shipped AES-256 context** (§4) |
| `0x258f0` | `u32 = 0xF4` — sizeof(ctx), cross-check |

## 2. Crypto inventory (all identified)

| address | function | role |
|---|---|---|
| `0x00104f8` | `FUN_000104f8` | AES-256 decrypt block, T-table, big-endian I/O |
| `0x0000ff24` | `FUN_0000ff24` | same round function, second inlined copy |
| `0x00010204` | `FUN_00010204` | AES-CBC driver (zero IV), ctx `{u16 bits; u16 rounds; u32 rk[60]}` |
| `0x0000fc30` | `FUN_0000fc30` | AES-CBC driver used by the loader path |
| `0x00010468` | — | keysize check: accepts `0x80/0xc0/0x100` bits |
| `0x000104a0` | — | rounds-from-keysize: 10/12/14 |
| `0x0000eb34` | `FUN_0000eb34` | additive/XOR dword stream cipher, evolving key (§5) |
| `0x0000181c` | `FUN_000181c` | GF(2^32) carry-less multiply, reduction poly `0x579357EB` |
| `0x0000176c` | `FUN_0000176c` | header-dword deobfuscator: `clmul32(0x09451DD2, v)` |
| `0x00001d40` | `FUN_00001d40` | second deobfuscator (const `0x36DCAC9C`, used for the key table) |
| `0x0000f9f4` | `FUN_0000f9f4` | LZ77/RLE decompressor (§6) |
| `0x0000f444` | `FUN_0000f444` | per-blob dispatch: plain memcpy when sizes match, else LZ |
| `0x0000dd70` | `FUN_0000dd70` | container parser with seeded header formulas (§7) |
| `0x0000dacc/0x0000dafc` | pipeline fragment | stream → AES-CBC → entry extraction (§7) |
| `0x0000ecd8` | `FUN_0000ecd8` | container entry iterator → `FUN_0000ee70` extractor |

Anti-analysis notes:

- The stage-2 imports nothing through the dynamic linker — `liblog` etc.
  are located by a hand-rolled `/proc`-walking ELF scanner (`FUN_000029a0`)
  and fixed up with a private relocation processor (`FUN_00005024`).
- All syscalls go through an SVC wrapper (`FUN_00010108`), e.g.
  `FUN_00010198` = `openat`, `FUN_000101d8` = plain open.
- `entry+0x22c` calls `ptrace(0x109, 0, 0, 0)` (self-attach anti-debug).
- The crypto block `0x10500–0x11d10` is only reachable through
  mid-function `b` instructions, so Ghidra's default analysis misses it —
  it was recovered by forced re-decompilation (see `forced/`).

## 3. The AES tables are byte-exact standard

`Td0[0] = 0x51f4a750` … all five tables (1024+1024+1024+1024+1024 bytes)
match the standard AES equivalents derived from the FIPS S-box, **0 of 256
entries differ** in each. The initial "MARS S-box" impression came from the
same constants (both designs reuse the T-table layout). No whitebox
obfuscation, no modified S-box: this is textbook AES with T-tables.

## 4. The shipped key schedule — and the master key

The 240 bytes at `0x257f4` are a **precomputed equivalent inverse-cipher
schedule in decryption (reversed) order** — the stage-2 never runs a key
expansion at load time:

```
stored[0:4]   = w[56..59]              (encryption round 14, plain)
stored[4:56]  = InvMixColumns(w[52..4])  (rounds 13..1, transformed)
stored[56:60] = w[0..3]                (master key words 0..3)
```

Inverting the transform (`master[4:8] = MixColumns(stored[52:56])`) and
re-expanding reproduces the stored schedule **60/60 words**. Recovered
AES-256 master key:

```
0cff25e770136105e1a82d418ebfd5c6c9eee3060d59424e3fdda39e348e20b9
```

The re-implemented decrypt block + reversed schedule passes the FIPS-197
AES-256 vector (key `000102…1f`, PT `00112233…`, CT `8ea2b7ca…`):

```bash
python3 tools/stage2_crypto.py 7ffe-payload.dec --fips
# [*] FIPS-197 AES-256 decrypt: PASS
```

## 5. The stream cipher — `FUN_0000eb34`

A per-dword evolving-key cipher keyed by `[0x257e8] = 0x14B4`:

```c
s1 = ((s1 + 0xE9FA57E4) * s1 + x + 0x8E495673) << (i & 7);      // mod 2^32
s2 = ((s2 + 0x4F8B1BCA) * s2 + x + 0x72F6FCBE) >> ((i*i) & 0xF);
x  = s1 ^ s2;                                    // key evolves per dword
d[i] = ((((d[i] + (i&13)*0xB43B9BAF) ^ (i&3)*0xAF57F7FB) - x) ^ x);
```

(verified instruction-by-instruction against the ARM64 assembly).

## 6. The LZ layer — `FUN_0000f9f4`

Token-based LZ77/RLE: each token is a u32 read through
`FUN_0000f878` (deobfuscated from the source stream); `token & 0x300`
selects the opcode — `0x000` literal, `0x100` two-byte length
accumulation, `0x200` RLE with 1/2/4-byte fills, `0x300` windowed copy
with negative displacement. `FUN_0000f444` picks between memcpy (when
`src_size == dst_size`) and this decompressor per container entry.

## 7. `data1.dat` — container format & remaining work

`assets/7ffe/data1.dat` (181,700 B = 4 + 181,696, tail exactly 16-aligned)
is processed by the loader-pipeline fragment (`0xdacc/0xdafc`, confirmed
from raw assembly):

```
FUN_0000eb34(key=[0x257e8], buf, size)          # stream decrypt
FUN_0000fc30(buf, size, &ctx@0x257f0, 0xF4)     # AES-256-CBC, zero IV
FUN_0000ecd8(...)                               # per-entry extract (LZ)
```

The container header parser (`FUN_0000dd70`) decodes three dwords with
seed `= ((x*x)>>17) ^ ((x*x)<<11)` where `x = [0x257e8]`, each dword first
passing the `clmul32(0x09451DD2, ·)` deobfuscator:

```
d0 → total_size = seed*0xF87B337C + (0xA21DFB3A << (seed&7)) + deob(w0)
d1 → count|flags<<8     = ((0x416E2AF2 >> (seed&0xD)) + seed + 0xBD19C63C) ^ deob(w1)
d2 → key_table_size     = ((0x643A3A3B << (seed&0xB)) - (seed ^ 0x3B2BF538)) + deob(w2)
```

followed by a `key_table_size`-byte key table (own deobfuscator), a
`count × (offset,size,dst_size,flags)` entry table, and the blob region.

**Open item (M1b finish line):** applying `stream → CBC` to the file bytes
directly does not yet yield a header that satisfies the parser's sanity
constraints (`0 < count ≤ 0x100`, `0 < key_table ≤ 0x1B00`). Every
individual stage is implemented and verified in isolation (stream cipher
matches the assembly; AES passes FIPS-197; header formulas match the
assembly), so the remaining unknown is the exact hand-off — most likely the
buffer the pipeline receives is *not* the raw file start (the 4-byte
head, or a chunk produced by the `0xf38` dispatcher's `FUN_0000165c`
source reader). Next step: force-decompile `FUN_0000165c` /
`FUN_0000ee70` and trace the buffer provenance.

## 8. Reproduce

```bash
python3 tools/unpack_7ffe.py lib__7ffe__.so out/        # M1  → payload
python3 tools/stage2_crypto.py out/7ffe-payload.dec --fips
# → schedule match 60/60, master key, FIPS PASS
```

Evidence: `evidence/stage2-crypto.json`.
Pseudocode: `decomp/native-loader-7ffe-stage2/` (auto: 269 functions,
forced: 67 additional including the hidden AES block at `0x10500+`).
