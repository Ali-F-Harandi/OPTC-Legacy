# libgame.so — Native Engine Analysis (v16.2.1, arm64-v8a)

> Static analysis target: `split_config.arm64_v8a.apk → lib/arm64-v8a/libgame.so`
> SHA-256 in `hashes.txt`. All numbers below are measured, not estimated.

## 1. Binary profile

| Property | Value |
|---|---|
| Size | 109,319,040 bytes (104.3 MiB) |
| Machine | AArch64 (ELF64) |
| Toolchain | Android clang 19.0.1 (NDK r530567e / r28c, `+pgo, +lto, +mlgo`), LLD 19.0.1 |
| Legacy objects | also links GCC 4.9-era and clang 3.8-era objects (very old codebase) |
| `.text` | 38.2 MiB (`0x2493da4`) |
| `.rodata` | 2.4 MiB |
| `.symtab` | stripped |
| Real dynsym entries | 73 (67 FUNC) — see anti-analysis below |
| Visible strings (≥6 chars) | ~70.5k raw lines, effectively all noise (string encryption) |

## 2. Anti-analysis characteristics

1. **Padded dynamic symbol table.** `.dynsym` advertises 121,242 entries, but
   ~121,169 of them are empty `NOTYPE LOCAL DEFAULT UND` placeholders. Only 73
   real symbols exist. Cheap tools that count dynsym size wildly overestimate
   the exported surface.
2. **No `Java_*` JNI exports.** The Java↔native boundary is 100% dynamic
   (`JNI_OnLoad` + `RegisterNatives`), so static per-method discovery requires
   running code or decompiling the registration routine.
3. **String encryption.** Game strings are stored encrypted; plaintext grep
   yields no engine/game identifiers, no shader names, no log tags.
4. **Embedded encrypted payload.** A **39,927,376-byte** unnamed
   `LOUSER+0` section (file offset `0x422ca10`, non-alloc) sits at the tail of
   the ELF. Entropy is 7.95–7.99 bits/byte across the whole blob — fully
   encrypted/compressed game data shipped *inside* the engine binary.

## 3. Section map (measured)

| # | Section | Offset | Size | Notes |
|---|---|---|---|---|
| 3 | `.dynsym` | 0x2f8 | 0x2c6670 | 121,242 slots (73 real) |
| 7 | `.dynstr` | 0x3d5c6c | 0x68cb7f | 6.5 MiB string table (mostly padding) |
| 11 | `.rodata` | 0x1305000 | 0x2535b0 | read-only data |
| 14 | `.text` | 0x1a77380 | 0x2493da4 | 38.2 MiB of code |
| 16 | `.plt` | 0x3f0b230 | 0xae190 | 28 KiB PLT |
| 19 | `.init_array` | 0x417d750 | 0x5a28 | 2,339 init entries — heavy static C++ ctors |
| 28 | *(unnamed)* | 0x422ca10 | 0x2613e50 | **39.9 MiB encrypted game data blob** |

## 4. Imported capability map (from the 34 real imports)

| Capability | Imports | Interpretation |
|---|---|---|
| POSIX/syscalls | 26 (`mmap`, `mprotect`, `dlopen`, `dlsym`, pthread, …) | self-loading, JIT-style unpacking, thread pool |
| libc | 2 (`__cxa_*` family) | static C++ runtime |
| other | 4 | |

GLES2 / OpenSLES / Android NDK APIs are **not** imported classically — the
engine resolves them at runtime (consistent with the anti-static-analysis
posture). The Java shell (Bisque) confirms GLES2 + OpenSLES usage from the
DEX side (`BQArtilleryJava` surface renderer wrapper).

## 5. Decompilation implications

- **38.2 MiB of code** at a typical ~1.5–3 KB per function ⇒ on the order of
  **13,000–26,000 functions** — the long-tail body of the project.
- The engine ships **its own resource data** (~40 MiB) inside `.so`, so asset
  tooling must parse this section in addition to `assets/*.DAT` chunks.
- Attack order (cheapest wins first):
  1. `JNI_OnLoad` + `RegisterNatives` walk → full Java-facing API table.
  2. `.init_array` census → engine bootstrap order.
  3. The unpacker that consumes the 39.9 MiB tail blob → unlocks asset work
     without touching gameplay code.
  4. `.plt`/GOT resolution stubs → runtime API table reconstruction.

## 6. Evidence

- `evidence/engine-inventory.json` — full machine-generated inventory
  (sections, symbols, strings, URL/crypt hints).
- `tools/extract_blobs.py` — reproduces the tail-blob extraction.
