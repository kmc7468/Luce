#include <Luce.hh>
using namespace Luce;

#include <chrono>
#include <cstdio>
#include <iostream>
#include <thread>

int main()
{
	Time t = Time::LocalTime();
	Time t1 = Time::LocalTimeMilli();
	Time m = Component::Minute(t.GetMinute());

	std::printf("%d분 = %d초 = %lld밀리초 = %lld마이크로초 = %lld나노초\n",
				m.GetByMinuteInt(), m.GetBySecondInt(),
				m.GetByMillisecond(), m.GetByMicrosecond(),
				m.GetByNanosecond());

	Time t2 = Time::LocalTimeMilli();
	Time t3 = t2 - t1;

	auto v = t2.GetMillisecond();

	std::printf("%lld밀리초\n", t3.GetByMillisecond());

	return 0;
}