#ifndef LUCE_HEADER_COMPONENT_TIME_HH
#define LUCE_HEADER_COMPONENT_TIME_HH
#include <Luce/Configuration.hh>

#include <Luce/Utility/Integer.hh>

namespace Luce
{
	namespace Component
	{
		class LUCE_MACRO_EXPORT Time LUCE_MACRO_FINAL
		{
			LUCE_MACRO_CANNOT_PARENT_CONSTEXPR(Time)

		public:
			LUCE_MACRO_CONSTEXPR Time();
			LUCE_MACRO_CONSTEXPR Time(const Time& time);

		private:
			LUCE_MACRO_CONSTEXPR Time(const Utility::Int64& data) LUCE_MACRO_NOEXCEPT;

		public:
			LUCE_MACRO_CONSTEXPR static Time Hour() LUCE_MACRO_NOEXCEPT;
			LUCE_MACRO_CONSTEXPR static Time Minute() LUCE_MACRO_NOEXCEPT;
			LUCE_MACRO_CONSTEXPR static Time Second() LUCE_MACRO_NOEXCEPT;
			LUCE_MACRO_CONSTEXPR static Time Millisecond() LUCE_MACRO_NOEXCEPT;
			LUCE_MACRO_CONSTEXPR static Time Microsecond() LUCE_MACRO_NOEXCEPT;
			LUCE_MACRO_CONSTEXPR static Time Nanosecond() LUCE_MACRO_NOEXCEPT;
			static Time LocalTime() LUCE_MACRO_NOEXCEPT;

		public:
			Time& operator=(const Time& time);
			LUCE_MACRO_CONSTEXPR bool operator==(const Time& time) const LUCE_MACRO_NOEXCEPT;
			LUCE_MACRO_CONSTEXPR bool operator!=(const Time& time) const LUCE_MACRO_NOEXCEPT;
			LUCE_MACRO_CONSTEXPR bool operator>(const Time& time) const LUCE_MACRO_NOEXCEPT;
			LUCE_MACRO_CONSTEXPR bool operator>=(const Time& time) const LUCE_MACRO_NOEXCEPT;
			LUCE_MACRO_CONSTEXPR bool operator<(const Time& time) const LUCE_MACRO_NOEXCEPT;
			LUCE_MACRO_CONSTEXPR bool operator<=(const Time& time) const LUCE_MACRO_NOEXCEPT;

		public:
			LUCE_MACRO_CONSTEXPR Utility::Int64 GetHour() const LUCE_MACRO_NOEXCEPT;
			LUCE_MACRO_CONSTEXPR Utility::Int64 GetMinute() const LUCE_MACRO_NOEXCEPT;
			LUCE_MACRO_CONSTEXPR Utility::Int64 GetSecond() const LUCE_MACRO_NOEXCEPT;
			LUCE_MACRO_CONSTEXPR Utility::Int64 GetMillisecond() const LUCE_MACRO_NOEXCEPT;
			LUCE_MACRO_CONSTEXPR Utility::Int64 GetMicrosecond() const LUCE_MACRO_NOEXCEPT;
			LUCE_MACRO_CONSTEXPR Utility::Int64 GetNanosecond() const LUCE_MACRO_NOEXCEPT;

			LUCE_MACRO_CONSTEXPR int GetHourInt() const LUCE_MACRO_NOEXCEPT;
			LUCE_MACRO_CONSTEXPR int GetMinuteInt() const LUCE_MACRO_NOEXCEPT;
			LUCE_MACRO_CONSTEXPR int GetSecondInt() const LUCE_MACRO_NOEXCEPT;
			LUCE_MACRO_CONSTEXPR int GetMillisecondInt() const LUCE_MACRO_NOEXCEPT;
			LUCE_MACRO_CONSTEXPR int GetMicrosecondInt() const LUCE_MACRO_NOEXCEPT;
			LUCE_MACRO_CONSTEXPR int GetNanosecondInt() const LUCE_MACRO_NOEXCEPT;

			LUCE_MACRO_CONSTEXPR Utility::Int64 GetByHour() const LUCE_MACRO_NOEXCEPT;
			LUCE_MACRO_CONSTEXPR Utility::Int64 GetByMinute() const LUCE_MACRO_NOEXCEPT;
			LUCE_MACRO_CONSTEXPR Utility::Int64 GetBySecond() const LUCE_MACRO_NOEXCEPT;
			LUCE_MACRO_CONSTEXPR Utility::Int64 GetByMillisecond() const LUCE_MACRO_NOEXCEPT;
			LUCE_MACRO_CONSTEXPR Utility::Int64 GetByMicrosecond() const LUCE_MACRO_NOEXCEPT;
			LUCE_MACRO_CONSTEXPR Utility::Int64 GetByNanosecond() const LUCE_MACRO_NOEXCEPT;

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