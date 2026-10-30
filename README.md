# OPTC Legacy

**A community decompilation & recompilation project for ONE PIECE TREASURE CRUISE-RPG 16.2.1 — with custom rebuilds for Android, Web and Desktop.**

[![build](https://github.com/Ali-F-Harandi/OPTC-Legacy/actions/workflows/build.yml/badge.svg)](../../actions)
[![deploy-web](https://github.com/Ali-F-Harandi/OPTC-Legacy/actions/workflows/deploy-pages.yml/badge.svg)](../../actions/workflows/deploy-pages.yml)
[![play](https://img.shields.io/badge/play-web%20build%20%28WASM%29-6ea8ff?logo=githubpages&logoColor=white)](https://ali-f-harandi.github.io/OPTC-Legacy/)
[![progress](https://img.shields.io/badge/decompilation-48.2%25-blue)](PROGRESS.json)
[![target](https://img.shields.io/badge/target-16.2.1%20%221621%22-critical)](hashes.txt)
[![license](https://img.shields.io/badge/legal-clean--room%20RE-important)](#legal)

---

<!-- PROGRESS:BEGIN -->

### 🧱 Decompilation Wall

**Overall — 48.2% decompiled & rebuilt**

```text
███████████████████░░░░░░░░░░░░░░░░░░░░░  48.2%
```

| Module | Progress | Status |
|:---|:---|:---|
| Artifact acquisition (tgkit/MTProto) | `🟩🟩🟩🟩🟩🟩🟩🟩🟩🟩🟩🟩🟩🟩🟩🟩🟩🟩🟩🟩` 100% | 134.6 MB APKM pulled over MTProto, SHA-256 pinned in hashes.txt |
| Packaging & signature analysis | `🟩🟩🟩🟩🟩🟩🟩🟩🟩🟩🟩🟩🟩🟩🟩🟩🟩🟩🟩🟩` 100% | 34 splits mapped; v2+v3 RSA/SHA-256 signature verified authentic |
| Platform shell — Bisque Java layer | `🟩🟨⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜` 7% | 9 of 187 jp.co.drecom.bisque classes deep-documented (JADX) |
| Anti-tamper loader — lib__7ffe__.so | `🟩🟩🟩🟩🟩🟩🟩🟩🟩🟩🟩🟩🟩🟩🟩🟩🟩🟩🟩🟩` 100% | M3 DONE: 0x9d (the last encrypted module) DECRYPTED via its runtime consumer 0x9b (keys g=0x129E7AF1, stream 0x39BC, private AES@0x9b+0x2021C) — 71.6MB restored game code (12998 chunks, 0 fail) + 6.9MB patch. All 57 modules + 0x9d now fully decrypted. |
| API signer — libsigner.so | `🟩🟩🟩🟩🟩🟩🟩🟩🟩🟩🟩🟩🟩🟩🟩🟩🟩🟨⬜⬜` 85% | 519 functions pseudocoded; request-signing scheme reconstructed |
| Engine core — libgame.so | `🟩🟩🟩🟩🟩🟩🟩🟩🟩🟩🟩🟩🟩🟩🟨⬜⬜⬜⬜⬜` 70% | M3c: sinatra consumer chain mapped end-to-end AND statically executable — decoder factory 0x1ef3750 (volume-entry flags -> SD159/SD144/SD40SE/Plane), all 3 cipher cores Unicorn-emulated (custom-AES-192 0x39d3300, CAST-128-style 0x39d4508, RC4 with 255-B periodic reload — M3b's sentinel semantics corrected), key expansion emulated, NTY header format (BE fields) + volume acquisition (seek/clip/wrap) + GlobalNtyPool local-cache path scheme root/%02X/name@version all reversed. data1.dat volume key proven NOT static (55K rodata strings swept, 0 hits). Next: M3d — cache write path + APU per-volume keydescs. |
| Renderer (OpenGL ES 2) | `🟨⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜` 2% | GLES2 confirmed via shell; runtime API table not yet walked |
| Audio (OpenSLES) | `🟨⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜` 2% | backend confirmed; mixer/voice graph pending |
| Asset formats & pipelines | `🟩🟩🟩🟩🟩🟩🟩🟩🟩🟩🟩🟩🟩🟩🟩🟩🟨⬜⬜⬜` 80% | M3c: NTY container format reversed (BE header fields, per-volume {offset,size,mode,flags} entries, 32-B-block decode loop, 255-B framing for SD40SE); the game reads a LOCAL-CACHE copy (root/%02X/name@version) created on cache miss — that write path is the remaining data1.dat decryptor (M3d-1). All 3 embedded keys x 3 emulated cores negative; per-volume APU keydesc or server bq159_key remains. |
| Android custom build | `🟩🟩🟩🟩🟩🟨⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜` 25% | Gradle + CMake/NDK harness with own v4 keystore (optc-legacy.jks) |
| Web build (Emscripten/WASM) | `🟩🟩🟩🟨⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜` 15% | single CMake tree + Emscripten preset & shell ready |
| Desktop build (SDL2) | `🟩🟩🟩🟩🟩🟩🟨⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜` 30% | null/SDL2 backends compile clean on Linux — smoke-tested |
| Tooling & CI | `🟩🟩🟩🟩🟩🟩🟩🟩🟩🟩🟩🟩🟩🟩🟩🟨⬜⬜⬜⬜` 75% | unpacker + stage-2 crypto + 7-level matryoshka decryptor + 0x9d restorer + PLT resolver + RTTI explorer + sinatra crypto reimpl + Ghidra symbol/PLT/thunk scripts (tools/m3b_*, tools/ghidra-m3b/) + M3c Unicorn emulation harness & consumer-chain toolset (tools/m3c_emu.py, m3c_matrix.py, m3c_keysweep.py, m3c_pltmap.py, m3c_dag.py, m3c_gotsites.py …) + 3-OS CI matrix + Pages deploy |
| Documentation | `🟩🟩🟩🟩🟩🟩🟩🟩🟩🟩🟨⬜⬜⬜⬜⬜⬜⬜⬜⬜` 50% | 8 deep-dive notes published (7ffe loader, stage-2 crypto, M2 game consumer, M3 0x9d restore, M3b PLT/RTTI/cipher, M3c consumer chain, architecture, engine/asset formats) + REA evidence dossiers per milestone |

**Platform shell — jp.co.drecom.bisque (1 cell = 1 class)** — 9/187 (4.8%)

```text
🟩🟩🟩🟩🟩🟩🟩🟩🟩🟨🟨🟨🟨⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜
⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜
⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜
⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜
⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜
⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜
⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜
⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜
```

**Loader — lib__7ffe__.so (1 cell = 5 functions, 277 total)** — 49/56 (87.5%)

```text
🟩🟩🟩🟩🟩🟩🟩🟩🟩🟩🟩🟩🟩🟩🟩🟩🟩🟩🟩🟩🟩🟩🟩🟩🟩🟩🟩🟩
🟩🟩🟩🟩🟩🟩🟩🟩🟩🟩🟩🟩🟩🟩🟩🟩🟩🟩🟩🟩🟩🟨🟨🟨⬜⬜⬜⬜
```

**API signer — libsigner.so (1 cell = 20 functions, 519 total)** — 22/26 (84.6%)

```text
🟩🟩🟩🟩🟩🟩🟩🟩🟩🟩🟩🟩🟩🟩🟩🟩🟩🟩🟩🟩🟩🟩🟨🟨⬜⬜
```

**Stage-2 protector (1 cell = 10 functions, 269 total)** — 8/27 (29.6%)

```text
🟩🟩🟩🟩🟩🟩🟩🟩🟨🟨⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜
```

**Game-side stage-2 system — libgame.so LOUSER payload (1 cell = 10%)** — 7/10 (70.0%)

```text
🟩🟩🟩🟩🟩🟩🟩🟨⬜⬜
```

**Game-side driver modules — 0x81·0x8f·0x96·0x9b pseudocode (1 cell = 20 functions, 484 total)** — 24/25 (96.0%)

```text
🟩🟩🟩🟩🟩🟩🟩🟩🟩🟩🟩🟩🟩🟩🟩🟩🟩🟩🟩🟩🟩🟩🟩🟩🟨
```

**Engine PLT + sinatra cipher — 44,567 stubs resolved, cipher family reversed (1 cell = 10%)** — 8/10 (80.0%)

```text
🟩🟩🟩🟩🟩🟩🟩🟩🟨⬜
```

**M3c consumer chain — factory + 3 emulated cores + NTY format + key provenance + cache scheme (1 cell = 10%)** — 9/10 (90.0%)

```text
🟩🟩🟩🟩🟩🟩🟩🟩🟩🟨
```

<sub>Regenerate with `python3 tools/progress.py --write`. Percentages are measured against concrete units (classes, functions, formats, build targets) — never vibes.</sub>

<!-- PROGRESS:END -->

---

## What is this?

`OPTC Legacy` is a long-form **decomp-recomp** project aimed at the mobile game
**ONE PIECE TREASURE CRUISE-RPG** (`com.namcobandaigames.spmoja010E`,
version 16.2.1 / versionCode 1621). The goal is the same shape as the classic
console decompilation projects: understand the original binary, document it
exhaustively, and progressively replace it with clean-room source that **we
control** — then ship that source as our own custom build for
**Android (APK), Web (WASM) and Desktop (native)**.

Unlike Unity/il2cpp titles, OPTC runs on a **bespoke C++ engine**:

- the Java layer is a thin 187-class platform shell (Drecom *"Bisque"* framework)
  that owns the GLES2 surface and JNI bridge,
- everything gameplay-related lives inside a monolithic, stripped,
  string-encrypted `libgame.so` (**104.3 MB**, 38.2 MiB of code),
- the game even ships **~39.9 MB of encrypted resource data inside the `.so`
  itself**, plus encrypted asset chunks in the APK.

That makes this a *real* native decompilation effort — no low-hanging managed
code — and it is why the progress wall above tracks engine work in concrete
units (functions decrypted, symbols recovered, pseudocode committed) rather
than vibes.

## Where we are — every layer of armor is open

The protection stack has been fully unwrapped, milestone by milestone:

- **M1 — the loader.** `lib__7ffe__.so`'s bootstrap chain and its dword
  add+XOR stream cipher were reversed, its self-keyed stage-2 protector
  decrypted — 153,968 bytes of clean ARM64 ([`notes/7ffe-loader.md`](notes/7ffe-loader.md)).
- **M1b — the crypto core.** The stage-2 AES-256 master key was recovered
  (FIPS-197 verified); the stream → CBC → tree-LZ pipeline is re-implemented
  in `tools/stage2_crypto.py`; all four embedded module blobs decrypt 90/90
  ([`notes/stage2-crypto.md`](notes/stage2-crypto.md)).
- **M2 — the game-side twin.** `libgame.so` turned out to be a ~35 KB stub
  wrapped around a 38.5 MB encrypted `LOUSER+0` payload running a *second*
  instance of the same module system, with its own master key and device
  registry ([`notes/m2-game-consumer.md`](notes/m2-game-consumer.md)).
- **M2c — the matryoshka.** That payload unwinds into a **7-level nested
  container chain** (processors e3→e8, per-level private AES-256 + stream
  keys) yielding **57 modules with zero chunk failures**
  (`tools/matryoshka_chain.py`).
- **M3 — the engine itself.** The last holdout, module **0x9d**, was decrypted
  with its runtime consumer's keys: **71.6 MB of restored engine `.text`**
  (12,998 chunks, 0 failures) plus its 6.9 MB patch — and module 0x9e gave
  back **80,005 function symbols** blanked from the shipped dynsym
  ([`notes/m3-9d-restore.md`](notes/m3-9d-restore.md)). All four runtime
  driver modules are pseudocoded in `decomp/game-modules/` (484 functions).
- **M3b — reading the engine.** The restored image is an *overlay* over the
  shipped `.so`, so the **entire 44,567-stub PLT was resolved statically**
  (44,073 calls to the game's own preemptible functions + 424 imports —
  750,000 call sites named). RTTI chains became the ground truth after the
  0x9e symbol DB proved mis-mapped. The **sinatra cipher family fell**:
  a custom-seeded RC4 plus a custom-S-box AES-192-shaped key schedule, three
  embedded 24-byte keys, and the server-issued `bq159_key` flow
  ([`notes/m3b-plt-rtti-cipher.md`](notes/m3b-plt-rtti-cipher.md)).
- **M3c — the consumer chain, running.** The NTY read path is now mapped
  end-to-end *and statically executable*: the decoder factory, the exact
  **NTY container format** (big-endian header, per-volume
  `{offset, size, mode, flags}` entries), the local-cache path scheme
  (`root/%02X/name@version`), and **all three cipher cores emulated under
  Unicorn** — a custom-AES-192, a CAST-128-style Feistel, and an RC4 whose
  state reloads every 255 bytes (a correction of M3b's reading). The
  default key's full provenance is traced ('16.2.1' descriptor → embedded
  key → global context), and data1.dat's volume key is **proven not to be
  any static string** — it lives in the per-volume APU descriptor or the
  server-issued `bq159_key`
  ([`notes/m3c-consumer-chain.md`](notes/m3c-consumer-chain.md)).

What remains is the fun part: the cache-write path that decrypts data1.dat
on first run — and then the actual clean-room rebuild.

## Target facts (measured, not guessed)

| Property | Value |
|---|---|
| App | ONE PIECE TREASURE CRUISE-RPG |
| Package | `com.namcobandaigames.spmoja010E` |
| Version | 16.2.1 (versionCode 1621, SDK 24→36) |
| Source bundle | APKM (2 arch, 7 dpi, 24 lang) — 134.6 MB, pulled via **MTProto** |
| Java layer | 6 DEX files, 18,364 class defs; game-relevant: `jp.co.drecom.bisque.*` (187 classes) |
| Native engine | `libgame.so` — AArch64/ARMv7, clang 19.0.1 (`+pgo, +lto, +mlgo`), LLD 19.0.1 |
| Engine size | `.text` 38.2 MiB ⇒ est. **13,000–26,000 functions** |
| Hidden data | 39,927,376-byte encrypted blob in an unnamed ELF section of `libgame.so` — **fully decrypted** (M2c: 7-level chain → 57 modules; M3: 0x9d → 71.6 MB `.text`) |
| Anti-tamper | `lib__7ffe__.so` + `assets/7ffe/data1.dat` (181,700 B, entropy ≈ 7.98) |
| API signing | `libsigner.so` (1.1 MB) — request-signing for the game backend |
| Original signature | v2+v3 RSA/SHA-256, **NAMCO BANDAI Games Inc.** — verified authentic |

Full machine evidence lives in [`evidence/`](evidence/) (REA-standard JSON):
[`engine-inventory.json`](evidence/engine-inventory.json),
[`class-inventory.json`](evidence/class-inventory.json),
[`data1-format.json`](evidence/data1-format.json),
[`apk-signature.json`](evidence/apk-signature.json), plus per-class and
per-method dossiers.

## Architecture at a glance

```text
┌──────────────────────────────────────────────────────────────┐
│  Java/Kotlin shell — 187 Bisque classes (jp.co.drecom.bisque)│
│  BQGameHelper · BQJNIHelper · BQArtilleryJava · BQPayment…   │
├──────────────────────────────────────────────────────────────┤
│  lib__7ffe__.so  — anti-tamper loader (consumes data1.dat)   │
├──────────────────────────────────────────────────────────────┤
│  libgame.so — monolithic native engine                       │
│    .text 38.2 MiB · stripped · string-encrypted              │
│    + 39.9 MiB encrypted resource blob (unnamed section)      │
│    OpenGL ES 2 · OpenSLES · bundled libxml2                  │
├──────────────────────────────────────────────────────────────┤
│  libsigner.so — game-API request signing                     │
└──────────────────────────────────────────────────────────────┘
```

Deep-dives: [`notes/architecture.md`](notes/architecture.md) ·
[`notes/engine-analysis.md`](notes/engine-analysis.md) ·
[`notes/7ffe-loader.md`](notes/7ffe-loader.md) ·
[`notes/stage2-crypto.md`](notes/stage2-crypto.md) ·
[`notes/m2-game-consumer.md`](notes/m2-game-consumer.md) ·
[`notes/m3-9d-restore.md`](notes/m3-9d-restore.md) ·
[`notes/m3b-plt-rtti-cipher.md`](notes/m3b-plt-rtti-cipher.md) ·
[`notes/asset-format.md`](notes/asset-format.md)

## Repository layout

```text
├── PROGRESS.json          progress source of truth (units, not vibes)
├── tools/                 fetch / extract / unpack-7ffe / stage-2 crypto /
│                          matryoshka chain / 0x9d restore / keystore / progress
├── evidence/              REA evidence — inventories, dossiers & per-milestone
│                          attack JSONs + scripts (M1b, M2, M2b, M2c, M3)
├── notes/                 7 deep-dives: loader, stage-2 crypto, game consumer,
│                          0x9d restore, architecture, engine, asset formats
├── decomp/                decompiler output (Ghidra pseudocode, per function)
│   ├── native-loader-7ffe/        277 functions
│   ├── native-loader-7ffe-stage2/ 269 + 67 forced functions
│   ├── native-signer/             519 functions
│   └── game-modules/              0x81 · 0x8f · 0x96 · 0x9b — 484 functions
├── src/                   clean-room reimplementation ("recomp")
│   ├── engine/            module registry — one module per decomp module
│   ├── platform/          sdl2 / web(Emscripten) / null backends
│   └── app/               shared main
├── android/               Gradle project → custom APK (NDK + CMake)
├── web/                   Emscripten harness → WASM bundle
├── desktop/               desktop packaging
├── keystore/              OUR OWN APK signing key (community/test-key model)
└── .github/workflows/     CI: desktop + web + android + progress gate
```

## Build the custom builds

One `src/` tree, three targets. Milestone 0 (registry boots on all three) is
green; the wall above tracks what each target can actually *do*.

### Desktop (Linux / macOS / Windows)

```bash
desktop/build.sh          # → build-desktop/optc-legacy (SDL2, or null headless)
./build-desktop/optc-legacy
```

CI builds and smoke-tests all three desktop OSes (Linux via apt SDL2,
macOS via system frameworks, Windows via vcpkg SDL2 + Ninja/MSVC).

### Web (Emscripten/WASM)

```bash
web/build.sh              # → build-web/optc-legacy.html + .js + .wasm
python3 -m http.server -d build-web 8080
```

Every push to `main` also auto-publishes the web build to GitHub Pages:
**<https://ali-f-harandi.github.io/OPTC-Legacy/>**

### Android (custom APK, own signature)

```bash
cd android && ./gradlew assembleRelease
# signed with keystore/optc-legacy.jks — see below
```

## Our own APK signature

Custom builds are signed with **our** RSA-4096 key — never the publisher's:

- key + passwords + how-to-sign: [`keystore/README.md`](keystore/README.md)
- certificate SHA-256: `1971AC0189A7BA49B8D41E282BFD021E40CB47AF4C51F9ADE80367476FD38B2A`
- committed on purpose (community update identity — AOSP test-key model),
- verify any artifact: `apksigner verify --print-certs app.apk`

## How the artifact was obtained

The 134.6 MB APKM bundle far exceeds the Bot API's 20 MB download cap, so it
was fetched over **MTProto** (native Telegram protocol, up-to-2 GB files) with
[tgkit](https://github.com/Ali-F-Harandi/tgkit):

```bash
tools/fetch_apk.sh https://t.me/c/3873843444/1885 ./artifacts
```

SHA-256 pins for every analyzed artifact are in [`hashes.txt`](hashes.txt).
Reproduce the full unpack with `tools/extract_apkm.sh` and
`tools/extract_blobs.py`.

## Toolchain

| Stage | Tool |
|---|---|
| Acquisition | [tgkit](https://github.com/Ali-F-Harandi/tgkit) (MTProto) |
| Orchestration & evidence | [rea — Reverse Engineer Anything](https://github.com/morluto/rea) 6.8.0 |
| Java/DEX | JADX 0.7.1 (headless) |
| Native ELF | Ghidra 11.3.2 & 12.1.4 (headless) |
| Resources | apktool 2.12.1 |
| Static inventory | readelf/strings/BinWalk pipelines (`tools/`) |

## Milestones & roadmap

| Stage | Status | What landed |
|---|---|---|
| **M0 — skeleton** | ✅ | engine registry + 3 build targets + own signing key |
| **M1 — loader defeat** | ✅ | bootstrap chain reversed; stage-1 stream cipher recovered; stage-2 protector decrypted (153,968 B ARM64) — [`notes/7ffe-loader.md`](notes/7ffe-loader.md) |
| **M1b — crypto core** | ✅ | AES-256 master key recovered; stream→CBC→tree-LZ re-implemented; 4 embedded modules 90/90; patch-merge 0x11b4/0x3188 reversed — [`notes/stage2-crypto.md`](notes/stage2-crypto.md) |
| **M2 — game consumer** | ✅ | twin stage-2 system found in `libgame.so` `LOUSER+0` and decrypted; 4 game modules 5/5+25/25+8/8 — [`notes/m2-game-consumer.md`](notes/m2-game-consumer.md) |
| **M2b — data1.dat cryptanalysis** | ✅ | exhaustive 2^32 key sweep (0 hits) + ciphertext-only analysis: cipher is 16-bit-granular, bisque-side, not protector-side |
| **M2c — matryoshka chain** | ✅ | 38.5 MB blob → 7 nested levels (e3→e8) → **57 modules, 0 failures** — `tools/matryoshka_chain.py` |
| **M3 — engine `.text` restore** | ✅ | 0x9d decrypted via consumer 0x9b (71.6 MB, 12,998 chunks, 0 fail) + 6.9 MB patch; 80,005 symbols from 0x9e; data1.dat consumer chain mapped — [`notes/m3-9d-restore.md`](notes/m3-9d-restore.md) |
| **M3b — PLT + RTTI + sinatra cipher** | ✅ | PLT 100 % resolved statically (44,567 stubs from the shipped .so — the 0x9d image is an overlay); RTTI chain = ground truth (0x9e DB addresses proven mis-mapped); **sinatra cipher family reversed**: custom-seeded RC4 + custom-AES-192-shaped key schedule; embedded 24-B keys + server-issued `bq159_key` flow documented — [`notes/m3b-plt-rtti-cipher.md`](notes/m3b-plt-rtti-cipher.md) |
| **M3c — consumer chain end-to-end** | ✅ | decoder factory + volume-entry format; all 3 cipher cores **Unicorn-emulated** (custom-AES-192 `0x39d3300`, CAST-128-style `0x39d4508`, RC4 `0x39d3800` with **255-B periodic reload** — M3b's sentinel semantics corrected); key expansion + default-key provenance ('16.2.1' descriptor → key[0] → globals); NTY header format + volume acquisition; **GlobalNtyPool local-cache path scheme** (`root/%02X/name@version`); data1.dat key proven NOT static (55,520 rodata strings swept, 0 hits) — [`notes/m3c-consumer-chain.md`](notes/m3c-consumer-chain.md) |
| **M3d — the cache write path** | 🔶 next | who creates `root/%02X/name@version` on cache miss (the real data1.dat decryptor) + the APU per-volume keydesc table at 0x4203e30 |
| **M4 — JNI table** | ⬜ | walk the hidden module system's Java-facing API surface |
| **M5 — renderer** | ⬜ | GLES2 scene graph reimplementation (biggest module) |
| **M6 — gameplay** | ⬜ | battle system, then everything else, block by block |

## Legal

This project is **clean-room reverse engineering for education and
preservation**. We do not distribute Bandai Namco's code, assets, or APKs;
we publish analysis, documentation, and original source written from
scratch. ONE PIECE TREASURE CRUISE and all related marks belong to
Eiichiro Oda / Toei Animation / Bandai Namco Entertainment — this project
is not affiliated with or endorsed by them. No original copyrighted files
are committed to this repository (see `.gitignore`).

## Contributing

Pick a white block from the wall:

1. `python3 tools/progress.py` — see every module and its units
2. claim a class (Bisque shell) or a function range (loader / signer /
   game-module pseudocode is already in `decomp/` — pick a `FUN_*.c` and turn
   it into real C in `src/`)
3. open a PR; update `PROGRESS.json` — the wall regenerates itself
   (`python3 tools/progress.py --write`)

Percentages are only ever moved by evidence.
