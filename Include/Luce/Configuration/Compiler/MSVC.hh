#ifndef LUCE_HEADER_CONFIGURATION_COMPILER_MSVC_HH
#define LUCE_HEADER_CONFIGURATION_COMPILER_MSVC_HH
#include <Luce/Configuration/Compiler-Value.hh>

#ifdef LUCE_CONFIG_COMPILER
#error The compiler configuration is invalid.
#endif

#define LUCE_CONFIG_COMPILER LUCE_CONFIG_MSVC

#endif