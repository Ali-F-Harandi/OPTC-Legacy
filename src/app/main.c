/*
 * OPTC Legacy — desktop entry point.
 *
 * Backend priority: SDL2 → null (headless). Kept in one file so the
 * exact same main.c is reused by web builds via Emscripten's
 * "--pre-js" entry (web/shell.html).
 */
#include "../platform/platform.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char **argv)
{
    optc_engine_config cfg;
    memset(&cfg, 0, sizeof(cfg));
    cfg.window_width  = 1280;
    cfg.window_height = 720;
    cfg.asset_root    = getenv("OPTC_ASSETS") ? getenv("OPTC_ASSETS") : "./assets";
    cfg.save_root     = getenv("OPTC_SAVES")  ? getenv("OPTC_SAVES")  : "./saves";

    const optc_platform *backend = 0;
    const char *backend_name = "?";

#ifdef OPTC_BACKEND_WEB
    backend = optc_platform_web();
    backend_name = "web (Emscripten)";
#else
    backend = optc_platform_sdl2();
    backend_name = "sdl2";
#endif
    if (!backend) {
        backend = optc_platform_null();
        backend_name = "null (headless)";
        fprintf(stderr,
                "[desktop] SDL2 not available — falling back to null backend. "
                "Install SDL2 or run the WASM/Android target for real output.\n");
    }
    printf("[desktop] backend: %s\n", backend_name);
    return backend->run(&cfg);
}
