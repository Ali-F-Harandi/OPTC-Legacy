# M3 — Module 0x9d: the REAL game code, decrypted (merged.bin)

> Status: **0x9d FULLY DECRYPTED** — 71,638,088 bytes (0x446FCC8) of restored
> engine code + data, 12,998 chunk entries, **0 failures**, plus its 6.9 MB
> patch (2,168 entries, 0 failures). 80,005 function symbols recovered from
> module 0x9e. The data1.dat consumer hunt is now possible in the clear —
> findings below.
> Reproduce: `python3 tools/m3_decrypt_9d.py` (→ `m3/m9d_image.bin`,
> `m3/m9d_patch.bin`, `m3/symbols.json`).

## 1. Who consumes 0x9d — module 0x9b (the runtime driver)

Module **0x9b** (f7-container entry[5], dd70+patch, `init_fn=0x2f68`) is the
runtime consumer of the raw 0x9d blob. Its init chain:

```text
e7 orchestrator → 0x9b.init(+0x2f68) → FUN_00002910:
  rec9d = registry_lookup(0x9d)            ; the 31.7 MB raw blob
  copy 0x5C bytes from rec9d->ptr          ; the module descriptor (entry[0])
  g = DAT_00020210 = 0x129E7AF1            ; 0x9b's private key constant
  decode entry[0]  (see codec below)
  rec9e = registry_lookup(0x9e)            ; the symbol-restoration DB
  tail  = 0x9e_img + align4(img[0]) + 8    ; 0x88-byte DT_NEEDED table
  FUN_00002438(patch installer twin) with:
      (entry0, rec9d->ptr, rec9d->size, 0x9e+8, 0x9C97B4)
  registry_release(0x9d); registry_release(0x9e)
```

`FUN_00002438` is the game-side twin of the stage-2 patch installer
(0x00000f0c → 0x11b4 ctx → 0x3188 merge → relocs → BSS clear → clear_cache →
init/fini arrays). Module 0x9e is installed as a real module — its 0x88-byte
trailing table is the **DT_NEEDED import list**:

```text
libandroid.so libOpenSLES.so libGLESv2.so libEGL.so libz.so liblog.so libm.so libdl.so libc.so
```

## 2. 0x9d's private container codec (new — differs from the chain's)

The 0x5C-byte entry decode in `FUN_00002910` (NEON-vectorized in the binary):

```text
m1 = (g + 0xD3E87144) * g          ; g = 0x129E7AF1
m2 = m1 + g * 0x0BD9418D
dec[j] = (raw[j] - (m1 << 4*(j&1))) ^ (m2 >> ((g + 4j) & 7))     j = 0..22
```

