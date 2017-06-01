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
#endif

		Time& Time::operator=(const Time& time)
		{
			Data_ = time.Data_;
			return *this;
		}
#if !LUCE_MACRO_SUPPORTED_CONSTEXPR
		bool Time::operator==(const Time& time) const LUCE_MACRO_NOEXCEPT
		{
			return Data_ == time.Data_;
		}
		bool Time::operator!=(const Time& time) const LUCE_MACRO_NOEXCEPT
		{
			return Data_ != time.Data_;
		}
		bool Time::operator>(const Time& time) const LUCE_MACRO_NOEXCEPT
		{
			return Data_ > time.Data_;
		}
		bool Time::operator>=(const Time& time) const LUCE_MACRO_NOEXCEPT
		{
			return Data_ >= time.Data_;
		}
		bool Time::operator<(const Time& time) const LUCE_MACRO_NOEXCEPT
		{
			return Data_ < time.Data_;
		}
		bool Time::operator<=(const Time& time) const LUCE_MACRO_NOEXCEPT
		{
			return Data_ <= time.Data_;
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

#if !LUCE_MACRO_SUPPORTED_CONSTEXPR
		Utility::Int64 Time::GetHour() const LUCE_MACRO_NOEXCEPT
		{
			return Data_ / Hour().Data_;
		}
		Utility::Int64 Time::GetMinute() const LUCE_MACRO_NOEXCEPT
		{
			return (Data_ - GetHour() *	Hour().Data_) / Minute().Data_;
		}
		Utility::Int64 Time::GetSecond() const LUCE_MACRO_NOEXCEPT
		{
			return (Data_ - GetHour() * Hour().Data_ -
					GetMinute() * Minute().Data_) / Second().Data_;
		}
		Utility::Int64 Time::GetMillisecond() const LUCE_MACRO_NOEXCEPT
		{
			return (Data_ - GetHour() * Hour().Data_ -
					GetMinute() * Minute().Data_ -
					GetSecond() * Second().Data_) / Millisecond().Data_;
		}
		Utility::Int64 Time::GetMicrosecond() const LUCE_MACRO_NOEXCEPT
		{
			return (Data_ - GetHour() * Hour().Data_ -
					GetMinute() * Minute().Data_ -
					GetSecond() * Second().Data_ -
					GetMillisecond() * Millisecond().Data_) / Microsecond().Data_;
		}
		Utility::Int64 Time::GetNanosecond() const LUCE_MACRO_NOEXCEPT
		{
			return (Data_ - GetHour() * Hour().Data_ -
					GetMinute() * Minute().Data_ -
					GetSecond() * Second().Data_ -
					GetMillisecond() * Millisecond().Data_ -
					GetMicrosecond() * Microsecond().Data_) / Nanosecond().Data_;
		}

		int Time::GetHourInt() const LUCE_MACRO_NOEXCEPT
		{
			return static_cast<int>(GetHour());
		}
		int Time::GetMinuteInt() const LUCE_MACRO_NOEXCEPT
		{
			return static_cast<int>(GetMinute());
		}
		int Time::GetSecondInt() const LUCE_MACRO_NOEXCEPT
		{
			return static_cast<int>(GetSecond());
		}
		int Time::GetMillisecondInt() const LUCE_MACRO_NOEXCEPT
		{
			return static_cast<int>(GetMillisecond());
		}
		int Time::GetMicrosecondInt() const LUCE_MACRO_NOEXCEPT
		{
			return static_cast<int>(GetMicrosecond());
		}
		int Time::GetNanosecondInt() const LUCE_MACRO_NOEXCEPT
		{
			return static_cast<int>(GetNanosecond());
		}

		Utility::Int64 Time::GetByHour() const LUCE_MACRO_NOEXCEPT
		{
			return Data_ / Hour().Data_;
		}
		Utility::Int64 Time::GetByMinute() const LUCE_MACRO_NOEXCEPT
		{
			return Data_ / Minute().Data_;
		}
		Utility::Int64 Time::GetBySecond() const LUCE_MACRO_NOEXCEPT
		{
			return Data_ / Second().Data_;
		}
		Utility::Int64 Time::GetByMillisecond() const LUCE_MACRO_NOEXCEPT
		{
			return Data_ / Millisecond().Data_;
		}
		Utility::Int64 Time::GetByMicrosecond() const LUCE_MACRO_NOEXCEPT
		{
			return Data_ / Microsecond().Data_;
		}
		Utility::Int64 Time::GetByNanosecond() const LUCE_MACRO_NOEXCEPT
		{
			return Data_;
		}
#endif
	}
}