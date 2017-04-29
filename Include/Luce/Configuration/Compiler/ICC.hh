#ifndef LUCE_HEADER_CONFIGURATION_COMPILER_ICC_HH
#define LUCE_HEADER_CONFIGURATION_COMPILER_ICC_HH
#include <Luce/Configuration/Basic-Value.hh>
#include <Luce/Configuration/Compiler-Value.hh>

#ifdef LUCE_CONFIG_COMPILER
#error The compiler configuration is invalid.
#endif

#define LUCE_CONFIG_COMPILER LUCE_CONFIG_ICC

#define LUCE_CONFIG_LINUX_SUPPORTED LUCE_CONFIG_YES
#define LUCE_CONFIG_UNIX_SUPPORTED LUCE_CONFIG_NO
#define LUCE_CONFIG_WINDOWS_SUPPORTED LUCE_CONFIG_YES

#if defined(_WIN16) || defined(_WIN32) || defined(_WIN64)
#include <Luce/Configuration/Platform/Windows.hh>
#elif defined(__linux__) || defined(linux) || defined(__linux)
#include <Luce/Configuration/Platform/Linux.hh>
#else
#error An unsupported platform.
#endif

#endif