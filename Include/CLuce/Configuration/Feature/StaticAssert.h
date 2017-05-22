#ifndef CLUCE_HEADER_CONFIGURATION_FEATURE_STATICASSERT_H
#define CLUCE_HEADER_CONFIGURATION_FEATURE_STATICASSERT_H

#define CLUCE_MACRO_STATIC_ASSERT(expression, message) \
typedef unsigned char static_assert_##message[(expression) ? 1 : -1]

#endif