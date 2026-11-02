# M5 — the key ORIGIN: server-issued `bq159_key` + the `.vb`/`.vbx` record system

> Status: **the provisioning architecture of every runtime key is now mapped
> statically.** Built on M3/M4's verified artifacts (merged.bin, symbols.json,
> plt.tsv), this milestone answers the remaining "where does the data1.dat
> key come from" question with concrete call sites — and adds two capture
> paths that need no Frida hooking at all. No device was used; everything
> below is static analysis of the restored 0x9d engine image.

## 1. Artifact re-verification (fresh Telegram APKM)

The 141,166,735-byte `.apkm` was re-pulled and checked against
`hashes.txt` — **all seven SHA-256 match bit-exactly** (APKM, base.apk,
arm64 split, libgame.so, lib__7ffe__.so, libsigner.so; `assets/7ffe/data1.dat`
= 181,700 B, `2325b9f9…`). The unpack chain was re-run and the merged
engine image re-verified:

* `merged.bin` 71,761,096 B (0x446FCC8) — keyExpansion@0x39d39f4 prologue is
  byte-identical to the documented gate (`sub w8,w2,#4; ror w8,w8,#2;
  cmp w8,#7; b.hi; mov w9,#0xab; lsr; tbnz`), T1@0x14f7375 is a true
  permutation of 0..255.

## 2. The global key: `bq159_key` from the session kv-store (server-issued)

**Function 0x1ce44bc** (ResourceController vtable slot +0 — vtable object at
0x4187ad8, typeinfo 0x4117870; the same class owns `downloadedBannerResource`
@0x1ce5ab8 and `clearResourceFile` @0x1ce62d0) reads a bundle of session
values from a kv-store object (arg x21) via the read method 0x3b1bbe0:

```text
session_id        (0x13e8f84)   -> this+0x88      (via strtoull -> this+0x70)
bq159_key         (0x143fdd3)   -> BQ1599BisqueKey (mode 0xE0000000) -> this+0xc0
current           (0x142a6d3)   -> this+0xa0
gdpr_terms        (0x13fe945)   -> this+0xa8 (0x5b067100)
gdpr_displayable  (0x1370d0d)   -> this+0xb0
```

The construction (disassembly-verified at 0x1ce4680-0x1ce46c8):
`operator new(0x38)` → vtable from `[0x4187ac8]+0x10` → `keyExpansion(out =
obj+8, key = <bq159_key VALUE STRING>, keylen = strlen(value), mode =
0xE0000000)` → stored at `this+0xc0`. I.e. the store VALUE is used directly
as key material for the global (24-byte-family, AES+RC4) key.

This confirms and extends `notes/m3b-plt-rtti-cipher.md` §3.3: the key is
**server-issued at registration** — the session-manager family (0x1ce3bcc)
carries the endpoint strings, all found in the engine rodata:

```text
/users/register   /users/sessions   /users/token   /user_infos/   /store_infos
host: https://app.gb.onepiece-tc.jp   (review: https://review04.gb.onepiece-tc.jp)
store version tag: v15.0.0_sent_store_info
```

`bq159_key` exists nowhere in the shipped APK (consistent with the M4b
455M-window binary sweep = 0 hits): **it is created when the account is
registered and persisted in the app's private storage**.

## 3. The per-volume 36-byte signature records: `.vb` / `.vbx`

The record that `NtyReader::open`'s 3rd argument carries (and `sigInstall`
installs) comes from a **map at obj+0x320** of an 0x858-byte context object
(ctor 0x3a08cac), built by:

```text
ntyOpenCaller2 0x3a089d0 (and ntyOpenCaller1 0x3a07d78):
  obj = new(0x858); ctor(obj)
  0x3a090d4(ctx, volumeName, obj+0x318, ".vbx")     <- the record-table loader
      builds <cache-root>/<ver>/<name>.vbx via the 0x39f3e90 singleton's
      vtable[+0x20]/[+0x30] path builders, then 0x39ef780 -> 0x39efa5c
  mapfind(obj+0x320, &out) -> record (0x10-byte stack cell + found ptr)
  NtyReader::open(reader, path, record ? &record : NULL)
  ... mapinsert(obj+0x320, reader, flag) on cache miss
```

