# ONE PIECE TREASURE CRUISE-RPG 16.2.1 — Reverse Engineering Analysis

> **بخش فارسی**: این ریپویورت کامل مهندسی معکوس (Reverse Engineering) بسته‌ی اندرویدی بازی
> **وان پیس تریجر کروز (ONE PIECE TREASURE CRUISE-RPG)** نسخه‌ی `16.2.1` (versionCode `1621`)
> با شناسه‌ی پکیج `com.namcobandaigames.spmoja010E` است. فایل اصلی به‌صورت APKM
> (بسته‌ی split از APKMirror، ۱۳۴.۶ مگابایت) با **tgkit** از طریق **MTProto** دانلود شد
> (بدون محدودیت ۲۰ مگابایتی Bot API) و سپس کل آنالیز با ابزار **REA**
> (Reverse Engineer Anything از morluto/rea) به‌همراه موتورهای **JADX** (لایه جاوا) و
> **Ghidra 12.1.4** (لایه native) انجام شد. تمام خروجی‌های خام به‌صورت Evidence استاندارد REA
> در پوشه‌ی `evidence/` ذخیره شده‌اند و تمام کدهای شبه‌سطح‌بالا (pseudocode) هر دو کتابخانه‌ی
> کوچک native استخراج شده است.

**Target**: `com.namcobandaigames.spmoja010E` — ONE PIECE TREASURE CRUISE-RPG 16.2.1 (versionCode 1621)
**Source**: APKM bundle (`arm64-v8a` + `armeabi-v7a`, 24 languages, Android 7.0+/API 24+)
**Toolchain**: `tgkit` (MTProto download) → `rea` 6.8.0 (Reverse Engineer Anything) → JADX 0.7.1 (DEX) + Ghidra 12.1.4 (ELF) + apktool 2.12.1 (resources)

---

## 1. Executive Summary

| Property | Value |
|---|---|
| App name | ONE PIECE TREASURE CRUISE-RPG |
| Package | `com.namcobandaigames.spmoja010E` |
| Version | 16.2.1 (versionCode 1621, built against SDK 36) |
| Min SDK / Target SDK | 24 (Android 7.0) / 36 (Android 16) |
| Signing | APK Signature Scheme **v2 + v3**, RSA, SHA-256 |
| Signer certificate | **NAMCO BANDAI Games Inc.**, Tokyo (self-signed, serial `4CC13C7A`, valid 2010→2038) |
| Certificate SHA-256 | `336ca2245718a9ca1672bf0bf2d324b29a836d899848ac0e8c08ba79097c03b3` |
| Signature integrity | digest **matches APK** — authentic, untampered release |
| Java classes | **11,119** across 6 DEX files |
| Native engine | Custom C++ engine (`libgame.so`, 109 MB, arm64-v8a / 81 MB armv7) |
| Builder | Android clang 19.0.1 (`+pgo, +bolt, +lto, +mlgo`), NDK r28c (arm64) |
| Protection | Custom loader `lib__7ffe__.so` + encrypted asset `assets/7ffe/data1.dat`; string-encrypted game code |

The application is a **native C++ game** (not Unity/il2cpp, not Cocos2d-x in the classical sense).
The Java layer is a thin platform shell built on Drecom's **"Bisque"** framework (`jp.co.drecom.bisque.lib.BQ*`),
which bridges Android platform services to the monolithic native game engine `libgame.so`.
All game logic — rendering (OpenGL ES 2), audio (OpenSLES), XML (bundled libxml2), gameplay —
lives inside `libgame.so`, which is heavily obfuscated (string encryption; only ~9,900 strings
visible in a 109 MB binary, none of them game-related).

## 2. How the APKM was obtained

