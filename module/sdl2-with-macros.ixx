module;
#include "sdl2-gmf.h"

export module sdl : with_macros;

export {
#include "sdl2.h"
}

namespace {
static constexpr auto SDL_FLT_EPSILON_materialized = SDL_FLT_EPSILON;
}
#undef FLT_EPSILON
#undef SDL_FLT_EPSILON
#define SDL_FLT_EPSILON SDL_FLT_EPSILON_materialized

export namespace sdl {
#define X(x) constexpr inline auto x = SDL_##x;
#include "sdl2-x.h"
}
