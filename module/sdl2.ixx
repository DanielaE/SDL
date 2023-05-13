export module sdl;

export import :with_macros;
#ifndef SDL2_NO_GLOBAL_DEFINITIONS
export import :global_macros;
#endif

#ifdef _MSC_VER
#	pragma comment(lib, "sdl.lib")
#	pragma comment(lib, "setupapi.lib")
#	pragma comment(lib, "imm32.lib")
#	pragma comment(lib, "version.lib")
#	pragma comment(lib, "winmm.lib")
#endif

