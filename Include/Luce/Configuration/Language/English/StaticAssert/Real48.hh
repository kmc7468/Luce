#ifndef LUCE_HEADER_CONFIGURATION_LANGUAGE_ENGLISH_STATICASSERT_REAL48_HH
#define LUCE_HEADER_CONFIGURATION_LANGUAGE_ENGLISH_STATICASSERT_REAL48_HH
#include <Luce/Configuration/Feature/StaticAssert.hh>

#if LUCE_CONFIG_STATICASSERT == LUCE_CONFIG_YES
#define LUCE_LANG_STATICASSERT_REAL48 \
"The size of float and double must be 4 bytes and 8 bytes, respectively."
#else
#define LUCE_LANG_STATICASSERT_REAL48 \
The_size_of_float_and_double_must_be_4_bytes_and_8_bytes_respectively
#endif

#endif