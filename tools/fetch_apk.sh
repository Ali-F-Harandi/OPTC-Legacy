#!/usr/bin/env bash
# OPTC Legacy — acquire the 16.2.1 APKM bundle over Telegram MTProto.
#
# The bundle is 134.6 MB — far above the Bot API's 20 MB getFile cap —
# so tgkit automatically routes the fetch through MTProto.
#
# Requirements:
#   pip install -e https://github.com/Ali-F-Harandi/tgkit
#   tgkit init   # configure API_ID / API_HASH / bot tokens (never commit them)
#
# Usage:
#   tools/fetch_apk.sh <telegram-message-url> <out-dir>
set -euo pipefail

URL="${1:-https://t.me/c/3873843444/1885}"
OUT="${2:-./artifacts}"

mkdir -p "$OUT"

echo "[*] Fetching $URL via MTProto (files >20 MB bypass the Bot API cap)…"
tgkit fetch "$URL" --out "$OUT"

echo "[*] Verifying…"
sha256sum "$OUT"/*.apkm* 2>/dev/null || true

cat <<'EOF'
Expected artifact (16.2.1 global):
  com_namcobandaigames_spmoja010E_16_2_1_1621_2arch_7dpi_24lang_0.apkm
  sha256: see hashes.txt — verify before continuing.
EOF
