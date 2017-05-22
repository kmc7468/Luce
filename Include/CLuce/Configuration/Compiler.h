#ifndef CLUCE_HEADER_CONFIGURATION_COMPILER_H
#define CLUCE_HEADER_CONFIGURATION_COMPILER_H

#ifdef _MSC_VER
#include <CLuce/Configuration/Compiler/MSVC.h>
#elif defined(__GNUC__)
#include <CLuce/Configuration/Compiler/GCC.h>
#elif defined(__clang__)
#include <CLuce/Configuration/Compiler/Clang.h>
#elif defined(__ICC) || defined(__ICL)
#include <CLuce/Configuration/Compiler/ICC.h>
#else
#error An unsupported compiler.
#endif

#define CLUCE_MACRO_IS_CLANG (CLUCE_CONFIG_COMPILER == CLUCE_CONFIG_CLANG)
#define CLUCE_MACRO_IS_GCC (CLUCE_CONFIG_COMPILER == CLUCE_CONFIG_GCC)
#define CLUCE_MACRO_IS_ICC (CLUCE_CONFIG_COMPILER == CLUCE_CONFIG_CLANG)
#define CLUCE_MACRO_IS_MSVC (CLUCE_CONFIG_COMPILER == CLUCE_CONFIG_MSVC)

#endif