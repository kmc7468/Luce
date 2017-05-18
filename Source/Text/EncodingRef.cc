#include <Luce/Text/EncodingRef.hh>

#include <Luce/Exception/AccessFailed.hh>

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

		const Encoding* EncodingRef::operator->() const
		{
			if (Value_ == NULL)
				throw Exception::AccessFailed(__LINE__, __FILE__, __FUNCTION__);

			return Value_;
		}

		const Encoding* EncodingRef::Get() const LUCE_MACRO_NOEXCEPT
		{
			return Value_;
		}
	}
}