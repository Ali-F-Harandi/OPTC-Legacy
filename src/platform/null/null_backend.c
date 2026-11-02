/*
 * OPTC Legacy — null backend.
 *
 * Always compiles (no OS deps beyond libc). Used by CI smoke tests on
 * every platform and by headless tooling; runs N engine ticks and exits.
 */
#include "../platform.h"
#include <stdio.h>

static int null_run(const optc_engine_config *cfg)
{
    if (optc_engine_init(cfg) != OPTC_STATUS_OK)
        return 1;
    const int frames = 5;
    for (int i = 0; i < frames; i++)
        optc_engine_tick(1.0 / 60.0);
    printf("[null] %d frames pumped\n", frames);
    optc_engine_shutdown();
    return 0;
}

static const optc_platform g_null = { "null", null_run };
const optc_platform *optc_platform_null(void) { return &g_null; }

/* Weak fallbacks: when SDL2/Emscripten backends are not compiled into
 * the target, main.c still links and degrades to the null backend. */
#if defined(__GNUC__)
__attribute__((weak)) const optc_platform *optc_platform_sdl2(void) { return 0; }
__attribute__((weak)) const optc_platform *optc_platform_web(void)  { return 0; }
#endif
