module;
#ifdef __MINGW64__
#include <cwchar>
#include <compare>
#endif

#include "sdl2-gmf.h"

#ifdef __clang__
#include "sdl2.h"
#endif

export module sdl : with_macros;

#ifndef __clang__
export {
#include "sdl2.h"
}

#else

export using ::SDL_Window;
export using ::SDL_CreateWindow;
export using ::SDL_DestroyWindow;
export using ::SDL_Renderer;
export using ::SDL_CreateRenderer;
export using ::SDL_DestroyRenderer;
export using ::SDL_Texture;
export using ::SDL_CreateTexture;
export using ::SDL_DestroyTexture;
export using ::SDL_Init;
export using ::SDL_GetNumVideoDisplays;
export using ::SDL_Rect;
export using ::SDL_SetWindowMinimumSize;
export using ::SDL_RenderSetIntegerScale;
export using ::SDL_SetRenderDrawColor;
export using ::SDL_HideWindow;
export using ::SDL_RenderSetLogicalSize;
export using ::SDL_GetDisplayBounds;
export using ::SDL_ShowWindow;
export using ::SDL_RenderClear;
export using ::SDL_LockTexture;
export using ::SDL_UnlockTexture;
export using ::SDL_RenderCopy;
export using ::SDL_RenderPresent;
export using ::SDL_Event;
export using ::SDL_PollEvent;
export using ::SDL_ConvertPixels;
export using ::SDL_GetNumVideoDisplays;

#endif

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
