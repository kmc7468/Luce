#include <Luce.hh>
using namespace Luce;

#include <iostream>

int main()
{
	Text::EncodingRef r = NULL;

	if (!r)
	{
		std::cout << "NULL\n";
	}
	else
	{
		std::cout << "Not NULL\n";
	}

	return 0;
}