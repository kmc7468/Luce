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

	std::printf("%d�� = %d�� = %lld�и��� = %lld����ũ���� = %lld������\n",
				m.GetByMinuteInt(), m.GetBySecondInt(),
				m.GetByMillisecond(), m.GetByMicrosecond(),
				m.GetByNanosecond());

	Time t2 = Time::LocalTimeMilli();
	Time t3 = t2 - t1;

	auto v = t2.GetMillisecond();

	std::printf("%lld�и���\n", t3.GetByMillisecond());

	return 0;
}