#include <Luce/Configuration.hh>

#if LUCE_MACRO_IS_WINDOWS
#include <Windows.h>

LUCE_MACRO_STATIC_ASSERT(WINVER >= _WIN32_WINNT_WINXP,
						 LUCE_LANG_STATICASSERT_WINXP);
#endif