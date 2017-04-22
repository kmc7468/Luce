#ifndef LUCE_HEADER_CONFIGURATION_COMPILER_HH
#define LUCE_HEADER_CONFIGURATION_COMPILER_HH

#ifdef _MSC_VER
#include <Luce/Configuration/Compiler/MSVC.hh>
#elif __GNUC__
#include <Luce/Configuration/Compiler/GCC.hh>
#elif __clang__
#include <Luce/Configuration/Compiler/Clang.hh>
#else
#error An unsupported compiler.
#endif

#endif 