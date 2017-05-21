#include <Luce.hh>
using namespace Luce;

#include <iostream>

int main()
{
	constexpr Size2 s = { 4, 5 };

	constexpr auto w = s.GetWidth();
	constexpr auto h = s.GetWidth();
	constexpr auto a = s.Area();

	return 0;
}