#ifndef LUCE_HEADER_CONFIGURATION_FEATURE_STATICASSERT_HH
#define LUCE_HEADER_CONFIGURATION_FEATURE_STATICASSERT_HH
#include <Luce/Configuration/Basic-Value.hh>

#if LUCE_MACRO_IS_YES(LUCE_CONFIG_STATICASSERT) 
#define LUCE_MACRO_STATICASSERT(expression, message) static_assert((expression), message)
#else
#define LUCE_MACRO_STATICASSERT(expression, message) \
typedef unsigned char static_assert_##message[(expression) ? 1 : -1]
#endif

#endif