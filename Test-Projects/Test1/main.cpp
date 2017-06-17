#include <Luce.hh>
using namespace Luce;

#include <cstdio>
#include <iostream>

int main()
{	
	constexpr bool a = Math::IsPrime(1);
	bool b = Math::IsPrimeFast(1);

	std::cout << std::boolalpha << a << ", " << b << std::endl;

	return 0;
}