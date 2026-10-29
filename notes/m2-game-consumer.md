# M2 — The Game-Side Consumer (libgame.so ↔ protector protocol)

> Status: **consumer located and fully decrypted**. libgame.so is a ~35 KB
> stub wrapped around a 38.5 MB encrypted payload appended as an ELF
> `LOUSER+0` section. The payload boots a **second instance of the same
> stage-2 module system** (99.84 % byte-identical to the protector's), with
> its own AES-256 master key, its own stream seed, and its own device
> registry. The device-registry consumers (52 e1 dispatchers, 16 e3
> dispatchers) target game-registered devices `0x8f / 0xb0 / 0xb2 / 0x1`
> through lazy-binding trampolines. All four game modules decrypt cleanly
> (5/5, 25/25, 8/8 entries). Evidence: `evidence/m2-game-consumer.json`.

## 1. Load order (Java side)

```text
EntryApplication.attachBaseContext(ctx)          classes6.dex
  └─ util001/framework/load.entry()              (empty method — triggers <clinit>)
       └─ load.<clinit>: System.loadLibrary("__7ffe__")     ← protector FIRST
AppActivity.<clinit>                             classes4.dex
  └─ System.loadLibrary("game")                  ← libgame.so, later
```

`lib__7ffe__.so` exports nothing (SONAME is even a placeholder
`lib__XXXX__.so`) and `libgame.so` does not depend on it — so the two
libraries connect **only through the hidden protocol below**.

## 2. What libgame.so really is

| region | contents |
|---|---|
| `[0, 0x1a77380)` | ELF headers, 121,242 dynsym entries — **121,203 blanked** (name+value zeroed by the protector), 6.8 MB dynstr zeroed to 84 strings |
| `.text [0x1a77380, 0x3f0b124)` | **only `[0x1a77380, 0x1a80000)` is real code** (~35 KB stub); the rest is zero fill |
| `.plt [0x3f0b230, …)` | 65 stubs — **never called** (no `bl`, no GOT loads anywhere in .text) |
| shdr[28] `LOUSER+0` file `[0x422ca10, +0x2613E50)` | the encrypted payload — outside every PT_LOAD |

No `JNI_OnLoad`, no `Java_*`, no `ANativeActivity_*` exports — the entire
cocos2d-x JNI surface (`Cocos2dxRenderer.nativeRender` & co, declared in
classes4.dex) is mediated by the hidden module system.

## 3. The stub bootstrap (all offsets are libgame.so vaddrs)

```text
init_array[0] 0x1a77e34  — universal thunk: saves x0..x30, calls 0x1a7771c(sp)
0x1a7771c bootstrap:
  ├─ 0x1a7739c   self ASLR delta (adr + subtraction)
  ├─ 0x1a78b30   walk /proc/self/maps (0x1a799b0 reader, 0x1a78d70 matcher:
  │              perms rwx parse, path at entry+0x2C) → own library path
  ├─ 0x1a77eb8   open own ELF (openat via 0x1a7bf78), parse ehdr/phdrs
  │              (e_phoff@+0x20, e_phnum@+0x38, 56-byte phdrs):
  │              max_end = max(p_offset + p_filesz over PT_LOAD) = 0x422ca10
  │              shdr walk (64-byte entries) → sh_type 0x80000000 (LOUSER+0)
  ├─ payload     = LOUSER base + 0x23C prefix (same as protector stage-1!)
  ├─ 0x1a776d0   self-keyed header decrypt (key = dword 0, first 0x20 bytes)
  │              0x1a77600 = the stage-1 cipher: v += (i+3)*key; v ^= (i+1)*0xBF20165D
  ├─ header      data_off=0x20 size=0x25970 key=0x6F07 entry=+0x5D4 mprot=0x15570
  ├─ decrypt     0x25970-byte stage-2 image with key 0x6F07
  ├─ mprotect    RWX (raw syscall 226), guard pages via 0x1a77498
  └─ blr entry(saved_x0, delta, base, size, adj_base, adj_size, x6, x7)
```

**The stub never links libc**: every file/memory operation is a raw
`svc #0` through the wrapper at `0x1a7bee8` (syscall nr in x8, via the
multiplexer `0x1a7bf1c`). Commands seen: 56 openat, 57 close, 62 lseek,
63 read, 215 munmap, 222 mmap, 226 mprotect. That is why no `dlopen` /
`/proc/self/maps` strings or hooks are visible in libgame.so.

## 4. The game's stage-2 — a twin of the protector's

`diff` against `7ffe-payload.dec`: **245 bytes differ, all in
`[0x257e4, 0x258e3]`** — the config words and the AES-256 schedule:

| field | protector | game |
|---|---|---|
| `[0x257e4]` | `0x26` | `0x1D99A` |
| `[0x257e8]` stream seed | `0x14B4` | `0x2B47` |
| AES-256 master key (BE) | `0cff25e7…348e20b9` | `6384b59af089ddb817d7eed5086b3e0753267758ab81841ae97cb17a54d70d58` |

Schedule re-expansion validates **60/60 words**; the Td0-Td3/InvSBox/Rcon
tables are byte-identical. The 8-arg entry convention, the container
orchestrator, and the module format are the same — only the keys differ.

## 5. The game's embedded container (file 0x42525DC)

Runtime seed `0xE12BAC93`; the entry table is exactly 4 entries
(`entry[0].src_off = 0x178 = 8 + 4·0x5C`):

| # | id | flags | src size | note |
|---|----|-------|----------|------|
| 0 | 0x81 | 0x20000 | 0x140d8 | e0 twin — 5/5 entries; **2 bytes differ** vs protector copy |
| 1 | 0x96 | 0x0 | 0x2a870 | e1 twin — 25/25; **6 bytes differ** (+0x29ae8 ptr const, +0x2a1b0 handshake cookie `0x9C11C027` vs `0x6C5EFD24`) |
| 2 | 0xf3 | 0x102 | **0x25D3CC0 (38.5 MB)** | **the real game code** — raw register-only, still encrypted |
| 3 | 0xe3 | 0x0 | 0x1a638 | e3 twin — 8/8; **241 bytes differ, incl. a private AES-256 schedule** |

## 6. e3's private crypto (the data1.dat lead)

Both e3 modules carry a stage-2-style trailer at `+0x1a1f0`:
`0xF4` ctx size, `0x000E0100` (256-bit / 14 rounds), then a 240-byte
reversed schedule at `+0x1a1fc` — **different from the stage-2 key and
different between the protector's e3 and the game's e3**:

```
game e3       master key (BE): 851356332f2f8a5ead4baa14c8908068
                                  db7a949d8a6ec82d074b83bc8e430f4a   (60/60)
protector e3  master key (BE): 641f783d3163b6cbd7ddd65e716fb7
                                  a3b3b46c7748b2bab88252c118140a76   (60/60)
```

And e3's **head-decoder formulas differ from the stage-2 dd70 set**
(`0x4178CB33`, `0xF119421B`, `0x5590AD79` vs the stage-2
`0xEBE81DBA`-family). Since M1b's exhaustive data1.dat seed sweep used the
**stage-2** formulas only, data1.dat must be retried against **e3's**
formula set and e3's AES key — that is the M2b/M3 opening move.

## 7. The device-registry consumers (the protocol's shape)

```
e1 registry API (protector + game twins):
  +0xe678 set(registry)          +0xe688 get()
  +0xe694 lookup(desc) -> rec->ptr + desc->offset
  +0xe6cc raw_scan(id, registry) +0xe724 register(registry, id, ptr, size, flags)
  +0xe7f4 release(id, registry, free)
e3 twins: +0x5ad8/+0x5ae8/+0x5af4/+0x5b2c/+0x5b84
```

* **52 lazy dispatchers** in e1 `[0xd0b0, 0xe668]`: cached fn ptr → on
  miss, `lookup(static {id, offset} descriptor)` → call under a lock.
  Descriptor table at `0x2a008..0x2a1a8`: 49 entries → **device 0x8f**
  (offsets `0x15a4..0x51fc`), 2 → device 0x81, 1 → `{0x1, 0x5}`.
* **16 dispatchers** in e3: 9 → device 0x96 (e1) at `0x29f4..0x820c`,
  7 → device 0x8f.
* Devices `0x8f / 0xb0 / 0xb2 / 0x1` are **not registered by either
  loader** — they are game-side registrations (the 38.5 MB module's
  runtime work).
* **Trampoline builder** `e1+0x836c → 0x88fc`: reads device 0xb2's
  `{count, hdr_off, records}` table, emits one thunk per record from the
  template at `e1+0x8c18` (saves every register **except x9**, calls
  `dispatcher(&{id, prng_offset})`, `mov x30, x9; ret` — a lazy-binding
  PLT), patches per-record literals from a `x²>>17 / <<11` seed PRNG,
  `mprotect` R+X, and plants the array pointer at **`0xb0_base + 0x12008`**
  (dispatcher fn itself at `0xb0_base + 0xa54`). The game then calls
  protector services through that array with full register preservation.
* **`e3+0x2084`** is a complete copy of the stage-2 container orchestrator
  (head 0x2870 / entry 0x297c / dd70 0x2644 / register 0x5b84) with
  **no internal callers** — the externally-invoked second-level loader the
  game uses for runtime containers (data1.dat is the prime candidate).

Both stage-2 instances run the same code, so the protocol is symmetric:
the protector-side registry serves the protector's modules, the game-side
registry serves the game's modules, and the `0xb0` handshake cookie
(differs per side) identifies the channel.

## 8. Reproduce

```bash
python3 tools/stage2_crypto.py <libgame.so> --game [--out dir]
# → game stage-2 (decrypted), master key, stream seed, container table
```

Module images / patches / the 38.5 MB raw blob are reproducible with the
same pipeline as M1b (`dd70_parse`/`dd70_extract` with
`key=0x2B47`, game stage-2 tables and schedule).

## 9. M2b addendum — e3 formulas are folded stage-2 math; data1.dat key-matrix negative

Full disassembly of e3's container stack (dd70 `+0x2d34`, head `+0x2870`,
entry `+0x297c`, stream `+0x33ac`, chunk pipeline `+0x2b10`) proves every
"differing" constant is **compiler constant-folding**, e.g.
`0x4178CB33 = 0xEBE81DBA + 0x5E727D74 + 0xF71E3005 (mod 2^32)`,
`0xF119421B = 5×0xEBE81DBA + …`, `0x5590AD79 = 0x5E727D74 + 0xF71E3005`,
dd70 mulB `0xF1CB5B81 − 0x23B32203 = 0xCE18397E`, pair m2
`0xB31F451C − 0x822FE82D = 0x30EF5CEF`, entry addend
`0x79934CF6 + i×0xE64D33D8 = (4i+1)×0x79934CF6`, entry subtrahend
`0x96F60B71 + 0x06A55BCC = 0x9D9B673D`. Consequence: M1b's exhaustive
seed sweeps already covered e3's formula space.

