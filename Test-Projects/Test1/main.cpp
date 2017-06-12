#include <Luce.hh>
using namespace Luce;

#include <cstdio>
#include <iostream>

LUCE_MACRO_PROPERTY(int, i,
					LUCE_MACRO_GET,
					LUCE_MACRO_SET);

int main()
{	
	std::cout << LUCE_MACRO_REPEAT(LUCE_MACRO_BOOL(5), "Hello, world!") << std::endl;

	std::cout << i << std::endl;
	i = 5;
	std::cout << i << std::endl;
	std::printf("%d", i);

	return 0;
}