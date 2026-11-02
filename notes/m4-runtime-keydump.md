# M4 — runtime key capture (Frida) + the completed offline data1.dat pipeline

> Status: **the full on-device → offline toolchain is built and round-trip
> verified.** The only missing artifact is the 32-byte data1.dat signature
> itself, which exists solely at runtime (registered through the APU table /
> JNI, outside the static image) — `tools/m4_frida_run.py` captures it, and
> `tools/m4_decrypt_data1.py` turns it into the plaintext NTY using the
> M3c-verified RC4-255 core. The parse step reuses the existing M3d harness
> unchanged (`m3d_emu_nty_full.py`), now with a `--json` volume-table output.

## 1. Why a runtime hook (recap of the M3d dead end)

Every static key hypothesis is exhausted: 7 embedded strings + 4 new
descriptor-table strings × 3 cores × 2 modes × 3 offsets, 134,083 strings
(rodata + DEX), UUID/.idx keys, the 16-bit LCG solve — 0 hits against the
corrected `MM\x00\x2a` oracle. The volume key is a **32-byte signature
delivered at runtime** (APU table / JNI side), so the capture must happen
on a live process. The exact call shapes (Unicorn-verified in M3c/M3d):

```text
keyExpansion   0x39d39f4 (out, key, keylen, mode)   keylen ∈ {4,8,16,24,32}
keyExpansionF. 0x39d3a30 (out, key, keylen, rounds, mode)
sigInstall     0x39dea94 (NtyReader ctx, key record)
NtyReader::open 0x39dda24 (this, path, record)
```

The data1.dat key arrives at 0x39d39f4 as `keylen=0x20, mode=0x40000000`
(bit 30 = the RC4-255-only path); the record the caller passes to
sigInstall carries the same 32 bytes as `sig[0:32]` of its 36-byte
signature (`{u32 id, sig[0x24], u32 len, u32 crc32, u32, payload@+0x34}`).

## 2. Addressing at runtime (no signature scan needed)

`notes/m3-9d-restore.md` §4: **module 0x9d offsets == libgame.so virtual
addresses** — the protector's game-side installer (0x9b's `FUN_00002438`)
merges the decrypted 71.6 MB overlay directly into libgame.so's mapping and
rebinds its pointers. Therefore:

```text
runtime address = Module.getBaseAddress("libgame.so") + OFFSET
```

The agent waits for the overlay install by polling the 16 bytes at
`base+0x39d39f4` (all-zero = not installed yet — the shipped .so is blanked
there), then arms the hooks. No byte-signature scan and no hardcoded slide.

## 3. The toolchain

| tool | role |
|---|---|
| `tools/m4_frida_keydump.js` | agent: hooks the 4 capture points, dumps keys / sig records / open paths, captures the crypto anchor tables (T1..T4 @0x14f7375…, rounds @0x1464760), **and walks the NtyReader ctx on every open (onLeave) to dump the parsed volume table** — the same walk as the M3d Unicorn harness, so the offline extractor needs NO XAPK artifacts; optional region dumps (strings 1 MB, full image 71.6 MB) |
| `tools/m4_frida_run.py` | host runner: spawn/attach, live classification, auto-saves `optc_dump/{keydump.json,volumes.json,T1..T4.bin,rounds.bin,strings.bin[,image.bin]}` |
| `tools/m4_decrypt_data1.py` | offline sigInstall: RC4-255 decrypt → crc32 verify → corrected-MM oracle → NTY header report; `--sweep` covers the embedded-record key candidates the M3d matrix never tried |
| `tools/m4_extract.py` | volume extractor for the decrypted NTY (raw + gzip-inflate + optional RC4-255 for class-bit-1 volumes), manifest.json — consumes either `volumes.json` (agent dump) or the emulator's `--json` output |
| `tools/m4_selftest.py` | round-trip proof of the whole offline path (synthetic record + payload + agent-format volume table) |
| `tools/m3d_emu_nty_full.py` | UNCHANGED core + `--json` flag; artifacts now configurable via `OPTC_MERGED`/`OPTC_SO`/`OPTC_PLT`/`OPTC_WORK` env vars (secondary path — only needed without a rooted device) |

