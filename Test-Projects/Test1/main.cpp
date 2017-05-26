#include <Luce.hh>
using namespace Luce;

#include <cstdio>
#include <iostream>

int main()
{
	Math::Term t;

	std::cout << std::boolalpha << t.IsEmpty() << std::endl;
	std::cout << std::boolalpha << t.IsConstant() << std::endl;

	return 0;
}