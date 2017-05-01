#ifndef LUCE_HEADER_CONFIGURATION_COMPILER_CLANG_HH
#define LUCE_HEADER_CONFIGURATION_COMPILER_CLANG_HH
#include <Luce/Configuration/Basic-Value.hh>
#include <Luce/Configuration/Compiler-Value.hh>

#ifdef LUCE_CONFIG_COMPILER
#error The compiler configuration is invalid.
#endif

#define LUCE_CONFIG_COMPILER LUCE_CONFIG_CLANG

#define LUCE_CONFIG_LINUX_SUPPORTED LUCE_CONFIG_YES
#define LUCE_CONFIG_UNIX_SUPPORTED LUCE_CONFIG_YES
#define LUCE_CONFIG_WINDOWS_SUPPORTED LUCE_CONFIG_YES

#if defined(_WIN16) || defined(_WIN32) || defined(_WIN64)
#include <Luce/Configuration/Platform/Windows.hh>
#elif defined(__linux__) || defined(linux) || defined(__linux)
#include <Luce/Configuration/Platform/Linux.hh>
#elif defined(__unix__) || defined(__unix)
#include <Luce/Configuration/Platform/Unix.hh>
#else
#error An unsupported platform.
#endif

#if (__clang_major__ == 3 && __clang_minor__ >= 1) || __clang_major__ >= 4 // clang 3.1
#define LUCE_CONFIG_CONSTEXPR LUCE_CONFIG_YES
#else
#define LUCE_CONFIG_CONSTEXPR LUCE_CONFIG_NO
#endif

#if (__clang_major__ == 3 && __clang_minor__ >= 0) || __clang_major__ >= 4 // clang 3.0
#define LUCE_CONFIG_NOEXCEPT LUCE_CONFIG_YES
#else
#define LUCE_CONFIG_NOEXCEPT LUCE_CONFIG_NO
#endif

#if (__clang_major__ == 2 && __clang_minor__ >= 9) || __clang_major__ >= 3 // clang 2.9
#define LUCE_CONFIG_FINAL LUCE_CONFIG_YES
#define LUCE_CONFIG_OVERRIDE LUCE_CONFIG_YES
#define LUCE_CONFIG_STATICASSERT LUCE_CONFIG_YES
#else
#define LUCE_CONFIG_FINAL LUCE_CONFIG_NO
#define LUCE_CONFIG_OVERRIDE LUCE_CONFIG_NO
#define LUCE_CONFIG_STATICASSERT LUCE_CONFIG_NO
#endif

#endif