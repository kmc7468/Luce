#include <Luce.hh>
using namespace Luce;

#include <chrono>
#include <cstdio>
#include <iostream>
#include <thread>

int main()
{
	Time t = Time::LocalTime();
	Time m = Component::Minute(t.GetMinute());

	std::printf("%d분 = %d초 = %lld밀리초 = %lld마이크로초 = %lld나노초\n",
				m.GetByMinuteInt(), m.GetBySecondInt(),
				m.GetByMillisecond(), m.GetByMicrosecond(),
				m.GetByNanosecond());

	return 0;
}