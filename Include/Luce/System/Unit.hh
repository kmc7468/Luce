#ifndef LUCE_HEADER_SYSTEM_UNIT_HH
#define LUCE_HEADER_SYSTEM_UNIT_HH
#include <Luce/Configuration.hh>

namespace Luce
{
	namespace System
	{
		class UnitType;

		class Unit
		{
		public:
			virtual ~Unit();

		protected:
			Unit() LUCE_MACRO_NOEXCEPT;

		public:
			virtual UnitType GetUnitType() const = 0;
		};
	}
}

#endif