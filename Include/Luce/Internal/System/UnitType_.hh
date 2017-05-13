#ifndef LUCE_HEADER_INTERNAL_SYSTEM_UNITTYPE__HH
#define LUCE_HEADER_INTERNAL_SYSTEM_UNITTYPE__HH

#if LUCE_MACRO_SUPPORTED_RVALUE_REF
#include <utility>
#endif

namespace Luce
{
	namespace System
	{
#if LUCE_MACRO_SUPPORTED_CONSTEXPR
		LUCE_MACRO_CONSTEXPR UnitType::UnitType() LUCE_MACRO_NOEXCEPT
			: Value_(static_cast<Enumeration>(0))
		{}
		LUCE_MACRO_CONSTEXPR UnitType::UnitType(const Enumeration& unit_type) LUCE_MACRO_NOEXCEPT
			: Value_(unit_type)
		{}
		LUCE_MACRO_CONSTEXPR UnitType::UnitType(const UnitType& unit_type) LUCE_MACRO_NOEXCEPT
			: Value_(unit_type.Value_)
		{}
#if LUCE_MACRO_SUPPORTED_RVALUE_REF
		LUCE_MACRO_CONSTEXPR UnitType::UnitType(UnitType&& unit_type) LUCE_MACRO_NOEXCEPT
			: Value_(std::move(unit_type.Value_))
		{}
#endif

		LUCE_MACRO_CONSTEXPR
			bool UnitType::operator==(const UnitType& unit_type) const LUCE_MACRO_NOEXCEPT
		{
			return Value_ == unit_type.Value_;
		}
		LUCE_MACRO_CONSTEXPR
			bool UnitType::operator!=(const UnitType& unit_type) const LUCE_MACRO_NOEXCEPT
		{
			return Value_ != unit_type.Value_;
		}

		LUCE_MACRO_CONSTEXPR UnitType UnitType::FromString(const char* const str)
		{
			return FromString_(str, 0);
		}
		LUCE_MACRO_CONSTEXPR UnitType UnitType::FromString_(const char* const str,
														std::size_t index)
		{
			return StrCmp_(str, Enum_String_[index]) ?
				Enum_Item_[index] : FromString_(str, index + 1);
		}
		LUCE_MACRO_CONSTEXPR bool UnitType::StrCmp_(const char* lhs, const char* rhs)
		{
			return *lhs == *rhs && (*lhs == '\0' || StrCmp_(lhs + 1, rhs + 1));
		}

		LUCE_MACRO_CONSTEXPR const char* const UnitType::ToString() const
		{
			return ToString_(0);
		}
		LUCE_MACRO_CONSTEXPR
			const char* const UnitType::ToString_(std::size_t index) const
		{
			return Value_ == Enum_Index_[index] ? Enum_String_[index] :
				ToString_(index + 1);
		}
#endif
	}
}

#endif