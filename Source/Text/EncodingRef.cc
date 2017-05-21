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
			Free_ = false;
		}
		EncodingRef::EncodingRef(const Encoding& encoding) LUCE_MACRO_NOEXCEPT
		{
			Value_ = &encoding;
			Free_ = false;
		}
		EncodingRef::EncodingRef(const Encoding* const encoding) LUCE_MACRO_NOEXCEPT
		{
			Value_ = encoding;
			Free_ = false;
		}
		EncodingRef::EncodingRef(const EncodingRef& encoding) LUCE_MACRO_NOEXCEPT
		{
			Value_ = encoding.Value_;
			Free_ = encoding.Free_;
		}
		EncodingRef::~EncodingRef()
		{
			delete Value_;
			Value_ = NULL;
		}

		EncodingRef::EncodingRef(const Encoding& encoding, bool free) LUCE_MACRO_NOEXCEPT
		{
			Value_ = &encoding;
			Free_ = free;
		}
		EncodingRef::EncodingRef(const Encoding* const encoding, bool free) LUCE_MACRO_NOEXCEPT
		{
			Value_ = encoding;
			Free_ = free;
		}

		const Encoding* EncodingRef::operator->() const
		{
			if (Value_ == NULL)
				throw Exception::AccessFailed(__LINE__, __FILE__, __FUNCTION__);

			return Value_;
		}
		EncodingRef::operator bool() const LUCE_MACRO_NOEXCEPT
		{
			return Value_ != NULL;
		}

		const Encoding* EncodingRef::Get() const LUCE_MACRO_NOEXCEPT
		{
			return Value_;
		}
		bool EncodingRef::IsNull() const LUCE_MACRO_NOEXCEPT
		{
			return Value_ == NULL;
		}
	}
}