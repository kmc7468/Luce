#include <Luce/System/UnitType.hh>

#include <Luce/Exception/InvalidValue.hh>

namespace Luce
{
	namespace System
	{
#if !LUCE_MACRO_SUPPORTED_CONSTEXPR
		UnitType::UnitType() LUCE_MACRO_NOEXCEPT
		{}
		UnitType::UnitType(const Enumeration& unit_type) LUCE_MACRO_NOEXCEPT
		{
			Value_ = unit_type;
		}
		UnitType::UnitType(const UnitType& unit_type) LUCE_MACRO_NOEXCEPT
		{
			Value_ = unit_type.Value_;
		}
#if LUCE_MACRO_SUPPORTED_RVALUE_REF
		UnitType::UnitType(UnitType&& unit_type) LUCE_MACRO_NOEXCEPT
		{
			Value_ = std::move(unit_type.Value_);
		}
#endif
#endif

		UnitType& UnitType::operator=(const UnitType& unit_type) LUCE_MACRO_NOEXCEPT
		{
			Value_ = unit_type.Value_;
			return *this;
		}
#if LUCE_MACRO_SUPPORTED_RVALUE_REF
		UnitType& UnitType::operator=(UnitType&& unit_type) LUCE_MACRO_NOEXCEPT
		{
			Value_ = std::move(unit_type.Value_);
			return *this;
		}
#endif

#if !LUCE_MACRO_SUPPORTED_CONSTEXPR
		bool UnitType::operator==(const UnitType& unit_type) const LUCE_MACRO_NOEXCEPT
		{
			return Value_ == unit_type.Value_;
		}
		bool UnitType::operator!=(const UnitType& unit_type) const LUCE_MACRO_NOEXCEPT
		{
			return Value_ != unit_type.Value_;
		}

		const char* const UnitType::ToString() const
		{
			return ToString_(0);
		}
		const char* const UnitType::ToString_(std::size_t index) const
		{
			if (index >= sizeof(Enum_Item_) / sizeof(Enumeration))
				throw InvalidValue(__LINE__, __FILE__, __FUNCTION__);

			return Value_ == Enum_Index_[index] ? Enum_String_[index] :
				ToString_(index + 1);
		}
		UnitType UnitType::FromString(const char* const str)
		{
			return FromString_(str, 0);
		}
		UnitType UnitType::FromString_(const char* const str, std::size_t index)
		{
			if (index >= sizeof(Enum_Item_) / sizeof(Enumeration))
				throw InvalidValue(__LINE__, __FILE__, __FUNCTION__);

			return strcmp(str, Enum_String_[index]) == 0 ?
				Enum_Item_[index] : FromString_(str, index + 1);
		}

		const char* const UnitType::Enum_String_[] = { "Cpu", "Gpu" };
		const UnitType::Enumeration UnitType::Enum_Item_[] = { Cpu, Gpu };
		const std::size_t UnitType::Enum_Index_[] = { 0, 1 };
#endif
	}
}