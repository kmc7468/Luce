#ifndef LUCE_HEADER_CONFIGURATION_LANGUAGE_ENGLISH_STATICASSERT_8BIT_HH
#define LUCE_HEADER_CONFIGURATION_LANGUAGE_ENGLISH_STATICASSERT_8BIT_HH
#include <Luce/Configuration/Feature/StaticAssert.hh>

#if LUCE_CONFIG_STATICASSERT == LUCE_CONFIG_YES
#define LUCE_LANG_STATICASSERT_8BIT "Only platforms with 8-bits per byte are supported."
#else
#define LUCE_LANG_STATICASSERT_8BIT Only_platforms_with_8_bits_per_byte_are_supported
#endif

#endif