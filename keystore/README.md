# OPTC Legacy — Community Signing Key

Custom Android builds of OPTC Legacy are signed with **our own** RSA-4096
key — never with Bandai Namco's certificate (which we neither have nor
could legally use). This makes the custom build a standalone app that can
coexist with, or replace, an original installation.

## Why the key is committed on purpose

This is the AOSP "test-key" model: OPTC Legacy is a community rebuild, and
**anyone** must be able to produce an APK that update-installs over an
existing OPTC-Legacy installation. The key is a shared community identity
for the custom build channel — it guards *update compatibility*, not
secrets. Treat any artifact signed with it as community-built, not as
anything authenticated by the original publisher.

## Key facts

| Property | Value |
|---|---|
| Keystore | `optc-legacy.jks` (JKS) |
| Alias | `optc-legacy` |
| Algorithm | RSA 4096-bit, valid 10,000 days |
| Owner | `CN=OPTC Legacy Community Build, O=GitHub Community` |
| Cert SHA-256 | `1971AC0189A7BA49B8D41E282BFD021E40CB47AF4C51F9ADE80367476FD38B2A` |
| Passwords | `keystore.properties` (in this directory) |

## Regenerate from scratch

```bash
tools/generate_keystore.sh
```

(Refuses to overwrite an existing key — rotating the identity breaks
update compatibility with installed custom builds.)

## Sign an APK manually

```bash
# Android SDK build-tools on PATH:
apksigner sign --ks keystore/optc-legacy.jks \
  --ks-key-alias optc-legacy \
  --ks-pass pass:OPTCLegacy2025! \
  --out app-release-signed.apk app-release-unsigned.apk

apksigner verify --print-certs app-release-signed.apk
```

The Gradle project (`android/`) wires this keystore into both `debug` and
`release` build types automatically.

## Verify a build is ours

```bash
apksigner verify --print-certs OPTCLegacy.apk | grep SHA-256
# must print 1971AC0189A7BA49B8D41E282BFD021E40CB47AF4C51F9ADE80367476FD38B2A
```
