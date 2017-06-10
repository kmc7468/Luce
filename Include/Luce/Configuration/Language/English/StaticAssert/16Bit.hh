#ifndef LUCE_HEADER_CONFIGURATION_LANGUAGE_ENGLISH_STATICASSERT_16BIT_HH
#define LUCE_HEADER_CONFIGURATION_LANGUAGE_ENGLISH_STATICASSERT_16BIT_HH
#include <Luce/Configuration/Feature/StaticAssert.hh>

#if LUCE_CONFIG_STATICASSERT == LUCE_CONFIG_YES
#define LUCE_LANG_STATICASSERT_16BIT "Supports only 16-bit and higher platforms."
#else
#define LUCE_LANG_STATICASSERT_16BIT Supports_only_16_bit_and_higher_platforms
#endif

#endif