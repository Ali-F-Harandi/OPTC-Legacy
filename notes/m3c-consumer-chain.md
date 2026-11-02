# M3c — the sinatra consumer chain end-to-end (factory, ciphers emulated, key provenance, the cache)

> Status: **the full NTY read path is mapped and *executable* statically:
> the decoder factory, all three cipher cores (custom-AES-192 / CAST-128-style /
> RC4-with-255-byte-reload — M3b's RC4 semantics corrected), the key-expansion,
> the default-key provenance, the NTY header format, and the local-cache path
> scheme.** Every embedded key × every core tested against `data1.dat` =
> negative (55,520 rodata strings swept for the RC4 core, 0 hits) — the
> data1.dat volume key is per-volume (APU descriptor) or cache-side, not a
> static string. Tools: `tools/m3c_*.py` (Unicorn emulation harness included)
> · superseder of the M3b §4 work list.

## 1. The class DAG (RTTI-exact, corrected vtable reading)

`0x417aa90` = vtable of `__cxxabiv1::__class_type_info`, `0x417aae0` =
`__si_class_type_info` — that is how si/class TIs are distinguished. True
families (vtable object start = address of the offset-to-top slot; a vptr in
an object points at vt+0x10):

```
IO::Stream (ti 0x3fe4ec0, no base)
├─ IO::FileStream                     vt@0x414b958-family…(0x414ba20)
│  └─ IO::Impl::BQFileStream_Android  vt@0x414b958 (25 slots; slot3 read→0x39f544c)
├─ IO::BinaryStream                   vt@0x414b6d0
├─ IO::Private::ClipStream            vt@0x414a548 (21 slots)
├─ Data::BQ15915BQ159ReadStream       vt@0x3fe4e30 (16 methods; slot4 = sinatraCall)
├─ Data::BQ15927BQ159SeqnentialDecodeStream vt@0x3fe5cf0
└─ Data::NtyReader::NtyInnnerFDS      vt@0x414a600

Data::BQ15913StreamDecoder (ti 0x3fe4f78, ROOT — not a ReadStream!)
├─ BQ15918StreamDecoderPlane          vt@0x3fe4f48
└─ BQ15921AbstractStreamDecoder       vt@0x3fe5038 [dtor,dtor2,seek 0x1ef41e8,read 0x1ef424c]
   ├─ BQ15916StreamDecoder159         vt@0x3fe4fd0 (+slot4 0x1ef4320→cipher159)
   ├─ BQ15916StreamDecoder144         vt@0x3fe5070 (+slot4 0x1ef45a0→cipher144)
   └─ BQ15916StreamDecoder40SE        vt@0x3fe50c0 [0x1ef45b4,0x1ef4644,seek 0x1ef46d4,read 0x1ef4758]

Data::BQ1597Decoder (ti 0x3fe5be0, ROOT) — thin wrappers over the SAME cores:
├─ BQ15910Decoder159  [.., 0x1f1cef0, 0x1f1cf38→PLT cipher159]
├─ BQ15910Decoder144  [.., 0x1f1cf48, 0x1f1cf90→PLT cipher144]
├─ BQ15910Decoder40SE [.., 0x1f1cfe4, 0x1f1d02c→PLT RC4 PRGA]
└─ BQ15912DecoderPlane [.., 0x1f1ce78, 0x1f1cec0 = PLAIN memcpy — identity!]
```

**sinatraCall (0x1ef3ae4) is slot 4 of `BQ15915BQ159ReadStream` and
tail-calls slot 5 (`vptr+0x28`)** — the base returns −1; concrete streams
override slot 5. The M3b guess "per-block transform behind +0x28" resolves
to the standard virtual-read indirection.

## 2. The decoder factory (0x1ef3750) and the volume-entry format

`factory(sret_0x50, ctx, index, keydesc)` — created via PLT `0x3f2c2b0`:

```
ctx+0x4b0 = volume count ; ctx+0x4a0 = linked list ; entry = walk(+0x10) index times → [entry+8]
volume fields:  +0x25c flags   +0x260 class-bits   +0x264 index
                +0x268 offset  +0x26c size         +0x270 mode
class selection:  flags bit29 → BQ15918DecoderPlane (0x20 B, no init)
                  bits bit0  → SD159      (new 0x58, ctor PLT 0x3f2c570 → 0x1ef4078)
                  bits bit2  → SD144      (same ctor)
                  bits bit1  → SD40SE     (new 0x168, ctor PLT 0x3f2c560 → 0x1ef3e20)
all ctors receive (stream, keydesc);  [sret+0x30] = size − mode-delta
```

`AbstractStreamDecoder::read` (0x1ef424c) loops **32-byte blocks** through the
block codec 0x1ef4338, which reads 32 B from the wrapped stream, then calls
`this->vtable[4] (this, key, in, out, len)` — the per-class cipher — or a raw
memcpy when `this->0x20 == NULL` (**no key = stored plaintext**).

## 3. The three cipher cores (all Unicorn-verified)

`tools/m3c_emu.py` maps the restored image + shipped `.plt`/bootstrap overlay,
hooks the 4 protector memory services (calloc/malloc/memcpy/free on GOT
0x41cad68/0x41b9178/0x41b8830/0x41b9198 — plain Android imports, resolved by
the runtime trampoline builder), sets up TLS/canary, and runs:

### 3.1 key expansion `0x39d39f4(desc_out, key, keylen, mode)`
valid lens {4,8,16,24,32}; rounds from table@0x1464760; `0x39d3a30` builds
`holder (0x28)` = `{flags@8, aes_state@0x10, rc4_state@0x18, cast_state@0x20}`:

* AES-state `{16B state, ?, Nk@0x10, rounds@0x14, schedbytes@0x18, schedule@0x20}`,
  schedule = custom-AES expansion (SubWord = T1∘T2, Rcon = T1[T3[adj+T1[T4[r]]]]).
* mode **bit 30** (0xE0000000 has it) → RC4 state (0x220 B):
  `S = T1.copy(); KSA(S, key); pristine@+0x110; i=j=0`.
* mode **bit 29** → CAST state (0x2090 B): 4×256 u32 S-boxes + round keys
  built from table@0x14f7875 with a 0x48-B XOR mix.

### 3.2 cipher159 `0x39d3300(holder, in, out, len)` — custom AES
16-byte blocks, `len%16==0`; transposed state load; AddRoundKey from
`schedule[4*round..]` **in reversed round order** (initial ARK uses the LAST
words); per round: `tbl` byte-permute (const@0x1460690 = ShiftRows
`[0,1,2,3,7,4,5,6,10,11,8,9,13,14,15,12]`), SubBytes `T1[T2[b]]`, ARK,
table-driven GF MixColumns (0x39d2f4c, xtime via T4∘T1 + T3 with adj
0xdf/−0x20, reduction constants 0x69/0xe0/0xdf/0xc7/0xee/0x68).

### 3.3 cipher144 `0x39d4508` — CAST-128-style
8-byte blocks, `len%8==0`; 15+1 Feistel rounds over two BE u32s with
`((S1[a]+S2[b])^S3[c])+S4[d]` f-mix, S-boxes at `cast_state+0x48/+0x448/
+0x848/+0xc48`.

### 3.4 RC4 `0x39d3800(holder, in, out, len)` — **semantics corrected vs M3b**
The `i == 0xFF` sentinel is checked **every iteration** (loop re-enters the
check), so the state RELOADS from the pristine S every 255 bytes:
**the keystream has period 255** (byte n (1-based) uses phase (n−1) mod 255).
`SD40SE::seek` (0x1ef46d4) frames at 255-B boundaries
(`frame = (pos/255)*255`, leftover at +0x158) and resets. My Python
reimplementation and the emulated core agree byte-exact.

## 4. Key provenance (who owns which key)

* **version descriptor** at 0x4214098: `'16.2.1'` @0x4214098,
  key array @0x42140a0 = `['vuyWQSjlknpJF54ib36txVse', 'QZbidYS5LulOhQfbXJPVR5FG',
  'JGcu2DjohFm84viZHe1Et5Qt']`, then fonts (`DFG-RomanYuki-W9.ttf` …).
  ('DFGRomanYuki-W9' is a FONT NAME, not a key — 15 B, invalid keylen.)
* static initializer **0x1ca92cc** stores `key_array[0]` (24 B) → globals
  `0x4243cf0 (ptr) / 0x4243cf8 (len)` (bound via descriptor table 0x4186980).
* **install_global_key 0x1f2c6a0** expands it with mode 0xE0000000 and calls
  **set_global_key 0x39fec40** → `NTYPOOL_GLOBAL_CONTEXT` (vtable 0x414c260,
  BSS global via GOT 0x41b64b0) `+8 = the global BQ1599BisqueKey`.
* the factory's callers (0x1ef0d18 / 0x3a00290 / **0x3a00640**) prefer a
  per-call `keydesc = param+0x20` and fall back to that global.
* the SD40SE ctor builds its BQ1599BisqueKey from `keydesc+8` (a
  wrapper {flags@8, spec@0x10{keylen@0x18, keybytes@0x20}}) via 0x39d3fd0 —
  when the keydesc *is* an expansion holder, the "key bytes" = the schedule
  (the schedule-as-key variant M3b tried).
* runtime override: the session manager (`0x1ce3bcc`-family,
  `/users/register`, kv-store **`bq159_key`**, store tag `v15.0.0_sent_store_info`)
  can rebuild the global key server-side.

## 5. The NTY container format + the read path

`NtyReader::open(path, param)` (0x39dda24) → file stream (0x39f3a88 →
FileSystem::open → BQFileStream_Android; slot3 read → handle@+0x418 →
type-0 = libc `fread` import, type-1 = the e1 ZIP path) → **parse_NTY
0x39ddab4**:

```
header (BE, read raw from the stream):
  u16 @0x34, u16 @0x36, u32 @0x38 (= volume count), u16 @0x3c, u32 @0x40
then per volume: read_volume_entry 0x39de16c + parse_volume 0x39de5d0
  (reads ≤0xC0 B headers sequentially, builds the entry list at this+0x4a0,
   volume registry at +0x218/+0x228)
```

volume acquisition `0x39def6c(ctx, out, index, flags)`: flags bit1 opens the
ctx's own path; `stream->seek(volume+0x268, SEEK_SET)`, clip to
`size (+0x26c)`, wrap (NtyInnnerFDS → ClipStream → decoder) via 0x39df238.

**GlobalNtyPool::lookupReadablePath 0x3a061ac**: 31-based rolling hash of the
name → path `root/%02X/name` (or `root/%02X/name@version` when the name has
'/'), root = manager+0x80 — **the game opens a LOCAL-CACHE copy**; on miss the
open-volume fallback (0x3a00580 in fn 0x3a00388) consults the cache
descriptors (0x3a00a58 / 0x3a01f70 / 0x3a05958) before falling back to the
factory+global key. fn 0x3a00388 sits in the static GNP function table at
0x4203e30 (APU dispatch), which is where per-volume keydescs
(`param+0x20`) originate.

## 6. data1.dat — what is now ruled out

`data1.dat` = `[4 B head][181,696 B 16-aligned body]`, even-byte low-bit bias
(bits 0–1 of every u16 low, 2.8× the 0x100-multiple rate) — same shape as the
e2 blob, but:

* **not** any stage-2/loader scheme (M1b exhaustive: dd70 2^32 sweep, outer
  container, 7ffe cipher, eb34→fc30 CBC, shipped AES-256 CBC/ECB, zlib);
* **not** an e3-formula container at any 16-bit id, at offsets 0/2/4/8/16;
* **not** RC4-255 / cipher159 / cipher144 under any embedded key
  (`tools/m3c_matrix.py`: 3 keys × 3 cores, plus mode variants), and the
  55,520 printable rodata strings all fail the NTY-header oracle for RC4-255
  (`tools/m3c_keysweep.py`);
* key-independent period tests (XOR and additive, lags 1..4096) show no
  repetition — a position-varying keystream, consistent with the sinatra
  cores fed by a non-static key.

The 16-bit-granular even-byte bias *survives* all wrong-key decryptions, so it
is a property of the true keystream: the volume key is **not** any static
string — it comes from the per-volume APU descriptor (cache-side) or the
server-issued `bq159_key`.

## 7. M3d work items (sharp)

1. **the cache write path**: find who CREATES `root/%02X/name@version`
   (cache-miss branch of fn 0x3a00388 → 0x3a00a58/0x3a01f70/0x3a05958) —
   that code reads data1.dat and decrypts with the volume's real keydesc.
2. dump the APU table at 0x4203e30 (and its registration) to enumerate the
   per-volume descriptors statically.
3. with the emulated cores, a 24-byte key space is testable end-to-end once
   the keydesc format is confirmed (extend `m3c_matrix.py`).
4. alternatively capture the key at runtime semantics: the kv-store
   `bq159_key` (server-issued) — check whether the cache can be created
   offline from the shipped APK alone (i.e. whether first-run uses the
   embedded key or requires network).

## 8. Reproduce

```bash
python3 tools/m3c_emu.py            # Unicorn harness smoke test (expansion+cipher159)
python3 tools/m3c_matrix.py         # key × core matrix on data1.dat head
python3 tools/m3c_keysweep.py       # 55K rodata strings vs RC4-255 oracle
python3 tools/m3c_pltmap.py build   # full PLT map → m3/plt.tsv (44,568 stubs)
python3 tools/m3c_pltmap.py --callers 0x<fn>   # find callers (direct + PLT)
python3 tools/m3c_dag.py            # RTTI class DAG of the sinatra family
python3 tools/m3c_gotsites.py 0x<GOT slot>     # adrp+ldr reference sites
```
