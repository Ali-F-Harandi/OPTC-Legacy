#!/usr/bin/env bash
# OPTC Legacy — Desktop build (Linux/macOS).
# Uses SDL2 when available (real window), otherwise the null backend.
set -euo pipefail
cd "$(dirname "$0")/.."

if ! command -v cmake >/dev/null; then
  echo "cmake required (>= 3.16)"; exit 1
fi

mkdir -p build-desktop
cmake -S src -B build-desktop -DOPTC_TARGET=desktop -DCMAKE_BUILD_TYPE=Release
cmake --build build-desktop -j"$(nproc 2>/dev/null || sysctl -n hw.ncpu 2>/dev/null || echo 2)"

echo
echo "[+] Desktop binary:"
ls -la build-desktop/optc-legacy | sed 's/^/    /'
echo "[+] Run:             ./build-desktop/optc-legacy"
echo "    (set OPTC_ASSETS=<dir of extracted .DAT chunks> once assets decrypt)"
