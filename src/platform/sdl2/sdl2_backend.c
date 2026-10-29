/*
 * OPTC Legacy — SDL2 desktop backend.
 *
 * Opens a window + GL context (the desktop analogue of the original's
 * BQArtilleryJava SurfaceView) and drives the engine loop at display
 * rate. Compiled only when SDL2 is found (OPTC_BACKEND_SDL2).
 */
#ifdef OPTC_BACKEND_SDL2

#include "../platform.h"
#include <SDL.h>

static int sdl2_run(const optc_engine_config *cfg)
{
    if (SDL_Init(SDL_INIT_VIDEO | SDL_INIT_AUDIO | SDL_INIT_EVENTS) != 0) {
        fprintf(stderr, "[sdl2] SDL_Init: %s\n", SDL_GetError());
        return 1;
    }
    SDL_GL_SetAttribute(SDL_GL_CONTEXT_MAJOR_VERSION, 2);
    SDL_GL_SetAttribute(SDL_GL_CONTEXT_MINOR_VERSION, 0);
    SDL_GL_SetAttribute(SDL_GL_DOUBLEBUFFER, 1);

    SDL_Window *win = SDL_CreateWindow(
        OPTC_LEGACY_NAME " — " OPTC_LEGACY_VERSION,
        SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED,
        cfg ? cfg->window_width : 1280, cfg ? cfg->window_height : 720,
        SDL_WINDOW_OPENGL | SDL_WINDOW_RESIZABLE);
    if (!win) {
        fprintf(stderr, "[sdl2] SDL_CreateWindow: %s\n", SDL_GetError());
        SDL_Quit();
        return 1;
    }
    SDL_GLContext gl = SDL_GL_CreateContext(win);

    optc_engine_config c = *cfg;
    if (optc_engine_init(&c) != OPTC_STATUS_OK) {
        SDL_GL_DeleteContext(gl);
        SDL_DestroyWindow(win);
        SDL_Quit();
        return 1;
    }

    int running = 1;
    while (running) {
        SDL_Event ev;
        while (SDL_PollEvent(&ev)) {
            if (ev.type == SDL_QUIT)
                running = 0;
            if (ev.type == SDL_KEYDOWN && ev.key.keysym.sym == SDLK_ESCAPE)
                running = 0;
        }
        optc_engine_tick(1.0 / 60.0);
        /* Milestone-0 clear color: Bisque "blue" as a placeholder. */
        glClearColor(0.10f, 0.32f, 0.63f, 1.0f);
        glClear(0x00004000u /* GL_COLOR_BUFFER_BIT */);
        SDL_GL_SwapWindow(win);
    }

    optc_engine_shutdown();
    SDL_GL_DeleteContext(gl);
    SDL_DestroyWindow(win);
    SDL_Quit();
    return 0;
}

static const optc_platform g_sdl2 = { "sdl2", sdl2_run };
const optc_platform *optc_platform_sdl2(void) { return &g_sdl2; }

#else /* stub when SDL2 unavailable — desktop falls back to null */

const optc_platform *optc_platform_sdl2(void) { return 0; }

#endif /* OPTC_BACKEND_SDL2 */
