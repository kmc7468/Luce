#ifndef LUCE_HEADER_CONFIGURATION_STANDARD_CPP98_HH
#define LUCE_HEADER_CONFIGURATION_STANDARD_CPP98_HH
#include <Luce/Configuration/Standard-Value.hh>

#ifdef LUCE_CONFIG_COMPILER
#error The standard configuration is invalid.
#endif

#define LUCE_CONFIG_STANDARD LUCE_CONFIG_CPP98

#define LUCE_MACRO_NO_EXCEPTION throw()

#endif