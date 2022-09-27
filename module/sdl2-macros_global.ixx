export module sdl : macros_global;
import :macros_sdl;

export {
#define X(x) constexpr inline auto SDL_##x = sdl::x;
#include "sdl2-x.h"
}
