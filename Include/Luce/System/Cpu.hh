#ifndef LUCE_HEADER_SYSTEM_CPU_HH
#define LUCE_HEADER_SYSTEM_CPU_HH
#include <Luce/Configuration.hh>

#include <Luce/System/Unit.hh>

#include <string>

namespace Luce
{
	namespace System
	{
		class UnitType;

		class Cpu : public Unit
		{
		public:
			Cpu(const Cpu& unit);
#if LUCE_MACRO_SUPPORTED_RVALUE_REF
			Cpu(Cpu&& unit);
#endif

		public:
			virtual UnitType GetUnitType() const LUCE_MACRO_NOEXCEPT LUCE_MACRO_OVERRIDE;
		};
	}
}

#endif