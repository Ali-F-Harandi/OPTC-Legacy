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
| `tools/m4_frida_keydump.js` | agent: hooks the 4 capture points, dumps keys / sig records / open paths, captures the crypto anchor tables (T1..T4 @0x14f7375…, rounds @0x1464760), optional region dumps (strings 1 MB, full image 71.6 MB) |
| `tools/m4_frida_run.py` | host runner: spawn/attach, live classification, auto-saves `optc_dump/{keydump.json,T1..T4.bin,rounds.bin,strings.bin[,image.bin]}` |
| `tools/m4_decrypt_data1.py` | offline sigInstall: RC4-255 decrypt → crc32 verify → corrected-MM oracle → NTY header report; `--sweep` covers the embedded-record key candidates the M3d matrix never tried |
| `tools/m4_extract.py` | volume extractor for the decrypted NTY (raw + gzip-inflate + optional RC4-255 for class-bit-1 volumes), manifest.json |
| `tools/m4_selftest.py` | round-trip proof of the whole offline path (synthetic record + payload) |
| `tools/m3d_emu_nty_full.py` | UNCHANGED core + new `--json` flag that dumps the parsed volume table for the extractor |

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
```

The extractor path was verified separately (synthetic 3-volume NTY:
raw blob, gzip-wrapped blob, manifest) — all PASS.

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

# offline (after the capture; data1.dat from the APK or the device):
python3 tools/m4_decrypt_data1.py --keydump optc_dump/keydump.json \
    --t1 optc_dump/T1.bin --data1 data1.dat
# -> data1.dec.nty, then the existing parse harness:
python3 tools/m3d_emu_nty_full.py --json volumes.json data1.dec.nty
python3 tools/m4_extract.py --nty data1.dec.nty --volumes volumes.json

# verification (no device needed):
python3 tools/m4_selftest.py
```

## 8. M4b work items

1. run the capture on device; correlate `NtyReader::open` paths with
   sigInstall records to bind each 32-byte signature to its volume
2. with the key: full decrypt + `m3d_emu_nty_full.py` parse + extraction
   (the pipeline this milestone wires end-to-end)
3. same capture for the .01 block-cipher family (RES/FONT/RES_LOADING):
   their keydescs flow through the same keyExpansion hook — the class-bits
   decide cipher159 (custom AES) / cipher144 (CAST) offline
4. `bq159_key` kv-store (server-issued): check whether first-run cache
   creation works offline from the shipped APK (global key only), which
   would date the signature mechanism
