#include <Luce.hh>
using namespace Luce;

#include <chrono>
#include <cstdio>
#include <iostream>
#include <thread>
#include <climits>

enum a
{
	v = LLONG_MAX
};

int main()
{
	typedef Numberic::Ratio<1, 3> v;

	std::printf("%f\n", v::Real);

	typedef Numberic::RatioDiv<Ratio<3, 4>, Ratio<3, 4>>::Type t;

	std::printf("3/4 / 3/4 = %d/%d\n", t::Numerator, t::Denominator);

	return 0;
}