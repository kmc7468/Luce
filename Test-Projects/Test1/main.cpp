#include <Luce.hh>
using namespace Luce;

#include <cstdio>
#include <iostream>

int main()
{
	constexpr Numberic::UInt64 i;
	constexpr Numberic::UInt64 j = i;

	constexpr bool i_j = i == j;
	
	return 0;
}