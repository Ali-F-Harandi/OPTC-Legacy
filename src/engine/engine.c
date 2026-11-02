/*
 * OPTC Legacy — engine core.
 *
 * Milestone 0 of the recomp: the module registry boots, ticks and
 * shuts down cleanly on every platform (desktop SDL2, web/WASM,
 * Android/NDK, null). Each module reports the same completion data
 * that tools/progress.py renders, so `optc-engine --status` always
 * matches the README wall.
 */
#include "optc_engine.h"

#include <stdio.h>
#include <string.h>

/* ---- module stubs ---------------------------------------------------- */

static optc_status stub_init(void)  { return OPTC_STATUS_UNSUPPORTED; }
static void       stub_shutdown(void) { /* nothing allocated */ }
static optc_status stub_tick(double dt)
{
    (void)dt;
    return OPTC_STATUS_UNSUPPORTED;
}

/* Milestone-0 modules with real (but tiny) behavior: they boot and
 * report "unsupported until assets decrypt" rather than claiming to
 * implement anything. Honesty is the project's contract. */
static optc_status core_init(void)   { return OPTC_STATUS_OK; }
static optc_status core_tick(double dt)
{
    (void)dt;
    return OPTC_STATUS_OK; /* event pump happens in the platform layer */
}

static optc_status assets_init(void)
{
    /* The two encrypted blobs (engine tail section + 7ffe/data1.dat)
     * are documented in notes/asset-format.md but not yet decryptable,
     * so the asset pipeline intentionally refuses to "run". */
    return OPTC_STATUS_MISSING_ASSETS;
}

/* ---- registry --------------------------------------------------------- */

static optc_module g_modules[OPTC_MODULE_COUNT] = {
    { OPTC_MODULE_CORE,     "engine-core — libgame.so",        4,  core_init,    stub_shutdown, core_tick    },
    { OPTC_MODULE_GRAPHICS, "renderer — OpenGL ES 2",          2,  stub_init,    stub_shutdown, stub_tick    },
    { OPTC_MODULE_AUDIO,    "audio — OpenSLES",                2,  stub_init,    stub_shutdown, stub_tick    },
    { OPTC_MODULE_ASSETS,   "assets — .DAT/.idx/.vb + blobs", 18,  assets_init,  stub_shutdown, stub_tick    },
    { OPTC_MODULE_GAMEPLAY, "gameplay",                        0,  stub_init,    stub_shutdown, stub_tick    },
    { OPTC_MODULE_PLATFORM, "platform services (Bisque-equiv)", 7,  stub_init,    stub_shutdown, stub_tick    },
};

static optc_engine_config g_cfg;
static bool g_running = false;

optc_status optc_engine_init(const optc_engine_config *cfg)
{
    if (!cfg) return OPTC_STATUS_BACKEND_ERROR;
    g_cfg = *cfg;
    if (!g_cfg.window_width)  g_cfg.window_width  = 1280;
    if (!g_cfg.window_height) g_cfg.window_height = 720;

    printf("[%s v%s] target: %s\n", OPTC_LEGACY_NAME,
           OPTC_LEGACY_VERSION, OPTC_TARGET_GAME);

    int booted = 0;
    for (int i = 0; i < OPTC_MODULE_COUNT; i++) {
        optc_status st = g_modules[i].init ? g_modules[i].init() : OPTC_STATUS_OK;
        printf("  %-38s decomp %3d%%  init: %s\n",
               g_modules[i].name, g_modules[i].decomp_pct, optc_status_str(st));
        if (st == OPTC_STATUS_OK) booted++;
    }
    printf("  modules ready: %d/%d\n", booted, OPTC_MODULE_COUNT);
    g_running = booted > 0;
    return OPTC_STATUS_OK;
}

optc_status optc_engine_tick(double dt)
{
    if (!g_running) return OPTC_STATUS_BACKEND_ERROR;
    for (int i = 0; i < OPTC_MODULE_COUNT; i++) {
        if (g_modules[i].tick)
            (void)g_modules[i].tick(dt);
    }
    return OPTC_STATUS_OK;
}

void optc_engine_shutdown(void)
{
    for (int i = 0; i < OPTC_MODULE_COUNT; i++) {
        if (g_modules[i].shutdown)
            g_modules[i].shutdown();
    }
    g_running = false;
}

const optc_module *optc_engine_module(optc_module_id id)
{
    return (id >= 0 && id < OPTC_MODULE_COUNT) ? &g_modules[id] : NULL;
}

int optc_engine_module_count(void) { return OPTC_MODULE_COUNT; }

const char *optc_status_str(optc_status st)
{
    switch (st) {
    case OPTC_STATUS_OK:            return "ok";
    case OPTC_STATUS_UNSUPPORTED:   return "not reimplemented yet";
    case OPTC_STATUS_MISSING_ASSETS:return "waiting on asset decryption";
    case OPTC_STATUS_BACKEND_ERROR: return "backend error";
    }
    return "?";
}
