#ifndef LUCE_HEADER_COMPONENT_DETAIL_DATE_HH
#define LUCE_HEADER_COMPONENT_DETAIL_DATE_HH

namespace Luce
{
	namespace Component
	{
#if LUCE_MACRO_SUPPORTED_CONSTEXPR
		LUCE_MACRO_CONSTEXPR Date::Date()
			: Data_(0)
		{}
		LUCE_MACRO_CONSTEXPR Date::Date(const Date& date)
			: Data_(date.Data_)
		{}
#endif
	}
}

#endif