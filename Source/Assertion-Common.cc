#include <Luce/Configuration.hh>

#include <climits>

LUCE_MACRO_STATIC_ASSERT((sizeof(void*) * CHAR_BIT) >= 16,
						 "Supports only 16-bit and higher platforms.");