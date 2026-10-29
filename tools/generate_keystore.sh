#!/usr/bin/env bash
# OPTC Legacy — generate the community APK signing key.
#
# We deliberately do NOT reuse Bandai Namco's certificate (impossible and
# illegal anyway). Our custom builds are signed with our own key, so they
# install as a standalone app next to (or instead of) the original.
#
# The key is committed on purpose (AOSP "test-key" model): OPTC Legacy is
# a community rebuild — anyone must be able to produce an APK that updates
# an existing installation. This is NOT a secret key protecting anything;
# it is a shared identity for the custom build channel.
set -euo pipefail
cd "$(dirname "$0")/.."

KS="keystore/optc-legacy.jks"
mkdir -p keystore

if [[ -f "$KS" ]]; then
  echo "[!] $KS already exists — refusing to overwrite."
  echo "    (delete it manually if you really want a new identity; this
     breaks update-compatibility with previously installed custom builds)"
  exit 0
fi

PASS="OPTCLegacy2025!"
ALIAS="optc-legacy"

keytool -genkeypair -v \
  -keystore "$KS" \
  -storetype JKS \
  -alias "$ALIAS" \
  -keyalg RSA -keysize 4096 -validity 10000 \
  -storepass "$PASS" -keypass "$PASS" \
  -dname "CN=OPTC Legacy Community Build, OU=OPTC-Legacy, O=GitHub Community, L=Internet, C=US" \
  -ext KeyUsage:critical="digitalSignature,keyEncipherment" \
  -ext ExtendedKeyUsage="serverAuth,clientAuth" 2>&1 | sed 's/^/    /'

keytool -exportcert -keystore "$KS" -alias "$ALIAS" -storepass "$PASS" -rfc \
  > keystore/optc-legacy.crt 2>/dev/null

SHA256=$(keytool -list -v -keystore "$KS" -alias "$ALIAS" -storepass "$PASS" 2>/dev/null \
  | awk '/SHA256:/ {print $2}')

cat > keystore/keystore.properties <<EOF
# OPTC Legacy community signing key (intentionally public — see README)
storeFile=optc-legacy.jks
storePassword=$PASS
keyAlias=$ALIAS
keyPassword=$PASS
certificateSha256=$SHA256
EOF

cat <<EOF

[+] generated: $KS
    alias:          $ALIAS
    algorithm:      RSA 4096, valid 10000 days
    SHA-256 cert:   $SHA256

    config written: keystore/keystore.properties
    certificate:    keystore/optc-legacy.crt
EOF
