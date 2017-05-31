#ifndef LUCE_HEADER_COMPONENT_DATE_HH
#define LUCE_HEADER_COMPONENT_DATE_HH
#include <Luce/Configuration.hh>

#include <Luce/Utility/Integer.hh>

namespace Luce
{
	namespace Component
	{
		class Date LUCE_MACRO_FINAL
		{
			LUCE_MACRO_CANNOT_PARENT_CONSTEXPR(Date)

		public:
			LUCE_MACRO_CONSTEXPR Date();
			LUCE_MACRO_CONSTEXPR Date(const Date& date);

		private:
			Utility::Int64 Data_;
		};
	}

	using Luce::Component::Date;
}

#include "Detail/Date.hh"
#if !defined(LUCE_MACRO_LINKING_COMPONENT) && LUCE_MACRO_IS_MSVC
#define LUCE_MACRO_LINKING_COMPONENT
#pragma comment(lib, "Luce-Component.lib")
#endif
#endif