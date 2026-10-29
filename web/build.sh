#!/usr/bin/env bash
# OPTC Legacy — Web (Emscripten/WASM) build.
# Produces build-web/optc-legacy.{html,wasm,js} — serve with any static server.
set -euo pipefail
cd "$(dirname "$0")/.."

command -v emcc >/dev/null || {
  cat <<'EOF'
emcc not found. Install the Emscripten SDK:

  git clone https://github.com/emscripten-core/emsdk.git
  ./emsdk/emsdk install latest && ./emsdk/emsdk activate latest
  source ./emsdk/emsdk_env.sh
EOF
  exit 1
}

mkdir -p build-web
emcmake cmake -S src -B build-web -DOPTC_TARGET=web -DCMAKE_BUILD_TYPE=Release
cmake --build build-web -j"$(nproc 2>/dev/null || echo 2)"

echo
echo "[+] Web bundle:"
ls -la build-web/optc-legacy.* | sed 's/^/    /'
echo "[+] Serve locally:  python3 -m http.server -d build-web 8080"
