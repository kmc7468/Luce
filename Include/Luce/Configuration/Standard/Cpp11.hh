#ifndef LUCE_HEADER_CONFIGURATION_STANDARD_CPP11_HH
#define LUCE_HEADER_CONFIGURATION_STANDARD_CPP11_HH
#include <Luce/Configuration/Standard-Value.hh>

#ifdef LUCE_CONFIG_COMPILER
#error The standard configuration is invalid.
#endif

#define LUCE_CONFIG_COMPILER LUCE_MACRO_CPP11

#define LUCE_MACRO_NO_EXCEPTION noexcept
#define LUCE_MACRO_CONST_FUNCTION const

#endif