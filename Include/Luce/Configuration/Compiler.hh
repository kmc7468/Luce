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

#endif 