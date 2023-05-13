export module sdl : global_macros;
import :with_macros;

export {
#define X(x) constexpr inline auto SDL_##x = sdl::x;
#include "sdl2-x.h"
}
