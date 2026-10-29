# Stage-2 Protector — Crypto Architecture (M1b)

> Status: **all four embedded module blobs decrypted** (90/90 container
> entries decode cleanly, ARM64 verified at the entry init-fn offsets).
> The AES-256 master key is recovered, FIPS-197 passes, and the
> stream→CBC→tree-LZ pipeline is fully re-implemented in
> `tools/stage2_crypto.py --modules`. Remaining: the 0x11b4/0x3188 patch
> merge, the raw 969 KB register-only blob (id 0xf3), and the separate
> `data1.dat` seed (§7.6). Pseudocode:
> `decomp/native-loader-7ffe-stage2/` (269 auto + 67 forced functions).

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
| `0x258f8–0x2591c` | runtime globals set by ENTRY: obj ptr, **container ptr**, container len, `0x1800` scratch ptr, `[0x2591c]` = container runtime seed (§7) |

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
| `0x0000176c` | `FUN_0000176c` | header-dword deobfuscator: `clmul32(0x94511DD2, v)` |
| `0x00001d40` | `FUN_00001d40` | second deobfuscator (const `0x36DCAC9C`, used for the key table) |
| `0x000015f4` | `FUN_000015f4` | container entry reader: 0x5C-byte block, seeded clmul formulas (§7.4) |
| `0x000013f0` | `FUN_000013f0` | container head decoder + runtime seed `[0x2591c]` (§7.3) |
| `0x00000964` | `FUN_00000964` | container orchestrator: parse entries, register devices, run init fns |
| `0x0000f90c` | `FUN_0000f90c` | device registry: register (id, buffer, size, flags) |
| `0x0000fa20` | `FUN_0000fa20` | device registry: release / zero a device |
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

## 7. The embedded-module container — the M1b hand-off, resolved

The open question ("which buffer does the stream→CBC→LZ pipeline receive?")
is answered: **not `data1.dat`**. The buffer is a ~1 MB container embedded
in `lib__7ffe__.so` itself, directly after the stage-2 blob, and it is
consumed at boot by a *different* (formula-based, no stream/AES) parser.

### 7.1 Where the buffer comes from

The stage-1 bootstrap (file `0x163c`, vaddr confusion in earlier notes) ends
with the only indirect call in the whole library, `blr x8 @ 0x1c68`, with:

```
x4 = payload + align4(hdr[+8] + hdr[+0xC]) = file 0x7585C + 0x20 + 0x25970
   = file 0x9B1EC                    (first byte after the stage-2 blob)
x5 = plen - 0x25990 = 0x106E5C       (exactly the remaining LOUSER+0 bytes)
```

Cross-check: LOUSER+0 section `[0x75620, 0x1A2048)` = `0x23C` prefix +
`0x20` mini-header + `0x25970` stage-2 blob + `0x106E5C` container. ✓

### 7.2 The activation chain (all reversed this pass)

```
ENTRY 0x5d4(x0..x7)
  ├─ [0x258f8]=&obj32, [0x25900]=x4 (container), [0x25908]=x5 (len),
  │  [0x25910]=mmap(0x1800) scratch
  └─ FUN_00000938 → trampoline 0x550 (saves x1..x28, passes &regs)
        └─ FUN_000004a0(regs)
              └─ FUN_00000964(obj, count=0xE2, container, len, 0, scratch)
                    ├─ FUN_000013f0(0xE2, container, _, &src)
                    │     acc = f(count); deob 8-byte head in place;
                    │     [0x2591c] = deob_w1 + acc   ← runtime seed
                    │     src = container + 8          ← THE hand-off
                    └─ loop: FUN_000015f4(src, i, entry)
```

`0xE2` (226) is *not* an entry count — it is only a seed ingredient (and the
`count-1 > 0xE1` check that gates a `fa20` device-release never fires for
it). The real terminator is the `ok` flag: a failed
register/init call ends the loop. In the shipped build **4 entries** parse
cleanly, and `entry[0].src_off = 0x178 = 8 + 4×0x5C` — the table is exactly
as long as those 4 entries. ✓

### 7.3 Head decoder — `FUN_000013f0`

```c
acc  = ((count*0x9D323CD7 >> (count&7)) + 0x5E727D74
      + (count*0x9D323CD7 << (count&0xB)) + 0xF71E3005)      // mod 2^32
st   = 0xCBF0C1D8;
for (i = 0; i < 8; i += 4) {                 // 2 dwords, in place
    w   = head[i/4];
    w   = clmul_deob(w + st);                // clmul32(0x94511DD2, ·)
    w  ^= (i+1)*0xEBE81DBA + acc;
    st  = raw_w;                             // rolling state = previous RAW
}
[0x2591c] = word[1] + acc;                   // seed for the entry reader
```

