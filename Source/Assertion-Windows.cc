#include <Luce/Configuration.hh>

#if LUCE_MACRO_IS_WINDOWS
#include <Windows.h>

#if LUCE_MACRO_IS_YES(LUCE_CONFIG_STATICASSERT)
LUCE_MACRO_STATIC_ASSERT(WINVER >= _WIN32_WINNT_WINXP,
						 "Only Windows XP or later is supported.");
#else
LUCE_MACRO_STATIC_ASSERT(WINVER >= _WIN32_WINNT_WINXP,
						 Only_Windows_XP_or_later_is_supported);
#endif
#endif