#ifndef LUCE_HEADER_CONFIGURATION_LANGUAGE_HH
#define LUCE_HEADER_CONFIGURATION_LANGUAGE_HH
#include <Luce/Configuration/Basic-Value.hh>
#include <Luce/Configuration/Language-Value.hh>

#ifdef LUCE_CONFIG_LANGUAGE
#error The language configuration is invalid.
#endif

#define LUCE_CONFIG_LANGUAGE LUCE_CONFIG_ENGLISH
#define LUCE_CONFIG_CHANGE_STATICASSERT LUCE_CONFIG_NO

#if LUCE_CONFIG_LANGUAGE == LUCE_CONFIG_ENGLISH
#include <Luce/Configuration/Language/English.hh>
#elif LUCE_CONFIG_LANGUAGE == LUCE_CONFIG_KOREAN
#include <Luce/Configuration/Language/Korean.hh>
#else
#error The language configuration is invalid.
#endif

#endif