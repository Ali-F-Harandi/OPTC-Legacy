# OPTC Legacy

**A community decompilation & recompilation project for ONE PIECE TREASURE CRUISE-RPG 16.2.1 — with custom rebuilds for Android, Web and Desktop.**

[![build](https://github.com/Ali-F-Harandi/OPTC-Legacy/actions/workflows/build.yml/badge.svg)](../../actions)
[![deploy-web](https://github.com/Ali-F-Harandi/OPTC-Legacy/actions/workflows/deploy-pages.yml/badge.svg)](../../actions/workflows/deploy-pages.yml)
[![play](https://img.shields.io/badge/play-web%20build%20%28WASM%29-6ea8ff?logo=githubpages&logoColor=white)](https://ali-f-harandi.github.io/OPTC-Legacy/)
[![progress](https://img.shields.io/badge/decompilation-25.2%25-blue)](PROGRESS.json)
[![target](https://img.shields.io/badge/target-16.2.1%20%221621%22-critical)](hashes.txt)
[![license](https://img.shields.io/badge/legal-clean--room%20RE-important)](#legal)

---

<!-- PROGRESS:BEGIN -->

### 🧱 Decompilation Wall

**Overall — 25.4% decompiled & rebuilt**

```text
██████████░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░  25.4%
```

| Module | Progress | Status |
|:---|:---|:---|
| Artifact acquisition (tgkit/MTProto) | `🟩🟩🟩🟩🟩🟩🟩🟩🟩🟩🟩🟩🟩🟩🟩🟩🟩🟩🟩🟩` 100% | 134.6 MB APKM pulled over MTProto, SHA-256 pinned in hashes.txt |
| Packaging & signature analysis | `🟩🟩🟩🟩🟩🟩🟩🟩🟩🟩🟩🟩🟩🟩🟩🟩🟩🟩🟩🟩` 100% | 34 splits mapped; v2+v3 RSA/SHA-256 signature verified authentic |
| Platform shell — Bisque Java layer | `🟩🟨⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜` 7% | 9 of 187 jp.co.drecom.bisque classes deep-documented (JADX) |
| Anti-tamper loader — lib__7ffe__.so | `🟩🟩🟩🟩🟩🟩🟩🟩🟩🟩🟩🟩🟩🟩🟩🟩🟩🟩🟨⬜` 93% | M1b core DONE: stage-2 crypto architecture fully reversed — AES-256 T-tables byte-exact standard, shipped decrypt-order schedule inverted to master key (60/60 re-expansion, FIPS-197 PASS), stream cipher + GF(2^32) deobfuscator + LZ77 layer reimplemented; data1.dat buffer hand-off tracing remains |
| API signer — libsigner.so | `🟩🟩🟩🟩🟩🟩🟩🟩🟩🟩🟩🟩🟩🟩🟩🟩🟩🟨⬜⬜` 85% | 519 functions pseudocoded; request-signing scheme reconstructed |
| Engine core — libgame.so | `🟨⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜` 4% | section/capability map done; 38.2 MiB .text ≈ 13k–26k functions pending |
| Renderer (OpenGL ES 2) | `🟨⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜` 2% | GLES2 confirmed via shell; runtime API table not yet walked |
| Audio (OpenSLES) | `🟨⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜` 2% | backend confirmed; mixer/voice graph pending |
| Asset formats & pipelines | `🟩🟩🟩🟩🟨⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜` 24% | .idx chunk format + 7ffe container format reversed (unpack_7ffe.py); 39.9 MB engine blob + data1.dat still encrypted |
| Android custom build | `🟩🟩🟩🟩🟩🟨⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜` 25% | Gradle + CMake/NDK harness with own v4 keystore (optc-legacy.jks) |
| Web build (Emscripten/WASM) | `🟩🟩🟩🟨⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜` 15% | single CMake tree + Emscripten preset & shell ready |
| Desktop build (SDL2) | `🟩🟩🟩🟩🟩🟩🟨⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜` 30% | null/SDL2 backends compile clean on Linux — smoke-tested |
| Tooling & CI | `🟩🟩🟩🟩🟩🟩🟩🟩🟩🟩🟩🟨⬜⬜⬜⬜⬜⬜⬜⬜` 58% | unpacker + cipher attack toolkit + 3-OS CI matrix (Linux/macOS/Windows) + Pages deploy |
| Documentation | `🟩🟩🟩🟩🟩🟩🟩🟩🟨⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜` 40% | architecture map + engine deep-dive notes published |

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

**Stage-2 protector (1 cell = 10 functions, 269 total)** — 5/27 (18.5%)

```text
🟩🟩🟩🟩🟩🟨🟨⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜
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
code — and it is why the progress wall above is honest about single-digit
engine percentages.

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
| Hidden data | 39,927,376-byte encrypted blob in an unnamed ELF section of `libgame.so` |
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
[`notes/asset-format.md`](notes/asset-format.md)

## Repository layout

```text
├── PROGRESS.json          progress source of truth (units, not vibes)
├── tools/                 fetch / extract / unpack-7ffe / keystore / progress
├── evidence/              REA evidence — inventories, class & method dossiers
├── notes/                 architecture, engine & asset-format write-ups
├── decomp/                decompiler output (Ghidra pseudocode, per function)
│   ├── native-loader-7ffe/   277 functions
│   └── native-signer/        519 functions
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
| Native ELF | Ghidra 12.1.4 |
| Resources | apktool 2.12.1 |
| Static inventory | readelf/strings/BinWalk pipelines (`tools/`) |

## Roadmap

1. **M0 — skeleton** ✅ engine registry + 3 build targets + own signing key
2. **M1 — loader defeat** ✅ **core done**: bootstrap chain reversed, cipher
   (dword add+XOR stream) recovered, self-keyed header cracked, stage-2
   protector module (153,968 B of valid ARM64) decrypts cleanly —
   see [`notes/7ffe-loader.md`](notes/7ffe-loader.md) and
   `tools/unpack_7ffe.py`
   - **M1b — open**: stage-2 holds the `data1.dat` key/algorithm; decompile
     the decrypted module to finish the asset unlock
3. **M2 — asset pipeline**: parse the 39.9 MB engine blob + `.DAT/.idx/.vb`
   chunk format (already mapped: `notes/asset-format.md`)
4. **M3 — JNI table**: walk `JNI_OnLoad`/`RegisterNatives` → full Java-facing
   engine API
5. **M4 — renderer**: GLES2 scene graph reimplementation (biggest module)
6. **M5 — gameplay**: battle system, then everything else, block by block

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
2. claim a class (Bisque shell) or a function range (loader/signer pseudocode
   is already in `decomp/` — pick a `FUN_*.c` and turn it into real C in `src/`)
3. open a PR; update `PROGRESS.json` — the wall regenerates itself
   (`python3 tools/progress.py --write`)

Percentages are only ever moved by evidence.
