#include <Luce.hh>
using namespace Luce;

#include <iostream>

int main()
{
	constexpr bool v = TypeEqual<int, bool>::Value;

	return 0;
}