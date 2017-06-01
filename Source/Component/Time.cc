#include <Luce/Component/Time.hh>

#include <ctime>

namespace Luce
{
	namespace Component
	{
#if !LUCE_MACRO_SUPPORTED_CONSTEXPR
		Time::Time()
		{
			Data_ = 0;
		}
		Time::Time(const Time& time)
		{
			Data_ = time.Data_;
		}

		Time::Time(const Utility::Int64& data) LUCE_MACRO_NOEXCEPT
		{
			Data_ = data;
		}

		Time Time::Week() LUCE_MACRO_NOEXCEPT
		{
			return 1000 * 1000 * 1000 * 60 * 60 * 24 * 7;
		}
		Time Time::Day() LUCE_MACRO_NOEXCEPT
		{
			return 1000 * 1000 * 1000 * 60 * 60 * 24;
		}
		Time Time::Hour() LUCE_MACRO_NOEXCEPT
		{
			return 1000 * 1000 * 1000 * 60 * 60;
		}
		Time Time::Minute() LUCE_MACRO_NOEXCEPT
		{
			return 1000 * 1000 * 1000 * 60;
		}
		Time Time::Second() LUCE_MACRO_NOEXCEPT
		{
			return 1000 * 1000 * 1000;
		}
		Time Time::Millisecond() LUCE_MACRO_NOEXCEPT
		{
			return 1000 * 1000;
		}
		Time Time::Microsecond() LUCE_MACRO_NOEXCEPT
		{
			return 1000;
		}
		Time Time::Nanosecond() LUCE_MACRO_NOEXCEPT
		{
			return 1;
		}
#endif

		Time Time::LocalTime() LUCE_MACRO_NOEXCEPT
		{
			std::time_t time;
			std::tm* pt;

			std::time(&time);
			pt = std::localtime(&time);

			Time result;
			result.Data_ += pt->tm_sec * Second().Data_;
			result.Data_ += pt->tm_min * Minute().Data_;
			result.Data_ += pt->tm_hour * Hour().Data_;

			return result;
		}
	}
}