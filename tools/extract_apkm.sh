#!/usr/bin/env bash
# OPTC Legacy — unpack the split-APK (APKM) bundle.
#
# Usage:
#   tools/extract_apkm.sh <bundle.apkm> <out-dir>
set -euo pipefail

APKM="$1"
OUT="${2:-./artifacts/apkm_extracted}"

command -v unzip >/dev/null || { echo "unzip required"; exit 1; }

mkdir -p "$OUT"
# APKM is a zip of split APKs (base.apk + split_config.*)
unzip -o -q "$APKM" -d "$OUT"

echo "[*] Splits:"
ls -la "$OUT" | sed 's/^/    /'

echo "[*] Native libraries (arm64):"
unzip -l "$OUT/split_config.arm64_v8a.apk" 'lib/*' | sed 's/^/    /'

echo "[*] Next steps:"
echo "    python3 tools/extract_blobs.py \\"
echo "        $OUT/split_unpacked_arm64/lib/arm64-v8a/libgame.so \\"
echo "        $OUT/base.apk ./artifacts/blobs"
