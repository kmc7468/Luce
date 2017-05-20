#include <Luce.hh>
using namespace Luce;

#include <iostream>

int main()
{
	constexpr Size s = { 4, 5 };

	constexpr auto w = s.GetWidth();
	constexpr auto h = s.GetHeight();

	return 0;
}