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

		LUCE_MACRO_CONSTEXPR bool Time::operator==(const Time& time) const LUCE_MACRO_NOEXCEPT
		{
			return Data_ == time.Data_;
		}
		LUCE_MACRO_CONSTEXPR bool Time::operator!=(const Time& time) const LUCE_MACRO_NOEXCEPT
		{
			return Data_ != time.Data_;
		}
		LUCE_MACRO_CONSTEXPR bool Time::operator>(const Time& time) const LUCE_MACRO_NOEXCEPT
		{
			return Data_ > time.Data_;
		}
		LUCE_MACRO_CONSTEXPR bool Time::operator>=(const Time& time) const LUCE_MACRO_NOEXCEPT
		{
			return Data_ >= time.Data_;
		}
		LUCE_MACRO_CONSTEXPR bool Time::operator<(const Time& time) const LUCE_MACRO_NOEXCEPT
		{
			return Data_ < time.Data_;
		}
		LUCE_MACRO_CONSTEXPR bool Time::operator<=(const Time& time) const LUCE_MACRO_NOEXCEPT
		{
			return Data_ <= time.Data_;
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

		LUCE_MACRO_CONSTEXPR Utility::Int64 Time::GetHour() const LUCE_MACRO_NOEXCEPT
		{
			return Data_ / Hour().Data_;
		}
		LUCE_MACRO_CONSTEXPR Utility::Int64 Time::GetMinute() const LUCE_MACRO_NOEXCEPT
		{
			return (Data_ - GetHour() *	Hour().Data_) / Minute().Data_;
		}
		LUCE_MACRO_CONSTEXPR Utility::Int64 Time::GetSecond() const LUCE_MACRO_NOEXCEPT
		{
			return (Data_ - GetHour() * Hour().Data_ -
					GetMinute() * Minute().Data_) / Second().Data_;
		}
		LUCE_MACRO_CONSTEXPR Utility::Int64 Time::GetMillisecond() const LUCE_MACRO_NOEXCEPT
		{
			return (Data_ - GetHour() * Hour().Data_ -
					GetMinute() * Minute().Data_ -
					GetSecond() * Second().Data_) / Millisecond().Data_;
		}
		LUCE_MACRO_CONSTEXPR Utility::Int64 Time::GetMicrosecond() const LUCE_MACRO_NOEXCEPT
		{
			return (Data_ - GetHour() * Hour().Data_ -
					GetMinute() * Minute().Data_ -
					GetSecond() * Second().Data_ -
					GetMillisecond() * Millisecond().Data_) / Microsecond().Data_;
		}
		LUCE_MACRO_CONSTEXPR Utility::Int64 Time::GetNanosecond() const LUCE_MACRO_NOEXCEPT
		{
			return (Data_ - GetHour() * Hour().Data_ -
					GetMinute() * Minute().Data_ -
					GetSecond() * Second().Data_ -
					GetMillisecond() * Millisecond().Data_ -
					GetMicrosecond() * Microsecond().Data_) / Nanosecond().Data_;
		}

		LUCE_MACRO_CONSTEXPR int Time::GetHourInt() const LUCE_MACRO_NOEXCEPT
		{
			return static_cast<int>(GetHour());
		}
		LUCE_MACRO_CONSTEXPR int Time::GetMinuteInt() const LUCE_MACRO_NOEXCEPT
		{
			return static_cast<int>(GetMinute());
		}
		LUCE_MACRO_CONSTEXPR int Time::GetSecondInt() const LUCE_MACRO_NOEXCEPT
		{
			return static_cast<int>(GetSecond());
		}
		LUCE_MACRO_CONSTEXPR int Time::GetMillisecondInt() const LUCE_MACRO_NOEXCEPT
		{
			return static_cast<int>(GetMillisecond());
		}
		LUCE_MACRO_CONSTEXPR int Time::GetMicrosecondInt() const LUCE_MACRO_NOEXCEPT
		{
			return static_cast<int>(GetMicrosecond());
		}
		LUCE_MACRO_CONSTEXPR int Time::GetNanosecondInt() const LUCE_MACRO_NOEXCEPT
		{
			return static_cast<int>(GetNanosecond());
		}

		LUCE_MACRO_CONSTEXPR Utility::Int64 Time::GetByHour() const LUCE_MACRO_NOEXCEPT
		{
			return Data_ / Hour().Data_;
		}
		LUCE_MACRO_CONSTEXPR Utility::Int64 Time::GetByMinute()
			const LUCE_MACRO_NOEXCEPT
		{
			return Data_ / Minute().Data_;
		}
		LUCE_MACRO_CONSTEXPR Utility::Int64 Time::GetBySecond()
			const LUCE_MACRO_NOEXCEPT
		{
			return Data_ / Second().Data_;
		}
		LUCE_MACRO_CONSTEXPR Utility::Int64 Time::GetByMillisecond()
			const LUCE_MACRO_NOEXCEPT
		{
			return Data_ / Millisecond().Data_;
		}
		LUCE_MACRO_CONSTEXPR Utility::Int64 Time::GetByMicrosecond()
			const LUCE_MACRO_NOEXCEPT
		{
			return Data_ / Microsecond().Data_;
		}
		LUCE_MACRO_CONSTEXPR Utility::Int64 Time::GetByNanosecond()
			const LUCE_MACRO_NOEXCEPT
		{
			return Data_;
		}
#endif
	}
}

#endif