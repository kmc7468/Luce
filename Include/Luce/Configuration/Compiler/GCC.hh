#ifndef LUCE_HEADER_CONFIGURATION_COMPILER_GCC_HH
#define LUCE_HEADER_CONFIGURATION_COMPILER_GCC_HH
#include <Luce/Configuration/Basic-Value.hh>
#include <Luce/Configuration/Compiler-Value.hh>

#ifdef LUCE_CONFIG_COMPILER
#error The compiler configuration is invalid.
#endif

#define LUCE_CONFIG_COMPILER LUCE_CONFIG_GCC


#define LUCE_CONFIG_LINUX_SUPPORTED LUCE_CONFIG_YES
#define LUCE_CONFIG_UNIX_SUPPORTED LUCE_CONFIG_YES
#define LUCE_CONFIG_WINDOWS_SUPPORTED LUCE_CONFIG_YES

#endif