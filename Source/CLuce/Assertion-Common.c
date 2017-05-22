#include <CLuce/Configuration.h>

#include <limits.h>

CLUCE_MACRO_STATIC_ASSERT((sizeof(void*) * CHAR_BIT) >= 16,
						  Supports_only_16_bit_and_higher_platforms);

CLUCE_MACRO_STATIC_ASSERT(CHAR_BIT == 8,
						  Only_platforms_with_8_bits_per_byte_are_supported);