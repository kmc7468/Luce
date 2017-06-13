#ifndef LUCE_HEADER_CONFIGURATION_LANGUAGE_KOREAN_STATICASSERT_REAL48_HH
#define LUCE_HEADER_CONFIGURATION_LANGUAGE_KOREAN_STATICASSERT_REAL48_HH
#include <Luce/Configuration/Feature/StaticAssert.hh>

#if LUCE_CONFIG_STATICASSERT == LUCE_CONFIG_YES
#define LUCE_LANG_STATICASSERT_REAL48 "float 및 double의 크기는 각각 4바이트, 8바이트여야 합니다."
#else
#define LUCE_LANG_STATICASSERT_REAL48 float_및_double의_크기는_각각_4바이트_8바이트여야_합니다
#endif

#endif