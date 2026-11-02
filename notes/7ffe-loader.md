# The `lib__7ffe__.so` Loader — Full Chain (M1)

> Status: **chain fully reversed & reproduced by `tools/unpack_7ffe.py`**.
> The embedded stage-2 protector module (153,968 B of ARM64 code) decrypts
> cleanly. `data1.dat` is *not* handled by this loader — see §7.

## 1. What the library is

`lib__7ffe__.so` (1,713,831 B, AArch64, arm64) is a self-extracting
protection loader named after a template string `lib__XXXX__.so` found in
its `.rodata`. Its entire import surface is:

```
dlopen  dlsym  dlclose  dladdr  dlerror
__cxa_atexit  __cxa_finalize  __stack_chk_guard  __stack_chk_fail
```

No `JNI_OnLoad`, no file-I/O imports, no `Java_*` exports. Everything else
— file access, memory management, syscalls — is done through a private
syscall wrapper layer (`FUN_00105e3c` et al.), which is why it looks
"dead" to naive static analysis.

## 2. Bootstrap chain (reversed from Ghidra pseudocode)

```text
.init_array[0] → entry @ 0x1d54
  └─ FUN_0010163c  (bootstrap)
       ├─ FUN_001012bc()            load base (ASLR slide: runtime addr − link addr)
       ├─ FUN_00102a50(base, buf, 0x400, &fmap_off)
       │     └─ FUN_001038d0/FUN_00102c90   parse /proc/self/maps,
       │        find the entry containing `base`, copy the library's own
       │        path out of it (maps entry + 0x2C), return its file offset
       ├─ FUN_00101dd8(path, fmap_off, &payload, &plen, &mapbase, &maplen)
       │     ├─ FUN_00103b64        open + read own ELF header (0x1000)
       │     ├─ walk PT_LOADs       uStack_18 = max(p_vaddr + p_filesz)
       │     │                       = 0x85711 for this build
       │     ├─ FUN_00103c6c        open/fstat/alloc/pread the file tail
       │     │                      from file offset 0x85711 (close at end)
       │     ├─ walk section headers (e_shnum × 0x40)
       │     │                      find sh_type == 0x80000000  (LOUSER+0)
       │     └─ payload = mapbase + (sh_offset − 0x85711) + 0x23C
       │        plen    = sh_size − 0x23C
       ├─ copy 0x1000 B from payload → header buffer
       ├─ FUN_001015f0(hdr)         ★ header self-decrypt (see §4)
       ├─ read header fields:
       │     +0x08 u32 payload data offset   (= 0x20)
       │     +0x0C u32 payload size          (= 0x25970 / 153,968 B)
       │     +0x10 u32 payload key           (= 0x56F3)
       │     +0x14 u32 entry offset          (= 0x5D4)
       │     +0x18 u32 mprotect length       (= 0x15570)
       ├─ alloc(size) + copy payload (payload + 0x20 …)
       ├─ FUN_00101520(key, mem, size, 0)    ★ payload decrypt (see §3)
       ├─ guard pages around [mem, mem+size) (FUN_00105b24 ×2)
       ├─ FUN_00105e3c(0xE2, mem, mprot_len, 7, …)
       │     syscall 226 (mprotect) prot = RWX on the code region
       └─ call mem + entry(handle, base, mem, size, plen, maplen, …)
```

Every step validates and reports rich error codes (`0xA8, 0xB3, 0xBD,
0xC8, 0xEA, 0xFB, 0x33…0x90`) through `FUN_00105f34` — the loader was
built to fail loudly, which made tracing the chain straightforward.

## 3. The cipher — `FUN_00101520` (M1 core result)

A per-dword keystream over little-endian u32 words:

```c
// key: u32 from header+0x10 (or the header's own dword 0 — see §4)
for (i = start_dword; i < size/4; i++) {
    d[i] = (d[i] + (i + 3) * key)  mod 2^32;
    d[i] = d[i] ^ ((i + 1) * 0xBF20165D)  mod 2^32;
}
```

