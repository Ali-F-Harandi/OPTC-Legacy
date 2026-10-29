/*
 * OPTC Legacy — clean-room engine core (public API).
 *
 * This is the reimplementation side of the project ("recomp"). It is
 * written from scratch against the behavior observed in the original
 * com.namcobandaigames.spmoja010E 16.2.1 binaries (see notes/ and
 * evidence/). No original code is included.
 *
 * The engine is deliberately interface-first: every subsystem is a
 * struct of function pointers so platforms (Android/NDK, Emscripten,
 * SDL2 desktop, null/CI) can bind their own backends, mirroring how
 * the original Bisque shell hands GLES2/OpenSLES to libgame.so.
 */
#ifndef OPTC_ENGINE_H
#define OPTC_ENGINE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#define OPTC_LEGACY_NAME    "OPTC Legacy"
#define OPTC_LEGACY_VERSION "0.1.0-decomp"
#define OPTC_TARGET_GAME    "com.namcobandaigames.spmoja010E 16.2.1"

/* Subsystem ids mirror the decompilation modules in PROGRESS.json so
 * the progress wall and the runtime agree on project structure. */
typedef enum {
    OPTC_MODULE_CORE = 0,        /* engine-core — libgame.so           */
    OPTC_MODULE_GRAPHICS,        /* renderer — GLES2                    */
    OPTC_MODULE_AUDIO,           /* OpenSLES                            */
    OPTC_MODULE_ASSETS,          /* .DAT/.idx/.vb + blob pipelines      */
    OPTC_MODULE_GAMEPLAY,        /* battle/map/quest logic              */
    OPTC_MODULE_PLATFORM,        /* Bisque-equivalent platform services */
    OPTC_MODULE_COUNT
} optc_module_id;

typedef enum {
    OPTC_STATUS_OK = 0,
    OPTC_STATUS_UNSUPPORTED,     /* module not reimplemented yet       */
    OPTC_STATUS_MISSING_ASSETS,  /* original blobs not decrypted yet   */
    OPTC_STATUS_BACKEND_ERROR
} optc_status;

typedef struct optc_module {
    optc_module_id id;
    const char   *name;          /* PROGRESS.json module name          */
    int           decomp_pct;    /* mirrors PROGRESS.json, informational */
    optc_status (*init)(void);
    void         (*shutdown)(void);
    optc_status (*tick)(double dt);
} optc_module;

typedef struct optc_engine_config {
    const char *asset_root;      /* directory with extracted .DAT chunks */
    const char *save_root;       /* writable dir for saves               */
    bool        headless;        /* null backend / CI smoke tests        */
    int         window_width;
    int         window_height;
} optc_engine_config;

optc_status        optc_engine_init(const optc_engine_config *cfg);
optc_status        optc_engine_tick(double dt);
void               optc_engine_shutdown(void);
const optc_module *optc_engine_module(optc_module_id id);
int                optc_engine_module_count(void);
const char        *optc_status_str(optc_status st);

#endif /* OPTC_ENGINE_H */
