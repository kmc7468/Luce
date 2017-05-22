#include <Luce/Configuration.hh>

#include <climits>

#if LUCE_MACRO_IS_YES(LUCE_CONFIG_STATICASSERT)
LUCE_MACRO_STATIC_ASSERT((sizeof(void*) * CHAR_BIT) >= 16,
						 "Supports only 16-bit and higher platforms.");

LUCE_MACRO_STATIC_ASSERT(CHAR_BIT == 8,
						 "Only platforms with 8 bits per byte are supported.");
#else
LUCE_MACRO_STATIC_ASSERT((sizeof(void*) * CHAR_BIT) >= 16,
						 Supports_only_16_bit_and_higher_platforms);

LUCE_MACRO_STATIC_ASSERT(CHAR_BIT == 8,
						 Only_platforms_with_8_bits_per_byte_are_supported);
#endif