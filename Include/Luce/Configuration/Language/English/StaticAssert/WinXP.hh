#ifndef LUCE_HEADER_CONFIGURATION_LANGUAGE_ENGLISH_STATICASSERT_WINXP_HH
#define LUCE_HEADER_CONFIGURATION_LANGUAGE_ENGLISH_STATICASSERT_WINXP_HH
#include <Luce/Configuration/Feature/StaticAssert.hh>

#if LUCE_CONFIG_STATICASSERT == LUCE_CONFIG_YES
#define LUCE_LANG_STATICASSERT_WINXP "Only Windows XP or later is supported."
#else
#define LUCE_LANG_STATICASSERT_WINXP Only_Windows_XP_or_later_is_supported
#endif

#endif