#ifndef LUCE_HEADER_INTERNAL_MEMORY_ENDIAN__HH
#define LUCE_HEADER_INTERNAL_MEMORY_ENDIAN__HH

#include <cstddef>
#if LUCE_MACRO_SUPPORTED_RVALUE_REF
#include <utility>
#endif

namespace Luce
{
	namespace Memory
	{
#if LUCE_MACRO_SUPPORTED_CONSTEXPR
		LUCE_MACRO_CONSTEXPR Endian::Endian() LUCE_MACRO_NOEXCEPT
			: Value_(static_cast<Enumeration>(0))
		{}
		LUCE_MACRO_CONSTEXPR Endian::Endian(const Enumeration& endian) LUCE_MACRO_NOEXCEPT
			: Value_(endian)
		{}
		LUCE_MACRO_CONSTEXPR Endian::Endian(const Endian& endian) LUCE_MACRO_NOEXCEPT
			: Value_(endian.Value_)
		{}
#if LUCE_MACRO_SUPPORTED_RVALUE_REF
		LUCE_MACRO_CONSTEXPR Endian::Endian(Endian&& endian) LUCE_MACRO_NOEXCEPT
			: Value_(std::move(endian.Value_))
		{}
#endif

		LUCE_MACRO_CONSTEXPR
			bool Endian::operator==(const Endian& endian) const LUCE_MACRO_NOEXCEPT
		{
			return Value_ == endian.Value_;
		}
		LUCE_MACRO_CONSTEXPR
			bool Endian::operator!=(const Endian& endian) const LUCE_MACRO_NOEXCEPT
		{
			return Value_ != endian.Value_;
		}

		LUCE_MACRO_CONSTEXPR Endian Endian::FromString(const char* const str)
		{
			return FromString_(str, 0);
		}
		LUCE_MACRO_CONSTEXPR Endian Endian::FromString_(const char* const str,
													   std::size_t index)
		{
			return StrCmp_(str, Enum_String_[index]) ?
				Enum_Item_[index] : FromString_(str, index + 1);
		}
		LUCE_MACRO_CONSTEXPR bool Endian::StrCmp_(const char* lhs, const char* rhs)
		{
			return *lhs == *rhs && (*lhs == '\0' || StrCmp_(lhs + 1, rhs + 1));
		}

		LUCE_MACRO_CONSTEXPR const char* const Endian::ToString() const
		{
			return ToString_(0);
		}
		LUCE_MACRO_CONSTEXPR
			const char* const Endian::ToString_(std::size_t index) const
		{
			return Value_ == Enum_Index_[index] ? Enum_String_[index] :
				ToString_(index + 1);
		}
#endif
	}
}

#endif