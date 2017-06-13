#ifndef LUCE_HEADER_CONFIGURATION_LANGUAGE_KOREAN_STATICASSERT_HH
#define LUCE_HEADER_CONFIGURATION_LANGUAGE_KOREAN_STATICASSERT_HH

#if LUCE_MACRO_IS_NO(LUCE_CONFIG_CHANGE_STATICASSERT)
#include <Luce/Configuration/Language/Korean/StaticAssert/8Bit.hh>
#include <Luce/Configuration/Language/Korean/StaticAssert/16Bit.hh>
#include <Luce/Configuration/Language/Korean/StaticAssert/Real48.hh>
#include <Luce/Configuration/Language/Korean/StaticAssert/WinXP.hh>
#else
#include <Luce/Configuration/Language/English.hh>
#endif

#endif