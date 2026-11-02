# OPTC Legacy — single CMake tree, three targets:
#   desktop  : native executable (SDL2 if present, else null backend)
#   web      : Emscripten/WASM (emcmake -DOPTC_TARGET=web)
#   android  : consumed by android/ via externalNativeBuild (Gradle)
cmake_minimum_required(VERSION 3.16)
project(optc_legacy C)

set(CMAKE_C_STANDARD 11)
set(CMAKE_C_STANDARD_REQUIRED ON)

if(NOT CMAKE_BUILD_TYPE)
  set(CMAKE_BUILD_TYPE Release)
endif()

option(OPTC_TARGET "Target platform: desktop | web | android" "desktop")

# ---- sources -------------------------------------------------------------
set(OPTC_ENGINE_SRC engine/engine.c)
set(OPTC_PLATFORM_SRC platform/null/null_backend.c)

if(OPTC_TARGET STREQUAL "desktop")
  find_package(SDL2 QUIET)
  if(SDL2_FOUND)
    message(STATUS "OPTC Legacy: SDL2 found — full desktop backend")
    list(APPEND OPTC_PLATFORM_SRC platform/sdl2/sdl2_backend.c)
    add_compile_definitions(OPTC_BACKEND_SDL2)
    # classic + config-mode package layouts
    if(TARGET SDL2::SDL2)
      set(OPTC_SDL_LINK SDL2::SDL2)
    else()
      include_directories(${SDL2_INCLUDE_DIRS})
      set(OPTC_SDL_LINK ${SDL2_LIBRARIES})
    endif()
    # GL symbols (glClear & co.) are not pulled in by SDL2 on Linux
    find_package(OpenGL QUIET)
    if(OpenGL_FOUND)
      list(APPEND OPTC_SDL_LINK OpenGL::GL)
    elseif(UNIX AND NOT APPLE)
      list(APPEND OPTC_SDL_LINK GL)
    endif()
  else()
    message(STATUS "OPTC Legacy: SDL2 NOT found — null (headless) backend")
  endif()
  add_executable(optc-legacy app/main.c ${OPTC_ENGINE_SRC} ${OPTC_PLATFORM_SRC})
  if(OPTC_SDL_LINK)
    target_link_libraries(optc-legacy ${OPTC_SDL_LINK})
  endif()
  target_include_directories(optc-legacy PRIVATE src/engine src/platform)

elseif(OPTC_TARGET STREQUAL "web")
  # built with: emcmake cmake -DOPTC_TARGET=web ..
  add_compile_definitions(OPTC_BACKEND_WEB)
  add_executable(optc-legacy app/main.c ${OPTC_ENGINE_SRC} ${OPTC_PLATFORM_SRC}
                platform/web/web_backend.c)
  target_include_directories(optc-legacy PRIVATE src/engine src/platform)
  set_target_properties(optc-legacy PROPERTIES
    SUFFIX ".html"
    LINK_FLAGS "-sUSE_SDL=0 -sALLOW_MEMORY_GROWTH=1 -sASYNCIFY -sEXIT_RUNTIME=1 --shell-file ${CMAKE_CURRENT_SOURCE_DIR}/../web/shell.html")

elseif(OPTC_TARGET STREQUAL "android")
  # Gradle (android/app/build.gradle.kts) builds this tree as a shared
  # library and hands it to our own Kotlin shell (Bisque-equivalent).
  add_library(optc-legacy SHARED ${OPTC_ENGINE_SRC} ${OPTC_PLATFORM_SRC})
  target_include_directories(optc-legacy PRIVATE src/engine src/platform)
  # JNI entry points will land in src/platform/android/ as the platform
  # shell module is reimplemented (see PROGRESS.json → platform shell).
endif()
