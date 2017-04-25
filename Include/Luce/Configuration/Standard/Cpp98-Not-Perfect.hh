#ifndef LUCE_HEADER_CONFIGURATION_STANDARD_CPP98_NOT_PERFECT_HH
#define LUCE_HEADER_CONFIGURATION_STANDARD_CPP98_NOT_PERFECT_HH
#include <Luce/Configuration/Basic-Value.hh>
#include <Luce/Configuration/Standard-Value.hh>

#ifdef LUCE_CONFIG_COMPILER
#error The standard configuration is invalid.
#endif

#define LUCE_CONFIG_STANDARD LUCE_CONFIG_CPP98_NOT_PERFECT

#define LUCE_MACRO_NO_EXCEPTION LUCE_CONFIG_UNDEFINED

#endif