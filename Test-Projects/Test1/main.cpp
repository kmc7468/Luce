#include <Luce.hh>
using namespace Luce;

#include <cstdio>
#include <iostream>

int main()
{
	std::cout << LUCE_MACRO_REPEAT(5, "Hello, ") << std::endl;
	
	return 0;
}