The shipped APK carries the record files as **assets `*.DAT.vb`** —
`RES.DAT.vb`, `FONT.DAT.vb`, `RES_LOADING.DAT.vb`, `RES_OPENING.DAT.vb`,
`RES_FILLINSPACE.DAT.vb` — i.e. the `.vb` (asset) is the distributed form
and `.vbx` the cache-side copy the loader wants. Entry format (sizes
cross-checked against all five files):

```text
u32  count
per entry:  char   name[36]      (UUID string, e.g. 683fb227-bfd3-e3d4-f4d8-fbebc4be58f7)
            u32    blob_size     (== filesize - 0x34 exactly, all files)
            u32    id            (random, e.g. 0xf12dacbe)
            u32    C             (32 / 3 / 23 — per-file constant, role TBD)
            byte   blob[blob_size]
```

**`assets/7ffe/data1.dat` has NO `.vb` companion** — its record is absent
from the APK, exactly as the M4b sweep concluded. Given the loader reads a
cache-side `.vbx`, the data1 record is either downloaded into the cache on
first run or delivered inside a server response (the `/store_infos` /
`/users/register` family).

## 4. What was tried and ruled out this session

* **Raw `.vb` 32-byte windows as keys for the `.01` family** (RES.DAT.01 /
  FONT.DAT.01): swept every 32-byte window x {cipher159 0x39d3300,
  cipher144 0x39d4508, RC4 0x39d3800} x modes {0xE0000000, 0x40000000} x
  payload offsets {0,4,0x34} under the Unicorn harness (`m3c_emu`) with the
  corrected calling convention (arg1 = holder ptr from desc+8 —
  self-consistency-proven against the Python RC4-255 core) — **0 hits**.
  Conclusion: the `.vb` blob is transformed (or fed through the
  BQ1597Decoder/vtable `+0x28` per-block path) before it becomes key
  material, or the blob records are themselves sealed.
* **RC4-255 with the four known embedded keys over the `.vb` blobs** — no
  structure emerges (no ASCII, no plausible length fields).
* `NtyAPU::set(const char*)` @0x29110b8 is a 4-byte `ret` stub (inlined
  away) — the APU identity is set elsewhere/inlined.

## 5. New tooling

| tool | role |
|---|---|
| `tools/m5_trace_key_plt.py` | PLT-stub → GOT-slot → target resolution + BL caller scan for any function set |
| `tools/m5_recover_full_names.py` | full-name recovery from the 0x9e tail-shared pool (73,855 unique) → `symbols_full.json` |
| `tools/m5_test_core_convention.py` | self-consistency proof: Python RC4-255 vs emulated keyExpansion+RC4 (holder convention) |
| `tools/m5_sweep_vb_keys.py` | the `.vb`-window sweep of §4 (documented negative) |

## 6. Capture paths for the runtime key (ranked, updated)

1. **Frida kit (ready)** — `optc-m4-capture-kit`: hooks keyExpansion /
   sigInstall / NtyReader::open, dumps keys + volume tables + T1..T4.
   Needs a rooted device + frida-server.
2. **App-storage pull (rooted, no Frida)** — after first run, pull
   `/data/data/com.namacobandaigames.spmoja010E/`:
   * any `*.vbx` under the cache/files tree (the record tables — data1's
     record may simply be a file there),
   * the kv-store holding `bq159_key` (store tag `v15.0.0_sent_store_info`;
     sqlite is embedded — `sakura.db`, `device.db`, `sakura_master_db_XX.db`
     are candidates).
   A single `adb pull` + `strings`/sqlite dump may reveal both keys.
3. **MITM `https://app.gb.onepiece-tc.jp`** — observe `/users/register`,
   `/users/sessions`, `/store_infos` responses for `bq159_key` and the
   data1 record. No root needed IF TLS interception is feasible (cert
   pinning status unknown; `libsigner.so` signs requests, so expect
   resistance).

## 7. Reproduce

```bash
python3 tools/m5_recover_full_names.py          # symbols_full.json
python3 tools/m5_trace_key_plt.py               # caller map of the key fns
python3 tools/m5_test_core_convention.py        # core convention proof
python3 tools/m5_sweep_vb_keys.py               # .01-family sweep (negative)
```
