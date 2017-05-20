#ifndef LUCE_HEADER_SYSTEM_UNIT_HH
#define LUCE_HEADER_SYSTEM_UNIT_HH
#include <Luce/Configuration.hh>

#include <string>

namespace Luce
{
	namespace System
	{
		class UnitType;

		class LUCE_MACRO_EXPORT Unit
		{
		public:
			virtual ~Unit();

		protected:
			Unit() LUCE_MACRO_NOEXCEPT;

		public:
			virtual UnitType GetUnitType() const LUCE_MACRO_NOEXCEPT = 0;

			std::string Name() const;

		protected:
			std::string Name_;
		};
	}
}

#endif