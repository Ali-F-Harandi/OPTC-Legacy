/*
 * OPTC Legacy — platform abstraction.
 *
 * The original hands a GLES2 Surface + OpenSLES engine to libgame.so
 * through the Bisque Java shell (BQArtilleryJava/BQJNIHelper). Our
 * equivalent is this vtable: each target (SDL2, Emscripten, Android,
 * null) binds its own window/audio/filesystem backend and then calls
 * the same engine core.
 */
#ifndef OPTC_PLATFORM_H
#define OPTC_PLATFORM_H

#include "../engine/optc_engine.h"

typedef struct optc_platform {
    const char *name;                      /* "sdl2", "web", "android", "null" */
    int       (*run)(const optc_engine_config *cfg); /* owns the main loop */
} optc_platform;

/* provided by each backend */
const optc_platform *optc_platform_sdl2(void);
const optc_platform *optc_platform_web(void);
const optc_platform *optc_platform_null(void);

/* helper for backends that drive the loop themselves */
int optc_platform_default_run(const optc_engine_config *cfg);

#endif /* OPTC_PLATFORM_H */
