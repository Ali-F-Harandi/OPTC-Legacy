/*
 * OPTC Legacy — Emscripten (web/WASM) backend.
 *
 * The browser owns the main loop, so run() just registers the engine
 * tick with emscripten_set_main_loop and returns; the same engine core
 * as desktop/Android runs inside WASM. Compiled only under EMSDK
 * (OPTC_BACKEND_WEB).
 */
#ifdef OPTC_BACKEND_WEB

#include "../platform.h"
#include <emscripten.h>

static optc_engine_config g_web_cfg;

static void web_frame(void)
{
    optc_engine_tick(1.0 / 60.0);
    /* WebGL clear happens through the same GLES2-compatible path the
     * engine core will expose once the renderer module is real. */
}

static int web_run(const optc_engine_config *cfg)
{
    g_web_cfg = *cfg;
    g_web_cfg.headless = false;
    if (optc_engine_init(&g_web_cfg) != OPTC_STATUS_OK)
        return 1;
    emscripten_set_main_loop(web_frame, 0, 1 /* simulate_infinite_loop */);
    /* unreachable when simulate_infinite_loop=1 */
    optc_engine_shutdown();
    return 0;
}

static const optc_platform g_web = { "web", web_run };
const optc_platform *optc_platform_web(void) { return &g_web; }

#else /* stub for non-emscripten builds */

const optc_platform *optc_platform_web(void) { return 0; }

#endif /* OPTC_BACKEND_WEB */