(vs the matryoshka chain's chained-square codec with 0x96F60B71/0x06A55BCC.)

Decoded entry[0] of the 0x9d blob:

```text
id=0x9d  flags=0x100  src_off=0x5C  src_size=0x446FCC8 (71.6 MB total)
dst_off=0x1D37694  dst_size=0x6A3C4B (6.9 MB patch, decompressed size)
```

i.e. **0x9d is itself a dd70 module+patch pair** — src_size/dst_size are
*decompressed totals*; the stored extents live inside the 0x1EAFC10-byte blob.

## 3. The keys

* **stream key 0x39BC** — solved algebraically from the dd70 head: the
  expected total 0x446FCC8 pins the seed (0x2A108682), and 0x39BC is the
  only 16-bit key with `container_seed(key) == seed` (count=16, kts=0x1020,
  flags=0 all sane).
* **private AES-256 schedule** at `0x9b+0x2021C` (240 bytes, preceded by the
  `{0xF4, 0x000E0100}` marker at 0x20214/0x20218 — tighter layout than the
  eN processors' `+0/+8/+0xC`).
* `g = 0x129E7AF1` sits at `0x9b+0x20210`, four bytes before the marker.

Chunk pipeline: `stream(0x39BC) → CBC(0x9b's schedule) → tree-LZ` —
the same dd70_extract as everywhere else, only the keys differ.

## 4. What the decrypted 0x9d contains

| region | contents |
|---|---|
| `[0, 0x1400000)` | zeros — reserved for libgame.so's ELF/dynsym/dynstr/rodata space |
| `[0x1400000, 0x1500000)` | plaintext strings (163,683 of them: asset names, CRI errors, UI text) |
| `[0x1C00000, 0x4000000)` | **36 MB of dense ARM64 code — the restored engine .text** |
| `[0x4000000, 0x4230000)` | pointer tables / GOT (470 import slots) |
| `[0x4230000, 0x446FCC8)` | zeros (BSS) |

**Module offsets == libgame.so virtual addresses.** The 0x9d module is a
.text overlay for the blanked engine: 288,942 type-0x403 base-relocs rebind
its internal pointers; 441 import relocs fill the GOT at 0x41744B0..0x4228160
(AAssetManager_open @ 0x41BC470, fopen @ 0x41FF968, …). The PLT at
[0x3F0B230, 0x3FBD230) is zero in the image — the stubs are emitted at
runtime by the e1 trampoline builder from device 0xb2's 272 records
({type, got_slot, idx, idx}), each record naming one of the 470 import slots.

### The patch (6.9 MB)

425 unique imports, incl. `AAssetManager_open/fromJava/read/seek/close`,
`fopen/open/access`, zlib (`deflate*`, `crc32`, `adler32`), OpenSSL
(`EVP_*`, `CMS_*`, `Camellia_*`), sockets. 289,371 relocs total
(288,942 × 0x403, 424 × 0x402, 17 × 0x401, 29 × 0x101).

## 5. 0x9e is the blanked-dynsym restoration DB

Contrary to the M2c note ("0x9e = game engine with dense ARM64"), 0x9e
contains **zero instructions** — it is a pure database:

* header `{total=0x9C97B4, hdr=0x88, count=0x1D998 (121,240 ≈ libgame's
  121,242 dynsym slots), ?, idx_off=0x2C6650, pool_off=0x33CCB0, 1, 0x12}`
* 80,005 FUNC records `{name_off, 0x000E0012 (shndx 0x0E, GLOBAL FUNC),
  value→libgame.so .text addr, 0, size, 0}` (0x18 bytes, tail-shared names)
* u32 index array `[0x2C6650, 0x33CCB8)`
* 6.5 MB mangled-name pool (cocos2d-x, masterdb, litesql, CRIWare, bisque,
  Quest/Kizuna/PiratesArena …)

`symbols.json` maps every restored function → name; e.g.
`bisqueBase::IO::Impl::Directory_Android`, `BQFileStream_Android::open`,
`cocos2d::CCFileUtils::getFileData`, `bisqueBase::util::BQFileDecoder`.

## 6. The data1.dat consumer hunt (in the clear)

Exhaustively verified **the name "data1.dat" does not exist anywhere**:

* game code (71.6 MB): plain, single-byte XOR, ADD-const, byte-reversed,
  UTF-16, the `~rotl8(c,5)-(i&3)` obfuscation (contiguous and as movz/movk
  immediates) — 0 hits for `data1.dat`, `7ffe`, `assets/`, `.dat`
* 0x9e symbol/name pool, all protector modules (stage-2, e0/e1/e3 twins,
  0x8f, 0x9b, 0x98, 0xb0) — 0 hits
* DEX: string ids 23589 (`data1`) / 23590 (`data2`) in classes4.dex have
  **zero const-string references** (bytecode-scanned 0x1A/0x1B opcodes)

The obfuscated-string layer (`plain[i] = (~rotl8(c[i],5) - (i&3)) & 0xFF`,
deobfuscators 0xd528 in stage-2 / FUN_000091ec in 0x8f) yields only
environment strings: `/proc/self/{maps,exe,cmdline,environ}`,
`ro.product.cpu.abi`, `persist.sys.dalvik.vm.lib`+`libart.so`,
`/system/lib/libhoudini.so`, `.apk`, `libc.so`, `__bss_start`-family,
`dlopen/dlsym/dl_iterate_phdr`.

### The file-access machinery (fully identified + named)

```text
0x8f+0x4958  build split-file table from /proc/self/maps (0x38-byte records)
0x8f+0x1890  find + openat(AT_FDCWD, <pkg>.apk)          [0x8f+0x1f940 = path cache]
e1+0x8e24    read_zip_entry(zip_path, name, out)
e1+0x9e94    ZIP parse: EOCD 0x06054B50 (back-scan) + CD 0x02014B50 walk
             + ×31-rolling-hash name table (linear probe)
e1+0x9f24    hash lookup(name)  →  e1+0xa024 extract entry (method/crc/sizes)
game code    bisqueBase::Data::NtyReader + BQ1599BisqueKey
             + BQ15916/BQ15921 StreamDecoder::sinatraCall  (the cipher family)
             + bisqueBase::util::BQFileDecoder::createDecoder/extractToMemory
```

### Conclusion

`7ffe` is the **build-randomized tag** shared by the protector library name
(`lib__7ffe__.so`) and the asset directory (`assets/7ffe/`). The consumer
does not carry the literal path — it is derived at runtime (the loaded
library name is available via the e1 maps-walker / dladdr machinery), then
resolved through the ZIP reader and the bisqueBase NTY/BQ decoder stack.
Testing 0x9b's freshly recovered keys (stream 0x39BC, its private AES
schedule) against data1.dat stays **negative** — the 16-bit-granular cipher
belongs to the bisque `sinatra` decoder family, not to the protector stack.

Next steps for M3b: (1) map the 272 0xb2 trampolines onto the 470 import
slots to statically resolve the game code's PLT calls, (2) decompile
`NtyReader::open` / `GlobalNtyPool::findVolumeByName` / the sinatra decoders
with resolved call targets, (3) locate the runtime construction of the
`7ffe/data1.dat` name and the BQ1599 key schedule, then (4) decrypt data1.dat
with its true consumer keys.
