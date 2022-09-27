module;
#include "sdl2.h"

export module sdl : macros_sdl;

export namespace sdl {
#define X(x) constexpr inline auto x = SDL_##x;
#include "sdl2-x.h"
}
