#include <Luce.hh>
using namespace Luce;

#include <iostream>

int main()
{
	constexpr bool val = IsOriginalType<__int32>::Value;

	return 0;
}