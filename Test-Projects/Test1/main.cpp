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

	std::printf("%d�� = %d�� = %lld�и��� = %lld����ũ���� = %lld������\n",
				m.GetByMinuteInt(), m.GetBySecondInt(),
				m.GetByMillisecond(), m.GetByMicrosecond(),
				m.GetByNanosecond());

	return 0;
}