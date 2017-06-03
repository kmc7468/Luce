#include <Luce.hh>
using namespace Luce;

#include <chrono>
#include <cstdio>
#include <iostream>
#include <thread>

int main()
{
	typedef Numberic::Ratio<1, 3> v;

	std::printf("%f", v::Real);

	return 0;
}