The genuinely new variables — the key set — were then tested exhaustively:

* e3 stream keys `[0x1a2f8]`: game `0x461f`, protector `0x6c74`
  (read-only at runtime);
* e3 private AES-256 schedules (both copies, 60/60 re-expansion);
* game stage-2 key (`6384b59a…`, x=`0x2b47`), protector stage-2 key;
* views {body, full}, orders {stream→CBC, CBC→stream}, no-stream/no-CBC
  variants, head-derived keys;
* oracles: scatter-header sanity (calibrated PASS on real M1b chunks:
  `n=1, eoff=0x10, doff=0x20`), dd70 re-parse, printable/entropy.

**Result: 0 hits in every combination.** e3's chunk pipeline semantics are
confirmed correct (CBC = e1+0x820c via registry descriptor `{0x96, 0x820c}`,
zero IV, `size>>4` floor — identical to stage-2), so data1.dat simply does
not use any protector-side key.

Consumer hunt: `data1`/`data2` are **unreferenced pool strings** in
classes4.dex (no const-string users); `assets/` appears only in
`Cocos2dxHelper.init`; all decoded native strings (stage-2 ×53, e1, e3 full
range, libgame.so stub) contain no `data1`/`7ffe` path; no device-`0xf3`
lookups or descriptors exist in e1/e3/stage-2. **The consumer lives inside
the still-encrypted game code** (device 0x8f / the 38.5 MB `0xf3` blob),
which shares the `[4B][16-aligned]` scheme family with data1.dat and the
protector's e2 blob.