The bundle exceeds the Bot API 20 MB download cap, so it was fetched over **MTProto**
(the native Telegram client protocol, supports up to 2 GB) using [tgkit](https://github.com/Ali-F-Harandi/tgkit):

```text
tgkit fetch https://t.me/c/3873843444/1885 --out .
# ⚠ 134.6 MB — over the Bot API's 20 MB download cap … automatically runs through MTProto
# ✓ com_namcobandaigames_spmoja010E_16_2_1_1621_2arch_7dpi_24lang_0.apkm — 141,166,735 bytes
```

SHA-256 of every artifact is recorded in [`hashes.txt`](hashes.txt).

### Bundle layout (APKM = ZIP of split APKs)

| Split | Size | Contents |
|---|---|---|
| `base.apk` | 67 MB | 6× `classes.dex`, resources, `assets/` (52 MB custom-format data) |
| `split_config.arm64_v8a.apk` | 109 MB | `libgame.so` (109 MB), `lib__7ffe__.so`, `libsigner.so`, crashlytics libs |
| `split_config.armeabi_v7a.apk` | 81 MB | 32-bit counterparts |
| `split_config.<lang>.apk` ×24 | ~20–40 KB each | language resources (ar, de, en, …, zh) |
| `split_config.<dpi>.apk` ×7 | 65–112 KB each | density resources (ldpi → xxxhdpi) |

## 3. Manifest & Attack Surface (static, declared)

`evidence/package-inspection.json` · `evidence/decoded-resources.json`

### Permissions (13)

- `android.permission.INTERNET`, `ACCESS_NETWORK_STATE` — networking
- `com.android.vending.BILLING` — in-app purchases (Play Billing)
- `com.google.android.c2dm.permission.RECEIVE` — push (FCM)
- `android.permission.POST_NOTIFICATIONS`, `VIBRATE`, `WAKE_LOCK`
- `com.google.android.gms.permission.AD_ID`, `ACCESS_ADSERVICES_ATTRIBUTION`, `ACCESS_ADSERVICES_AD_ID` — advertising/attribution
- `com.google.android.finsky.permission.BIND_GET_INSTALL_REFERRER_SERVICE` — install referrer
- `com.google.android.providers.gsf.permission.READ_GSERVICES`
- app-defined: `com.namcobandaigames.spmoja010E.DYNAMIC_RECEIVER_NOT_EXPORTED_PERMISSION`

### Declared components (32)

- **Main activity / entry point**: `jp.co.drecom.application.AppActivity`
- **Application**: `com.namcobandaigames.spmoja010E.EntryApplication`
- **Adjust attribution**: `com.adjust.sdk.AdjustReferrerReceiver`
- **Firebase**: messaging (`SakuraFirebaseMessagingService`), auth (GenericIdp/Recaptcha), iid, components
- **Play Billing**: `ProxyBillingActivity`, `ProxyBillingActivityV2`
- **Play Games v2**: `GamesResolutionActivity`, `PlayGamesAppShortcutsActivity`
- **Measurement**: `AppMeasurementReceiver/Service/JobService`
- **Datatransport**: backend discovery + job scheduling
- Others: `FileProvider`, `InitializationProvider`, `ProfileInstallReceiver`, `PlayCoreDialogWrapperActivity`

### SDK stack identified from the Java layer

| SDK | Evidence |
|---|---|
| Drecom **Bisque** platform framework | 79 `jp.co.drecom.*` classes — `BQJNIHelper`, `BQPaymentBridge`, `BQPlayGameService`, `BQTwitterHelper`, `BQUrlScheme`, `BQClipboard`, … |
| Adjust (attribution/anti-fraud) | 126 `com.adjust.sdk.*` classes + native `libsigner.so` (SDK signature) |
| Google Play Billing | 156 `com.android.billingclient.*` classes |
| Firebase (auth/messaging/iid) | 886 `com.google.firebase.*` classes |
| Play Games Services v2, Credentials, Measurement | 5,505 `com.google.android.*` classes |
| Kotlin (coroutines, serialization) | kotlinx + kotlin.jvm |
| Guava | 602 `com.google.common.*` classes |
| DataStore (preferences) | 179 androidx.datastore classes |
| Gson | 69 classes |

## 4. Java ↔ Native bridge

`evidence/methods/AppActivity_clinit.json` (smali):

```smali
.method static constructor <clinit>()V
    const-string v0, "game"
    invoke-static {v0}, Ljava/lang/System;->loadLibrary(Ljava/lang/String;)V
```

`AppActivity.<clinit>` loads `libgame.so`. Notably, **`libgame.so` exports no `Java_*` symbols
and contains no `JNI_OnLoad`/`RegisterNatives` strings** — native method binding
(`BQJNIHelper.initNativeContext` etc. are declared `native` in Java) is therefore performed
through obfuscated/indirect registration inside the native engine (init-time resolution,
consistent with the heavy string encryption observed).

## 5. Native libraries (arm64-v8a)

`evidence/native/` · full pseudocode in `evidence/native/*_decompiled/`

### 5.1 `libgame.so` — the game engine (109 MB)

- ELF 64-bit ARM aarch64, **stripped**, NDK r28c, BuildID `39190f3e2f28ee98ecb42cd6aee5446821f86838`
- Built with clang 19.0.1 profile-guided (`+pgo +bolt +lto +mlgo`) — release-hardened build
- `.text` ≈ 38.5 MB; sections include `.rodata` 2.4 MB, `.data.rel.ro` 1.7 MB, `.bss` 2.2 MB
- `DT_NEEDED`: `libandroid.so`, `libOpenSLES.so`, `libGLESv2.so`, `libEGL.so`, `libz.so`, `liblog.so`, `libm.so`, `libdl.so`, `libc.so`
- Statically bundles and re-exports **libxml2** (`__xml*`, `__htmlParseContent`) and libc++abi (`__cxa_*`)
- Only ~35 imported libc/libdl functions (`dlopen`, `dlsym`, `dlclose`, `dlerror`, fortify `*_chk`)
- `.init_array` contains **2,885 constructor entries** (0x5a28 bytes)
- **String encryption**: only ~9,900 strings total in 109 MB; zero game/asset/URL strings visible.
  Rendering = GLESv2, audio = OpenSLES. This is a custom in-house engine (Bisque/Drecom lineage).

### 5.2 `lib__7ffe__.so` — custom protection/loader (1.7 MB)

- ELF aarch64, **stripped**, unusual: no NDK banner, tiny import set — only
  `__cxa_atexit`, `__cxa_finalize`, `__stack_chk_*`, `dladdr`, `dlclose`, `dlerror`, `dlopen`, `dlsym`
- **No JNI exports at all**
- Internal string `lib__XXXX__.so` — the library name is **randomized per build**
  (`7ffe` is this build's placeholder value)
- `.data` = 411 KB of high-entropy (encrypted) payload; `.text` = 52 KB only
- Pairs with encrypted asset **`assets/7ffe/data1.dat`** (181,700 bytes, no header magic, fully encrypted)
- `init_array` entry (`0x101d54` → `FUN_0010163c`, full pseudocode in
  `evidence/native/lib7ffe_decompiled/functions/0x10163c.c`) runs a chain of **self-checks at load
  time** with step/error codes (`0xa8`, `0xb3`, …) and aborts on failure —
  anti-tamper / license-integrity behavior
- 277 functions fully decompiled (`evidence/native/lib7ffe_decompiled/`)

### 5.3 `libsigner.so` — Adjust SDK signature (1.1 MB)

- Exports `Java_com_adjust_sdk_sig_NativeLibHelper_nSign` — this is the
  **Adjust SDK Signature Library** (third-party attribution anti-fraud), *not* an app-signature check
- Uses SHA-256 (`"SHA-256"` string present); device-model gated behavior (`"exynos9810"`, `"ro.arch"`)
- 519 functions fully decompiled (`evidence/native/libsigner_decompiled/`)

### 5.4 Remaining libs

`libcrashlytics*.so` (Firebase Crashlytics, NDK r27c), `libdatastore_shared_counter.so` (AndroidX DataStore, NDK r25c) — stock Google/Firebase components, not analyzed further.

## 6. Custom asset format (reverse-engineered layout)

`notes/asset-format.md` — the `assets/` folder ships ~52 MB in a proprietary packed format:

```text
assets/
├── 7ffe/data1.dat          encrypted blob consumed by lib__7ffe__.so
├── FONT.DAT.00..05         font glyph pages (~800 KB chunks)
├── FONT.DAT.idx + .vb      index + version manifest
├── RES.DAT.00..01          main resource chunks
├── RES_LOADING.DAT.00..NN  loading-screen resources (dozens of 800 KB chunks)
└── RES_FILLINSPACE.DAT.00  filler resources
```

- **`.idx`** — binary index: header `00 00 00 64` (version 100?), then records of
  `{CRC32, size}` per chunk (e.g. `3def4d33`/`00171830`, `0c8000`, `0a9830`)
- **`.vb`** — version/manifest: little-endian entry count, then ASCII UUIDs
  (e.g. `683fb227-bfd3-e3d4-f4d8-fbebc4be58f7`) + per-chunk metadata
- **`.DAT.NN`** — 800 KB (0xC8000) chunked payload
- `ArialBM.fnt` — bitmap font (BMFont-compatible)

## 7. Security observations (static)

1. **Authenticity**: v2+v3 signature by the genuine 2010 NAMCO BANDAI certificate; content digest matches — the analyzed sample is an unmodified release build.
2. **Tamper resistance**: `lib__7ffe__.so` performs load-time self-checks with distinct failure codes; its name and its `assets/7ffe/` data are build-randomized — designed to frustrate static patching and generic tooling.
3. **String encryption**: game-native strings (endpoints, asset names) are encrypted at rest; only the loader/protector contains plaintext fragments.
4. **Indirect JNI**: no exported `Java_*` symbols in the engine; binding happens through obfuscated init paths.
5. **Attack surface** is dominated by well-known Google/Firebase/Adjust components; the custom code is native and hardened. `Exported` component flags and intent filters are inventoried in `evidence/package-inspection.json`.

## 8. Repository layout

```text
├── README.md                          this report
├── hashes.txt                         SHA-256 manifest of every analyzed artifact
├── evidence/
│   ├── package-inspection.json        REA inspect_android_package (JADX)
│   ├── decoded-resources.json         REA decode_android_resources (apktool)
│   ├── apk-signature.json             REA inspect_apk_signature
│   ├── class-inventory.json           all 11,119 class names
│   ├── classes/                       9 key-class member inventories (JADX)
│   ├── methods/                       decompiled smali of key methods
│   └── native/
│       ├── libsigner_analyze.json     ELF segment/program layout (Ghidra)
│       ├── lib7ffe_analyze.json       ELF segment/program layout (Ghidra)
│       ├── libsigner_inspect.json     binary inventory (Ghidra)
│       ├── lib7ffe_inspect.json       binary inventory (Ghidra)
│       ├── libsigner_decompiled/      519 functions × Ghidra pseudocode
│       └── lib7ffe_decompiled/        277 functions × Ghidra pseudocode
└── notes/
    └── asset-format.md                custom .DAT/.idx/.vb format notes
```

Every JSON file in `evidence/` is a standard **REA Evidence** record (contains `evidence_id`,
subject SHA-256, provider identity, raw + normalized results, limitations).

## 9. Reproduction

```bash
# 1) download over MTProto (no 20 MB Bot API cap) — https://github.com/Ali-F-Harandi/tgkit
tgkit fetch https://t.me/c/3873843444/1885 --out .

# 2) unpack the APKM (plain ZIP)
unzip com_namcobandaigames_spmoja010E_16_2_1_1621_2arch_7dpi_24lang_0.apkm -d apkm

# 3) analyze with REA — https://github.com/morluto/rea
export REA_JADX_MCP_JAR=$PWD/jadx-headless-mcp-0.7.1-all.jar
export REA_APKTOOL_COMMAND=$PWD/apktool
export GHIDRA_INSTALL_DIR=$PWD/ghidra_12.1.4_PUBLIC
rea inspect-android-package  apkm/base.apk --json
rea inspect-apk-signature    apkm/base.apk --json
rea search-android-classes   apkm/base.apk "" --json
rea decode-android-resources apkm/base.apk --json
rea analyze      split/.../lib__7ffe__.so --json
rea decompile-all split/.../lib__7ffe__.so --output out/lib7ffe
rea analyze      split/.../libsigner.so   --json
rea decompile-all split/.../libsigner.so   --output out/libsigner
```

## 10. Limitations

- Analysis is **static**; no runtime behavior, server communication, or asset decryption was performed.
- `libgame.so` (109 MB) was inventoried (ELF layout, imports/exports, init_array, strings) but not
  fully decompiled — a full Ghidra pass on a 38.5 MB `.text` with PGO+BOLT optimization is a
  multi-hour/day job and was out of scope for this pass.
- The `assets/7ffe/data1.dat` encryption and the custom `.DAT` chunk encryption are documented
  structurally only; keys are derived at runtime inside the native libraries.
- APK authenticity was verified cryptographically; runtime integrity behavior was not exercised.

---

*Analysis performed 2026-10-29 with tgkit 0.3.0, rea 6.8.0, JADX-headless-mcp 0.7.1, Ghidra 12.1.4, apktool 2.12.1 on Debian 13 / JDK 25 / Node 24. For research and educational purposes.*
