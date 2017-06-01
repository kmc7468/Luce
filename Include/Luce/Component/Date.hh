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

		public:
			Date& operator=(const Date& date);
#if LUCE_MACRO_SUPPORTED_RVALUE_REF
			Date& operator=(Date&& date) LUCE_MACRO_NOEXCEPT;
#endif
			LUCE_MACRO_CONSTEXPR bool operator==(const Date& date) const LUCE_MACRO_NOEXCEPT;
			LUCE_MACRO_CONSTEXPR bool operator!=(const Date& date) const LUCE_MACRO_NOEXCEPT;
			LUCE_MACRO_CONSTEXPR bool operator>(const Date& date) const LUCE_MACRO_NOEXCEPT;
			LUCE_MACRO_CONSTEXPR bool operator>=(const Date& date) const LUCE_MACRO_NOEXCEPT;
			LUCE_MACRO_CONSTEXPR bool operator<(const Date& date) const LUCE_MACRO_NOEXCEPT;
			LUCE_MACRO_CONSTEXPR bool operator<=(const Date& date) const LUCE_MACRO_NOEXCEPT;

		private:
			Utility::Int32 Data_;
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