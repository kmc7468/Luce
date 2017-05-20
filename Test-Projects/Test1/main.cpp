#include <Luce.hh>
using namespace Luce;

#include <iostream>

int main()
{
	constexpr Point2 s = { 4, 5 };

	constexpr auto x = s.GetX();
	constexpr auto y = s.GetY();

	Point2 p;
	p.SetX(0);
	p.SetY(1);

	return 0;
}