### 7.4 Entry reader — `FUN_000015f4` (the misnamed "0x165c")

`0x165c` is mid-function; the real function starts at `0x15f4`
`(src, index, dst)`: copies `src + index*0x5C` (92 bytes) to `dst`, then
deobfuscates in place, seed = `[0x2591c]`:

```c
st = 0xF02F7685;
for (off = 0; off < 0x5C; off += 4) {
    w   = dst[off/4];
    w  ^= (st*st) >> 3;                      // 32-bit mul, THEN shift
    w   = clmul_deob(w);
    w  ^= ((seed + 0x96F60B71)*seed) << ((index+1)&3);
    w  += (off+1)*0x79934CF6 + seed;
    w  -= ((seed + 0x9D9B673D)*seed) >> ((off+3)&5);   // 32-bit mul, THEN shift
    st  = raw_w;
}
```

⚠ Two implementation traps (both hit during re-implementation): every
multiply is truncated to 32 bits **before** the logical shifts, and the
clmul operand is `0x94511DD2` (`movz 0x1dd2; movk 0x9451,lsl16`) — the
earlier notes/tools dropped a digit (`0x09451DD2`), which silently broke
every formula-based parse attempt of the previous session.

### 7.5 Container layout & the four modules

```
[8 B obfuscated head]
[4 × 0x5C obfuscated entries]
[~1 MB high-entropy blobs (7.95 b/B — encrypted)]
```

| # | id | flags | src range (container-rel) | dst | init_fn | role |
|---|----|-------|---------------------------|-----|---------|------|
| 0 | 0x81 | 0x20000 | `[0x178, +0x140d8)` | `0x2ef4/+0x2b2` | — | module A |
| 1 | 0x96 | 0x0 | `[0x3428, +0x2a870)` | `0x1443c/+0xe10` | `+0xe678` | module B |
| 2 | 0xf3 | 0x102 | `[0x14fdc, +0xec884)` | — | — | big module (969 KB, register-only) |
| 3 | 0xe3 | 0x0 | `[0x101860, +0x1a638)` | `0x1067c0/+0x811` | `+0x23d8`, `+0x5ad8` | module D |

Entry word map: `+0 id, +4 flags (bit1 = blob-at-+8, bit8 = register-only),
+8 src_off, +0xC src_size, +0x10 dst_off, +0x14 dst_size, +0x18 id repeat,
+0x1C init-fn offset, +0x20 second fn-ptr offset`. The loader registers each
blob as a "device" (`FUN_0000f90c`, id-keyed table) and — unless bit 8 —
calls `blob + entry[+0x1C]` as an init function (and `*(blob +
entry[+0x20])` indirectly), i.e. these blobs are ARM64 sub-modules.

Reproduce: `python3 tools/stage2_crypto.py <lib__7ffe__.so> --container`.

### 7.6 What this means for `data1.dat`

`data1.dat` (181,700 B) is **not** this container and is not consumed by
this chain; it must be loaded later through the game-side path (the
`FUN_0000dd70` parser + `0xdacc/0xdafc` stream→CBC fragment), probably with
a different seed than the static `[0x257e8] = 0x14B4`. Its 4-byte head
(`0x3ecbf1da` LE) is a candidate seed source — next M1b item, now unblocked
by the clmul-constant fix.

## 8. The four module blobs — decrypted (stream→CBC→tree-LZ)

The per-entry processing hidden behind the orchestrator (all reversed this
pass): entries **without** flag bit1 do not point at raw code — their
`(src_off, src_size)` range is a **nested dd70 container**, and
`(dst_off, dst_size)` a second one (a patch source):

```
0x964  flags bit1? -> blob = container+src_off (raw, register-only)
       else FUN_00001088 -> FUN_00000dc8 -> dd70(container+src_off, src_size)
                             -> module image (malloc(total_size))
       FUN_00000f0c: if dst_size -> dd70(container+dst_off, dst_size)
                             -> patch image -> 0x11b4 merge -> 0x3188 apply
       0xf90c register device (id, blob, size); unless bit8: call
             blob+entry[+0x20](scratch) then blob+entry[+0x1C](obj,...)
```

### 8.1 The nested dd70 container

```
[3 obfuscated dwords]  total_size | count | flags<<8 | key_table_size
[key_table_size B]     the LZ decode TREE (two deob layers, §8.2)
[align4][count pairs]  {u32 chunk_off, u32 chunk_size} (obfuscated)
[chunks]               per chunk: stream -> CBC -> scatter -> LZ/copy
```

