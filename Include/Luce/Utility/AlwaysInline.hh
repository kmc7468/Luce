#ifndef LUCE_HEADER_UTILITY_ALWAYSINLINE_HH
#define LUCE_HEADER_UTILITY_ALWAYSINLINE_HH
#include <Luce/Configuration.hh>

#if LUCE_MACRO_IS_MSVC
#define LUCE_MACRO_ALWAYS_INLINE __forceinline
#elif LUCE_MACRO_IS_GCC || LUCE_MACRO_IS_CLANG || LUCE_MACRO_IS_ICC
#define LUCE_MACRO_ALWAYS_INLINE __attribute__((always_inline))
#endif

#endif