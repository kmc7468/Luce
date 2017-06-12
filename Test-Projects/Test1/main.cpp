#include <Luce.hh>
using namespace Luce;

#include <cstdio>
#include <iostream>

int main()
{	
	std::cout << LUCE_MACRO_REPEAT(LUCE_MACRO_BOOL(5), "Hello, world!") << std::endl;

	return 0;
}