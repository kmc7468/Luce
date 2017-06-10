#include <Luce/Configuration.hh>

#include <climits>

LUCE_MACRO_STATIC_ASSERT((sizeof(void*) * CHAR_BIT) >= 16,
						 LUCE_LANG_STATICASSERT_16BIT);

LUCE_MACRO_STATIC_ASSERT(CHAR_BIT == 8,
						 LUCE_LANG_STATICASSERT_8BIT);