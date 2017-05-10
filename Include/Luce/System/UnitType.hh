#ifndef LUCE_HEADER_SYSTEM_UNITTYPE_HH
#define LUCE_HEADER_SYSTEM_UNITTYPE_HH
#include <Luce/Configuration.hh>

#include <cstddef>

namespace Luce
{
	namespace System
	{
		class UnitType
		{
		public:
			enum Enumeration
			{
				Cpu,
				Gpu,
			};

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
		};
	}
}

#endif