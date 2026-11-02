# OPTC Legacy — Architecture Map

Clean-room reverse-engineering architecture of ONE PIECE TREASURE CRUISE-RPG
16.2.1 (`com.namcobandaigames.spmoja010E`, versionCode 1621), reconstructed
from the APKM bundle via REA (JADX + Ghidra + apktool).

## Layer diagram

```text
┌────────────────────────────────────────────────────────────────────┐
│ Android app shell (Java/Kotlin, 6 DEX files)                       │
│                                                                    │
│  jp.co.drecom.bisque.*  ← 187 classes — "Bisque" platform framework│
│    BQGameHelper      game entry, surface handoff to native         │
│    BQJNIHelper       JNI bridge: RegisterNatives, context init     │
│    BQArtilleryJava   SurfaceView/GL thread owner (GLES2)           │
│    BQAppPlatformManager  lifecycle, storage, billing hooks         │
│    BQPaymentBridge   Google Play Billing                          │
│    BQUrlScheme       deep links                                   │
│    GameApp / AppActivity / EntryApplication                       │
│                                                                    │
│  + Google/Firebase/AndroidX/Adjust (~17k classes of SDK bloat)     │
├────────────────────────────────────────────────────────────────────┤
│ lib__7ffe__.so (1.7 MB) — custom loader / anti-tamper              │
│   consumes assets/7ffe/data1.dat (181,700 B, entropy ≈ 7.98)       │
├────────────────────────────────────────────────────────────────────┤
│ libgame.so (104.3 MB, AArch64) — monolithic native game engine     │
│   .text 38.2 MiB · ~13k–26k functions (all symbols stripped)       │
│   + 39.9 MiB embedded encrypted resource blob (unnamed section)    │
│   rendering: OpenGL ES 2 · audio: OpenSLES · XML: bundled libxml2   │
├────────────────────────────────────────────────────────────────────┤
│ libsigner.so (1.1 MB) — request signing for the game API           │
│ libcrashlytics*.so — Firebase crash reporting (4 libs)             │
└────────────────────────────────────────────────────────────────────┘
```

## Why this is (and is not) a classic decomp target

**Not Unity, not Cocos2d-x, not il2cpp.** OPTC is a bespoke C++ engine
(Bandai Namco / Drecom "Bisque" shell). There is no managed game layer to
harvest — everything gameplay-related lives in `libgame.so`.

Consequences:

1. The Java layer is small (187 Bisque classes) and already largely
   documented — it is the **easy 1%**.
2. The engine is monolithic, stripped, string-encrypted, PGO+LTO+MLGO
   optimized clang 19 code — the **hard 99%**.
3. The game data ships in two encrypted places (39.9 MiB blob inside
   `libgame.so`, plus first-run downloads), so an asset pipeline is a
   first-class deliverable, not an afterthought.

## Recompilation strategy

| Layer | Strategy | Status |
|---|---|---|
| Platform shell | Clean-room Kotlin/Java reimplementation of the Bisque API surface (interface-compatible) | started — `src/platform/android` |
| Native engine | Interface-first reimplementation (`src/engine`): window/renderer/audio/VFS/asset APIs, then gameplay modules | skeleton in place |
| Assets | Format tooling for `.DAT/.idx/.vb` chunks + decryptors for the two blobs | `.idx` format documented, decryption TODO |
| Android build | Gradle + CMake NDK project, own signing key | `android/` |
| Web build | Emscripten (WASM) target of the same `src/` tree | `web/` |
| Desktop build | SDL2/null backend target of the same `src/` tree | `desktop/` |

All three build targets compile the same `src/` tree — that is the whole
point of the recomp: **one clean-room codebase, three platforms.**