Details: `evidence/m2b-data1-e3-retest.json`.

## 10. M2b addendum 2 — exhaustive stream-key sweep + the 16-bit-granular discovery

A PCLMULQDQ-accelerated C sweep (`evidence/m2b_x_sweep.c`, self-tested
against the Python reference) covered **all 2^32 values of the stream key**
against prefix oracles (the first 4 decrypted dwords depend on the key alone),
on both the `[4B head][body]` and full-file views:

* **scatter oracle** (plaintext = `{base, n, eoff=16, doff}`, calibrated on
  real M1b chunks): **0 hits in the entire key space**;
* **dd70 oracle** (count/kts/total sanity, seed = f(x)): 156 raw candidates
  = chance rate; 41/41 sampled fail the exact-cover tiling check.

**data1.dat is not encrypted with the e3/stage-2 stream cipher under any
key** — completing the requested e3-formula + e3-AES-key test with a
definitive negative.

Ciphertext-only cryptanalysis then found *what it actually is not*:

* byte chi2/df = 16.03 (uniform ~1.0) with **all bias on EVEN bytes** —
  the low byte of every u16 (chi2 27.2 vs 1.4 on odd bytes);
* **bits 0-1 of every u16 are biased** (P(b0=1)=0.441, P(00)=32.6%),
  all other bits ≈ 0.500 — i.e. dword bits 0,1,16,17;
* theorem: the `(-x)^x` construction preserves bit 0 of the plaintext
  exactly (the i-dependent constants cancel too) — verified empirically;
* but the dword cipher **cannot** leak bit 16 (measured 0.503-0.506 when
  encrypting real ARM64/scatter plaintexts) — so data1.dat's cipher has
  **16-bit granularity**;
* frequent u16s are multiples of 256 (`0xe000, 0xc000, 0xf000, 0x7000…`)
  and frequent even bytes are all ≡ 0 mod 4 (`00 e0 70 c0 f0 9c 38…`);
* ruled out: raw deflate/lzma/brotli, repeating-key XOR (no period ≤16K),
  a u16 port of the stream cipher (all 65536 keys × 2 variants),
  shift-XOR obfuscations (u16/u32, all k), delta/xor chains, the stage-1
  family (13 keys × u32/u16).

The e2 and game-0xf3 blobs are statistically UNIFORM (chi2 ≈ 1.1) — so
data1.dat's weaker 16-bit-granular scheme is unique among the encrypted
assets, and its consumer lives in the still-encrypted game code.
Notably, **bits 0-1 of every u16 of data1.dat are plaintext bits readable
without any key** — a 90848-bit known-plaintext surface for future work.

Details: `evidence/m2b-x-sweep.json`.
