#include <Luce.hh>
using namespace Luce;

#include <cstdio>
#include <iostream>

int main()
{
	Time t = Time::LocalTime();

	std::printf("%d시 %d분 %d초\n", t.GetHourInt(), t.GetMinuteInt(), t.GetSecondInt());
	std::printf("0시로부터 %lld분 지남. (= %lld초 = %lld밀리초)\n",
				t.GetByMinute(), t.GetBySecond(), t.GetByMillisecond());

	return 0;
}