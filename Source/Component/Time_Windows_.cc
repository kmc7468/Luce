#include <Luce/Component/Time.hh>

#if LUCE_MACRO_IS_WINDOWS
#include <Windows.h>

namespace Luce
{
	namespace Component
	{
		Time Time::LocalTimeMilli()
		{
			SYSTEMTIME time;
			GetSystemTime(&time);

			Time result;
			result.Data_ += time.wMilliseconds * Millisecond().Data_;
			result.Data_ += time.wSecond * Second().Data_;
			result.Data_ += time.wMinute * Minute().Data_;
			result.Data_ += time.wHour * Hour().Data_;

			return result;
		}
	}
}
#endif