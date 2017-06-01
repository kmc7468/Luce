#ifndef LUCE_HEADER_COMPONENT_DETAIL_TIME_HH
#define LUCE_HEADER_COMPONENT_DETAIL_TIME_HH

namespace Luce
{
	namespace Component
	{
#if LUCE_MACRO_SUPPORTED_CONSTEXPR
		LUCE_MACRO_CONSTEXPR Time::Time()
			: Data_(0)
		{}
		LUCE_MACRO_CONSTEXPR Time::Time(const Time& time)
			: Data_(time.Data_)
		{}

		LUCE_MACRO_CONSTEXPR Time::Time(const Utility::Int64& data) LUCE_MACRO_NOEXCEPT
			: Data_(data)
		{}

		LUCE_MACRO_CONSTEXPR Time Time::Week() LUCE_MACRO_NOEXCEPT
		{
			return 1000LL * 1000 * 1000 * 60 * 60 * 24 * 7;
		}
		LUCE_MACRO_CONSTEXPR Time Time::Day() LUCE_MACRO_NOEXCEPT
		{
			return 1000LL * 1000 * 1000 * 60 * 60 * 24;
		}
		LUCE_MACRO_CONSTEXPR Time Time::Hour() LUCE_MACRO_NOEXCEPT
		{
			return 1000LL * 1000 * 1000 * 60 * 60;
		}
		LUCE_MACRO_CONSTEXPR Time Time::Minute() LUCE_MACRO_NOEXCEPT
		{
			return 1000LL * 1000 * 1000 * 60;
		}
		LUCE_MACRO_CONSTEXPR Time Time::Second() LUCE_MACRO_NOEXCEPT
		{
			return 1000 * 1000 * 1000;
		}
		LUCE_MACRO_CONSTEXPR Time Time::Millisecond() LUCE_MACRO_NOEXCEPT
		{
			return 1000 * 1000;
		}
		LUCE_MACRO_CONSTEXPR Time Time::Microsecond() LUCE_MACRO_NOEXCEPT
		{
			return 1000;
		}
		LUCE_MACRO_CONSTEXPR Time Time::Nanosecond() LUCE_MACRO_NOEXCEPT
		{
			return 1;
		}
#endif
	}
}

#endif