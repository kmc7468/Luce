#include <Luce/Text/EncodingRef.hh>

#include <cstddef>

namespace Luce
{
	namespace Text
	{
		EncodingRef::EncodingRef() LUCE_MACRO_NOEXCEPT
		{
			Value_ = NULL;
		}
		EncodingRef::EncodingRef(const Encoding& encoding) LUCE_MACRO_NOEXCEPT
		{
			Value_ = &encoding;
		}
		EncodingRef::EncodingRef(const Encoding* const encoding) LUCE_MACRO_NOEXCEPT
		{
			Value_ = encoding;
		}
		EncodingRef::EncodingRef(const EncodingRef& encoding) LUCE_MACRO_NOEXCEPT
		{
			Value_ = encoding.Value_;
		}
	}
}