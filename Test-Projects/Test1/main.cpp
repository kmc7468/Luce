#include <Luce.hh>
using namespace Luce;

#include <chrono>
#include <cstdio>
#include <iostream>

int main()
{	
	std::cout.sync_with_stdio(false);

	Well512 well;
	Well512_64 well64;
	
	std::chrono::system_clock::time_point a, b;
	std::chrono::duration<double> c;

	a = std::chrono::system_clock::now();
	std::cout << "Well512: " << std::endl;
	for (int i = 0; i < 10; ++i)
	{
		std::cout << well() << std::endl;
	}
	b = std::chrono::system_clock::now();
	c = b - a;
	std::cout << c.count() << "ÃÊ" << std::endl;

	a = std::chrono::system_clock::now();
	std::cout << std::endl << "Well512_64: " << std::endl;
	for (int i = 0; i < 10; ++i)
	{
		std::cout << well64() << std::endl;
	}
	b = std::chrono::system_clock::now();
	c = b - a;
	std::cout << c.count() << "ÃÊ" << std::endl;

	return 0;
}