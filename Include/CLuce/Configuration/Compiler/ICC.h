#ifndef CLUCE_HEADER_CONFIGURATION_COMPILER_ICC_H
#define CLUCE_HEADER_CONFIGURATION_COMPILER_ICC_H
#include <CLuce/Configuration/Basic-Value.h>
#include <CLuce/Configuration/Compiler-Value.h>

#ifdef CLUCE_CONFIG_COMPILER
#error The compiler configuration is invalid.
#endif

#define CLUCE_CONFIG_COMPILER CLUCE_CONFIG_ICC

#define CLUCE_CONFIG_LINUX_SUPPORTED CLUCE_CONFIG_YES
#define CLUCE_CONFIG_UNIX_SUPPORTED CLUCE_CONFIG_NO
#define CLUCE_CONFIG_WINDOWS_SUPPORTED CLUCE_CONFIG_YES

#if defined(_WIN16) || defined(_WIN32) || defined(_WIN64)
#include <CLuce/Configuration/Platform/Windows.h>
#elif defined(__linux__) || defined(linux) || defined(__linux)
#include <CLuce/Configuration/Platform/Linux.h>
#else
#error An unsupported platform.
#endif

#endif