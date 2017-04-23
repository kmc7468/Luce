#ifndef LUCE_HEADER_CONFIGURATION_COMPILER_HH
#define LUCE_HEADER_CONFIGURATION_COMPILER_HH

#ifdef _MSC_VER
#include <Luce/Configuration/Compiler/MSVC.hh>
#elif defined(__GNUC__)
#include <Luce/Configuration/Compiler/GCC.hh>
#elif defined(__clang__)
#include <Luce/Configuration/Compiler/Clang.hh>
#elif defined(__ICC) || defined(__ICL)
#include <Luce/Configuration/Compiler/ICC.hh>
#else
#error An unsupported compiler.
#endif

#define LUCE_MACRO_IS_MSVC (LUCE_CONFIG_COMPILER == LUCE_MACRO_MSVC)
#define LUCE_MACRO_IS_GCC (LUCE_CONFIG_COMPILER == LUCE_MACRO_GCC)
#define LUCE_MACRO_IS_CLANG (LUCE_CONFIG_COMPILER == LUCE_MACRO_CLANG)
#define LUCE_MACRO_IS_ICC (LUCE_CONFIG_COMPILER == LUCE_MACRO_CLANG)

#endif 