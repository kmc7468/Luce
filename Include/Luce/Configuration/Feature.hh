#ifndef LUCE_HEADER_CONFIGURATION_FEATURE_HH
#define LUCE_HEADER_CONFIGURATION_FEATURE_HH
#include <Luce/Configuration/Compiler.hh>

#include <Luce/Configuration/Feature/Constexpr.hh>
#include <Luce/Configuration/Feature/Final.hh>
#include <Luce/Configuration/Feature/NoExcept.hh>
#include <Luce/Configuration/Feature/Override.hh>
#include <Luce/Configuration/Feature/StaticAssert.hh>

#define LUCE_MACRO_SUPPORTED_CONSTEXPR (LUCE_CONFIG_CONSTEXPR == LUCE_CONFIG_YES)
#define LUCE_MACRO_SUPPORTED_DELETE (LUCE_CONFIG_DELETE == LUCE_CONFIG_YES)
#define LUCE_MACRO_SUPPORTED_INITIALIZER_LIST (LUCE_CONFIG_INITIALIZER_LIST == LUCE_CONFIG_YES)
#define LUCE_MACRO_SUPPORTED_RVALUE_REF (LUCE_CONFIG_RLALUE_REFERENCE == LUCE_CONFIG_YES)

#endif