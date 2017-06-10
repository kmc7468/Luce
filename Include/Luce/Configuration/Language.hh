#ifndef LUCE_HEADER_CONFIGURATION_LANGUAGE_HH
#define LUCE_HEADER_CONFIGURATION_LANGUAGE_HH
#include <Luce/Configuration/Basic-Value.hh>
#include <Luce/Configuration/Language-Value.hh>

#ifdef LUCE_CONFIG_LANGUAGE
#error The language configuration is invalid.
#endif

// Language is Only LUCE_MACRO_STATIC_ASSERT's messages and
// exception reason messages are changed.
// Possible values: 
// English: LUCE_CONFIG_ENGLISH
// ÇÑ±¹¾î: LUCE_CONFIG_KOREAN
#define LUCE_CONFIG_LANGUAGE LUCE_CONFIG_ENGLISH

// Don't change LUCE_MACRO_STATIC_ASSERT's message.
// (Used when the message looks strange.)
// If you don't change it, you will see an English message.
// Possible values:
// Change: LUCE_CONFIG_YES
// Don't change: LUCE_CONFIG_NO
#define LUCE_CONFIG_CHANGE_STATICASSERT LUCE_CONFIG_NO

#if LUCE_CONFIG_LANGUAGE == LUCE_CONFIG_ENGLISH
#include <Luce/Configuration/Language/English.hh>
#elif LUCE_CONFIG_LANGUAGE == LUCE_CONFIG_KOREAN
#include <Luce/Configuration/Language/Korean.hh>
#else
#error The language configuration is invalid.
#endif

#endif