Key classification in the agent (validated against the mode bits):

```text
keylen 32, mode bit30 set, bit29 clear  -> DATA1/NTY SIGNATURE KEY
keylen 32 otherwise                     -> 32-byte key (mixed mode)
keylen 24, mode 0xE0000000              -> global install key (vuyWQS… family)
```

## 4. Round-trip verification (no device needed)

`tools/m4_selftest.py` builds a synthetic encrypted NTY exactly the way the
game does — seeded random T1 permutation, random 36-byte signature,
`record{id, sig36, len, crc32(plaintext), f30} + prga255(ksa(T1, key32),
nty)` — and proves the offline side end-to-end:

```text
[PASS] explicit-key decrypt: MM=4d4d crc=True roundtrip=True
[PASS] sweep mode finds embedded-record key
[PASS] wrong-key negative control (exit 2)
[PASS] keystream period is exactly 255
[PASS] agent-format volumes.json -> extractor (3 volumes, png+gzip)
```

The last check feeds `m4_extract.py` a volumes.json in the exact shape the
Frida agent's runtime ctx walk produces (png / gzip-wrapped / raw volumes,
real offsets/sizes/flags/class-bits) and verifies byte-exact extraction —
so the on-device dump and the offline extractor are format-locked.

## 5. The untested static hypothesis, now covered

The M3d matrix (`tools/m3d9_matrix_mm.py`) never tried the file's own head
as the key record. `evidence/data1-format.json` pins the first 32 bytes:

```text
daf1cb3e d184ea55 95ead403 7df4f907 01a4506c c0280014 214700a2 084effe0
```

If data1.dat embeds its own record (`id=daf1cb3e`, `sig36` at +4), then
`data1.dat[4:36]` would be the key and the payload starts at +0x34 —
`m4_decrypt_data1.py --sweep` tests this (plus the head-window variants ×
offsets {0x34, 4, 0}) the moment a T1 table is available. If it fails (as
the M3d evidence suggests — the key is server/APU-issued), the Frida dump
is the remaining path. Note `--sweep` also runs by default when no key is
supplied.

## 6. Artifact re-acquisition status (this session)

The sandbox could not re-download the 16.2.1 XAPK: uptodown now gates
downloads behind a Cloudflare **Turnstile** challenge (headless and Xvfb
-headed Chromium both fail silently — the widget never emits a token);
apkpure/apkmirror/apkfab are Cloudflare-challenged or IP-blocked; no other
mirror carries 16.2.1 (released 2026-10-29) yet. Consequences:

