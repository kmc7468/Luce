#include <Luce.hh>
using namespace Luce;

#include <iostream>

int main()
{
	constexpr Size2 s = { 4, 5 };

	constexpr auto x = s.GetWidth();
	constexpr auto y = s.GetWidth();

	Size2 p;
	p.SetWidth(0);
	p.SetHeight(1);

	return 0;
}