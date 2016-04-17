#include <SDL_platform.h>
#include "Diagnostics.hpp"

#if __WINDOWS__
    #define WIN32_LEAN_AND_MEAN
    #include <windows.h>
#endif

namespace Debug
{
    void Break()
    {
#if DEBUG
#if __WINDOWS__
        if (IsDebuggerPresent())
        {
            DebugBreak();
        }
#endif
#endif
    }
}