Header formulas = the §7 formulas with seed `f([0x257e8]²)` = `0x64f480d6`.
`total_size` is the **output image size** (it equals the outer entry's
src_size field), count ≤ 0x100 chunks.

### 8.2 The key table IS the Huffman tree

After the dword-`clmul` layer and the byte-add layer, the key table is a
flat array of 3-byte nodes `{u16 value; u8 bits}` (bit 15 of value = leaf
flag). Decoding (FUN_0000f2a4, bit reader f15c/f1b4/f200 = LSB-first,
32-bit peek): `root = tree[next 8 bits]`; a leaf root's `bits` is the code
length (3–8 bits); internal roots (bits = 8) descend by testing bits 8, 9,
… with children at `(value & 0x7FFF) + bit`. Symbols are 15-bit.

### 8.3 Chunk pipeline and scatter format

Each chunk: `eb34` stream-decrypt (key `[0x257e8]` = 0x14B4), then `fc30`
AES-256-CBC with the shipped schedule — **block count = len >> 4 (FLOOR)**:
the trailing `len % 16` bytes are never CBC-processed (the `+0x10` malloc
slack is defensive, not padding). The plaintext is a scatter block:

```
{u32 base; u32 n; u32 entries_off; u32 data_off}
n x 16B {u32 dst_off; u32 dst_size; u32 src_size; u32 pad}
data at data_off: packed src_size chunks
```

`FUN_0000ecd8` walks entries with a running cursor (advancing by src_size)
and `FUN_0000ee70` dispatches: `src_size == dst_size` → memcpy, else the
tree-LZ (FUN_0000f9f4): `sym&0x300` selects literal / 2-byte accumulator /
RLE-of-last-1|2|4-byte-unit × (accum or 1) / windowed copy of `lo` bytes
from distance `accum + lo`.

### 8.4 Two re-implementation traps (both cost a debugging round)

- **32-bit truncation before shifts**: every `(seed + K) * seed` product
  must be cut to 32 bits *before* the `<<`/`>>`. Python keeps the full
  64-bit product, so `((seed+K)*seed) >> 5` leaks product bits ≥ 32 into
  the mask — the decode still *looks* plausible (16 low bits right) but
  the high bits are garbage.
- **Counter-based shifts, seed-based constants**: the pairs-deob shifts
  are `((i&3)+3)` and `((i&7)+5)` — Ghidra mis-decompiled them as
  seed-derived because `ldr x1` (counter) is followed by `and w1` (the
  same register's low half). Verified against the raw assembly and then
  empirically (chunk offsets tile the container exactly).

### 8.5 Results (90/90 entries, zero failures)

| id | kind | image | chunks | entries | patch |
|----|------|-------|--------|---------|-------|
| 0x81 | dd70 | 0x140d8 B | 5 | 5/5 | 0x2b2 B, 9/9 |
| 0x96 | dd70 | 0x2a870 B | 13 | 25/25 | 0xe10 B, 35/35 |
| 0xf3 | raw inline | 0xec884 B | — | register-only | — |
| 0xe3 | dd70 | 0x1a638 B | 8 | 8/8 | 0x811 B, 8/8 |

ARM64 verified: `0xe3+0x23d8` = `sub sp, sp, #0xa0; stp x19, x30, …`
(classic prologue), `0xe3+0x5ad8` and `0x96+0xe678` = `adrp x1, …; ldr
x0, [x1, #…]; mov w0, #1; ret` (init stubs). The images have zero gaps
where the patch containers plug in — that merge (`0x11b4` builds a
0x518-byte table, `0x3188` applies it) is the next M1b item, as is the
still-encrypted 969 KB raw blob (id 0xf3, consumed by a later stage).

## 9. Reproduce

```bash
python3 tools/unpack_7ffe.py lib__7ffe__.so out/        # M1  → payload
python3 tools/stage2_crypto.py out/7ffe-payload.dec --fips
# → schedule match 60/60, master key, FIPS PASS
python3 tools/stage2_crypto.py lib__7ffe__.so --container
# → embedded module container: head, seed, 4 entries with blob ranges
python3 tools/stage2_crypto.py lib__7ffe__.so --modules \
    --payload out/7ffe-payload.dec --out out/modules
# → 4 decrypted module images (90/90 entries, ARM64-verified init fns)
```

Evidence: `evidence/stage2-crypto.json`.
Pseudocode: `decomp/native-loader-7ffe-stage2/` (auto: 269 functions,
forced: 67 additional including the hidden AES block at `0x10500+`).
