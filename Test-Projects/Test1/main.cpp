#include <Luce.hh>
using namespace Luce;

#include <cstdio>
#include <iostream>

int main()
{
	Time t = Time::LocalTime();

	std::printf("%d�� %d�� %d��\n", t.GetHourInt(), t.GetMinuteInt(), t.GetSecondInt());
	std::printf("0�÷κ��� %lld�� ����. (= %lld�� = %lld�и���)\n",
				t.GetByMinute(), t.GetBySecond(), t.GetByMillisecond());

	return 0;
}