- additive stream: `(i+3)·key`
- XOR stream: `(i+1)·0xBF20165D` (the pseudocode shows `-0x40DFE9A3`,
  i.e. the same constant as signed 32-bit)
- `start_dword` allows partial re-decryption; the bootstrap uses 0.

This is a home-rolled cipher — no standard construction — which is why
no known crypto constants appear anywhere in the binary.

## 4. The self-keyed header — `FUN_001015f0`

The payload header's first 0x20 bytes are themselves encrypted with the
same cipher, keyed by **its own first dword**:

```c
uVar1 = *(u32*)hdr;                    // key = hdr[0] (stays plaintext)
FUN_00101520(uVar1, hdr, 0x20, 0);     // decrypt dwords 0..7
*(u32*)hdr = uVar1;                    // restore dword 0
```

The .so's stored header (file offset `0x7585C` = LOUSER + 0x23C)
 decrypts to:

| field | offset | value |
|---|---|---|
| self key / magic | +0x00 | `0x00007F8C` |
| (reserved) | +0x04 | — |
| payload offset | +0x08 | `0x20` |
| payload size | +0x0C | `0x25970` (153,968) |
| payload key | +0x10 | `0x56F3` |
| entry offset | +0x14 | `0x5D4` |
| mprotect length | +0x18 | `0x15570` |

## 5. Verification (`tools/unpack_7ffe.py`)

```
LOUSER+0 section  : offset 0x75620, size 0x12CA28
payload header @  : 0x7585C (self-key 0x7F8C)
encrypted payload : 0x7587C .. 0x9B1EC (153,968 B)
```

Decrypting with key `0x56F3` yields **valid ARM64 code**:

- entry `+0x5D4` starts `ff432dd1 fd7bbfa9 fd030091 …`
  = `sub sp,sp,#0xD0; stp x29,x30,[sp,#-0x10]!; add x29,sp,#0xC0`
- 265 `ret`, 20 `stp x29,x30` prologues, 34 `nop` in the module
- entropy 7.99 → **4.03 bits/byte**, 54.9% zero fill (relocation/BSS image)
- no readable strings — stage-2 keeps its own string encryption

## 6. What stage-2 is

The decrypted 150 KB module is the actual protector core that runs RWX
in-process: it mounts `data1.dat`, mediates `libgame.so` startup, and
carries its own crypto stack. **M1b status: the crypto core is fully
reversed** — AES-256 (standard T-tables, master key recovered from the
shipped decrypt-order schedule), an evolving stream cipher, a GF(2^32)
deobfuscator, and an LZ77 layer. See **`notes/stage2-crypto.md`** and
`tools/stage2_crypto.py`. Pseudocode lives in
`decomp/native-loader-7ffe-stage2/` (269 auto + 67 forced functions).

## 7. `data1.dat` — ruled out for this cipher

`assets/7ffe/data1.dat` (181,700 B, entropy ≈ 7.98) is **not** wrapped in
the 7ffe container and **not** encrypted by `FUN_00101520` with any
locally-derivable key:

- self-keyed-header scan at every 4-aligned offset: no sane field set
- known-plaintext key solve for DEX/ELF/ZIP/gzip magics at every offset
  (the i-stream makes the key directly solvable from any guessed dword):
  only two coincidental ZIP-shaped hits, both with garbage header fields
- keys from the .so chain (`0x56F3`, header dwords) leave entropy at 7.95+

Conclusion: stage-2 derives its key differently (from process/APK
context) or uses a second algorithm. This is exactly the M1b work item.

## 8. Reproduce

```bash
python3 tools/unpack_7ffe.py <lib__7ffe__.so> <out-dir>
# → 7ffe-payload.enc  (as stored)
# → 7ffe-payload.dec  (runnable stage-2, valid ARM64)
# → 7ffe-unpack-report.json
```

Evidence: `evidence/7ffe-unpack-report.json`.
Pseudocode: `decomp/native-loader-7ffe/functions/` (277 functions).
