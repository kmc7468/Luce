#include <Luce.hh>
using namespace Luce;

#include <chrono>
#include <cstdio>
#include <iostream>

int main()
{
	UInt32 arr[5] = { 2, 3, 4, 5, 6 };

	auto a = IsSortedUntil(arr, arr + 5);
	auto b = IsSorted(arr, arr + 5);

	return 0;
}