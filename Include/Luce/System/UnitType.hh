#ifndef LUCE_HEADER_SYSTEM_UNITTYPE_HH
#define LUCE_HEADER_SYSTEM_UNITTYPE_HH
#include <Luce/Configuration.hh>

#include <cstddef>

namespace Luce
{
	namespace System
	{
		class UnitType LUCE_MACRO_FINAL
		{
			LUCE_MACRO_CANNOT_PARENT_CONSTEXPR(Endian)

		public:
			enum Enumeration
			{
				Cpu,
				Gpu,
			};

		public:
			LUCE_MACRO_CONSTEXPR UnitType();
			LUCE_MACRO_CONSTEXPR UnitType(const Enumeration& unit_type);
			LUCE_MACRO_CONSTEXPR UnitType(const UnitType& unit_type);
#if LUCE_MACRO_SUPPORTED_RVALUE_REF
			LUCE_MACRO_CONSTEXPR UnitType(UnitType&& unit_type) LUCE_MACRO_NOEXCEPT;
#endif

		public:
			UnitType& operator=(const UnitType& unit_type);
#if LUCE_MACRO_SUPPORTED_RVALUE_REF
			UnitType& operator=(UnitType&& unit_type) LUCE_MACRO_NOEXCEPT;
#endif
			LUCE_MACRO_CONSTEXPR
				bool operator==(const UnitType& unit_type) const LUCE_MACRO_NOEXCEPT;
			LUCE_MACRO_CONSTEXPR
				bool operator!=(const UnitType& unit_type) const LUCE_MACRO_NOEXCEPT;

		public:
			LUCE_MACRO_CONSTEXPR static UnitType FromString(const char* const str);

		private:
			LUCE_MACRO_CONSTEXPR static UnitType FromString_(const char* const str,
														   std::size_t index);
#if LUCE_MACRO_SUPPORTED_CONSTEXPR
			LUCE_MACRO_CONSTEXPR static bool StrCmp_(const char* lhs, const char* rhs);
#endif

		public:
			LUCE_MACRO_CONSTEXPR const char* const ToString() const;

		private:
			LUCE_MACRO_CONSTEXPR const char* const ToString_(std::size_t index) const;

		private:
			LUCE_MACRO_CONSTEXPR static const char* const Enum_String_[2]
#if LUCE_MACRO_SUPPORTED_CONSTEXPR
				= { "Cpu", "Gpu" }
#endif
			;
			LUCE_MACRO_CONSTEXPR static const UnitType::Enumeration Enum_Item_[2]
#if LUCE_MACRO_SUPPORTED_CONSTEXPR
				= { Cpu, Gpu }
#endif
			;
			LUCE_MACRO_CONSTEXPR static const std::size_t Enum_Index_[3]
#if LUCE_MACRO_SUPPORTED_CONSTEXPR
				= { 0, 1 }
#endif
			;

		private:
			Enumeration Value_;
		};
	}
}

#include <Luce/Internal/System/UnitType_.hh>
#endif