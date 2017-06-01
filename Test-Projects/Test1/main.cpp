#include <Luce.hh>
using namespace Luce;

#include <cstdio>
#include <iostream>

int main()
{
	Time t = Time::LocalTime();

	std::printf("%dΩ√ %d∫– %d√ \n", t.GetHourInt(), t.GetMinuteInt(), t.GetSecondInt());

	return 0;
}