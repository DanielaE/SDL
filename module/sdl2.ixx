module;

#ifdef _WIN32
#include <winsdkver.h>

#include <windows.h>

#include <math.h>
#include <process.h>

#include <intrin.h>
#include <intrin0.h>
#else
// whatever it takes
#endif

export module sdl;

export import :macros_sdl;
#ifndef SDL2_NO_GLOBAL_DEFINITIONS
export import :macros_global;
#endif

#ifdef _MSC_VER
#	pragma comment(lib, "sdl.lib")
#	pragma comment(lib, "setupapi.lib")
#	pragma comment(lib, "imm32.lib")
#	pragma comment(lib, "version.lib")
#	pragma comment(lib, "winmm.lib")
#endif

export {
#include "sdl2.h"
}
