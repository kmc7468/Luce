#include <Luce.hh>
using namespace Luce;

#include <iostream>

int main()
{
	constexpr Endian e = Endian::Little;
	constexpr const char* const es = e.ToString();
	constexpr Endian e2 = Endian::FromString("None");

	return 0;
}