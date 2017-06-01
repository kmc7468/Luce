#ifndef LUCE_HEADER_COMPONENT_TIME_HH
#define LUCE_HEADER_COMPONENT_TIME_HH
#include <Luce/Configuration.hh>

#include <Luce/Utility/Integer.hh>

namespace Luce
{
	namespace Component
	{
		class Time LUCE_MACRO_FINAL
		{
			LUCE_MACRO_CANNOT_PARENT_CONSTEXPR(Time)

		public:
			LUCE_MACRO_CONSTEXPR Time();
			LUCE_MACRO_CONSTEXPR Time(const Time& time);

		private:
			LUCE_MACRO_CONSTEXPR Time(const Utility::Int64& data) LUCE_MACRO_NOEXCEPT;

		public:
			LUCE_MACRO_CONSTEXPR static Time Week() LUCE_MACRO_NOEXCEPT;
			LUCE_MACRO_CONSTEXPR static Time Day() LUCE_MACRO_NOEXCEPT;
			LUCE_MACRO_CONSTEXPR static Time Hour() LUCE_MACRO_NOEXCEPT;
			LUCE_MACRO_CONSTEXPR static Time Minute() LUCE_MACRO_NOEXCEPT;
			LUCE_MACRO_CONSTEXPR static Time Second() LUCE_MACRO_NOEXCEPT;
			LUCE_MACRO_CONSTEXPR static Time Millisecond() LUCE_MACRO_NOEXCEPT;
			LUCE_MACRO_CONSTEXPR static Time Microsecond() LUCE_MACRO_NOEXCEPT;
			LUCE_MACRO_CONSTEXPR static Time Nanosecond() LUCE_MACRO_NOEXCEPT;

		private:
			Utility::Int64 Data_;
		};
	}

	using Luce::Component::Time;
}

#include "Detail/Time.hh"
#if !defined(LUCE_MACRO_LINKING_COMPONENT) && LUCE_MACRO_IS_MSVC
#define LUCE_MACRO_LINKING_COMPONENT
#pragma comment(lib, "Luce-Component.lib")
#endif
#endif