* merged.bin / libgame.so / data1.dat are NOT regenerated in this session;
  the M3d reproduce chain (`m3d0_regen_game_modules.py` → `m3d0b_merge_9d.py`)
  still works wherever the XAPK is available (the original Telegram source
  via `tools/fetch_apk.sh`, or the user's own copy).
* the Frida agent covers the gap: it dumps the T1..T4 tables, the strings
  region, and optionally the entire runtime image from the device, so the
  offline decryptor is self-sufficient without the XAPK.

## 7. Reproduce

```bash
# on-device capture (rooted device, frida-server arm64, USB debugging):
python3 tools/m4_frida_run.py                 # spawn + capture, play to title
python3 tools/m4_frida_run.py --image         # additionally dump the 71.6 MB image
# -> optc_dump/{keydump.json, volumes.json, T1..T4.bin, rounds.bin, strings.bin}

# offline (after the capture; data1.dat from the APK or the device):
python3 tools/m4_decrypt_data1.py --keydump optc_dump/keydump.json \
    --t1 optc_dump/T1.bin --data1 data1.dat
# -> data1.dec.nty, then EITHER the runtime volume table (no artifacts needed):
python3 tools/m4_extract.py --nty data1.dec.nty --volumes optc_dump/volumes.json \
    --t1 optc_dump/T1.bin --key <key32>
# OR the Unicorn ground-truth parse (needs the XAPK artifacts):
OPTC_MERGED=merged.bin OPTC_SO=libgame.so OPTC_PLT=plt.tsv \
    python3 tools/m3d_emu_nty_full.py --json volumes.json data1.dec.nty

# verification (no device needed):
python3 tools/m4_selftest.py
```

## 8. M4b work items

1. run the capture on device; correlate `NtyReader::open` paths with
   sigInstall records to bind each 32-byte signature to its volume
2. with the key: full decrypt + extraction via the runtime volumes.json
   (the pipeline this milestone wires end-to-end, artifact-free)
3. same capture for the .01 block-cipher family (RES/FONT/RES_LOADING):
   their keydescs flow through the same keyExpansion hook — the class-bits
   decide cipher159 (custom AES) / cipher144 (CAST) offline
4. `bq159_key` kv-store (server-issued): check whether first-run cache
   creation works offline from the shipped APK (global key only), which
   would date the signature mechanism

## 9. Session addendum — artifact-free extraction (this session)

The XAPK could still not be re-acquired (private Telegram channel +
recycled sandbox lost the tgkit credentials), so the extraction step was
made independent of it: the agent now dumps the volume table by walking
the live NtyReader ctx (`ctx+0x4a0` head / `+0x4b0` count; node `+8` entry,
`+0x10` next; entry `+0x250` name / `+0x25c` flags / `+0x260` class-bits /
`+0x264` idx / `+0x268` offset / `+0x26c` size / `+0x270` mode) — offsets
cross-verified against BOTH the M3d emulator's `dump_entry` and the
readVolumeEntry decompile (attribute keys `0x10e` name / `0x111` offset /
`0x117` size / `0x8827` mode / `0x885c` flags / `0x885e` class-bits).
`m4_frida_run.py` saves it as `volumes.json` in the m4_extract-compatible
shape; the selftest format-locks the pair. A ready-to-run capture kit
(`optc-m4-capture-kit.zip`) ships the five M4 tools + a Persian runbook.

## 10. Session addendum 2 — APKM re-acquired; capture points verified against a from-scratch rebuild (this session)

The artifact WAS re-acquired: the user supplied four Telegram bot tokens
(API_ID 21724), and the 134.6 MB `.apkm` was pulled over MTProto from the
private channel (`t.me/c/3873843444/1885`, message document
`com_namcobandaigames_spmoja010E_16_2_1_1621_2arch_7dpi_24lang_0.apkm`).

**Acquisition engineering notes** (scripts/tg_download_multi.py pattern):
4 independent bot sessions × 8 resumable byte-range parts (512 KiB
requests, append-resume, copy+replace trimming because `os.truncate` is a
no-op on the sandbox mount), interleaved fallback pass via a known-good
token, final zip + EOCD + sha256 verification. The channel copy is
**byte-identical** to the pinned manifest (APKM `c42c893e…57a550`,
base.apk `b2ba3e50…e38064a`, arm64 split `0795089f…24f329`,
libgame.so `10e9f1d0…582ff6e1`, lib__7ffe__.so `771d0f27…a2849f`,
libsigner.so `fb279ea3…30c5736`, data1.dat `2325b9f9…e5e5981`) — the
APKMirror/XAPK and Telegram lineages converge on the same build.

**Full-chain rebuild from the Telegram artifacts** (fresh `re-work`):

| step | result |
|---|---|
| `unpack_7ffe.py` | 7ffe-payload.dec 153,968 B |
| `m3d0_regen_game_modules.py` | 4 entries, 0 fail, game master-key schedule 60/60 (`6384b59a…d70d58`) |
| `matryoshka_chain.py` | GAME side → raw_L4_0x9d.bin 32,177,168 B |
| `m3_decrypt_9d.py` | image 0x446FCC8 B (12,998 ok / 0 fail), patch 0x6A3C4B (2,168 ok / 0 fail) |
| `m3d0b_merge_9d.py` | merged.bin 71,761,096 B, 288,942 patch applications |

**Capture-point verification** (evidence/m4-telegram-verify.json) — all
checks PASS against the rebuilt image:

- `keyExpansion@0x39d39f4`: prologue is exactly the documented
  keylen gate — `sub w8,w2,#4 ; ror w8,w8,#2 ; cmp w8,#7 ; b.hi invalid ;
  mov w9,#0xab ; lsr w9,w9,w8 ; tbnz w9,#0,valid` (bitmask 0xab ⇒
  keylens {4,8,16,24,32}), then `adrp/add → 0x1464760` rounds table,
  `mov w4,w3` (mode passthrough) and a tail `b 0x3fa2710` into the PLT
  builder — i.e. the dispatcher the M4 analysis predicted, instruction
  for instruction.
- `keyExpansionFull@0x39d3a30`: full frame prologue; saves `x21 ← x1`
  (the key pointer), `w22 ← w4` (mode), `w23 ← w2` (keylen), `w27 ← w3`
  (rounds); allocates, memcpys the key, and its body materialises
  **all four sinatra tables** via `adrp x,0x14f7000 ; add #0x375/#0x475/
  #0x575/#0x675` = T1/T2/T3/T4 at 0x14f7375/0x14f7475/0x14f7575/0x14f7675.
- `sigInstall@0x39dea94`, `NtyReader::open@0x39dda24`: dense code.
- T1 (0x14f7375, 256 B) is a true permutation of 0..255 — the RC4-255
  KSA seed premise of `m4_decrypt_data1.py` holds for this build.
- On-disk `libgame.so` at every hook VA is all-zero — the 0x9d overlay
  installs at runtime, so the agent's "wait for the overlay" poll is
  required and correct, and `imageEnd 0x446FCC8` equals the rebuilt
  image size exactly.

**Bottom line:** every offset the Frida agent uses is verified against
the exact Telegram-distributed binary. The only remaining unknown is the
runtime 32-byte signature itself, which cannot exist offline — the kit is
ready for the on-device run (`RUNBOOK-fa.md`).

## 11. Session-3 addendum — the real file closes the static question (keysweep)

The APKM was re-acquired (Telegram MTProto, 134.6 MB, all five sha256 in
`hashes.txt` match bit-exactly), and for the first time the M4 pipeline ran
against the **real** `assets/7ffe/data1.dat`:

* **No embedded record.** A targeted structure scan
  (`tools/m4b_data1_structure_scan.py`,
  `evidence/m4b-session3-keysweep.json`) found no offset R where
  `len@R+0x28 == filesize-R-0x34` (LE or BE), no trailer record, no stored
  u32 matching any plausible file/payload length, no single-byte-XOR `MM`.
  The file is **payload-only** — the record (id, sig36, len, crc32) is
  assembled by the caller at runtime, which is why the self-keyed sweep
  (`--sweep` with the real T1 from `merged_0x9d.bin[0x14f7375:0x14f7475]`)
  is negative on the real file.
* **Binary window sweep — negative.** The one static gap left after M3d
  (which only tested ASCII *strings*) was a raw 32-byte key hidden as a
  byte array. `tools/m4b_binary_keysweep.c` (OpenMP, positive-control
  verified against the Python core) slid a 1-byte-stride window over every
  static source — 6 DEX files, resources.arsc, all assets, both arches of
  libgame.so / lib__7ffe__.so / libsigner.so, the decrypted protector
  modules, and the restored 71.6 MB engine image: **455,110,212 windows ×
  5 payload offsets × corrected MM oracle → 0 hits.**
* **Conclusion (now proven, not assumed):** the 32-byte signature is
  runtime-issued (APU table / JNI / server) and exists nowhere in the
  shipped APK. The Frida capture is the *only* path, exactly as designed.
* **Tooling consequences:** `m4_decrypt_data1.py` defaults to payload
  offset 0 (payload-only file) and auto-tries {0, 4, 0x34} with
  `--keydump`/`--sweep`; the record-head printout is kept only as a hint.
* **Agent validation on the real binary:** the shipped arm64 libgame.so
  has VA==file-offset for the first PT_LOAD, and the 16 bytes at
  0x39d39f4 are **zero** (protector-blanked) while
  `merged_0x9d.bin[0x39d39f4:]` carries live code — the agent's
  wait-for-overlay poll is exact. `OFF.imageEnd 0x446fcc8` equals the
  merged image size to the byte.
