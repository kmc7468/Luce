#include <Luce.hh>
using namespace Luce;

#include <cstdio>
#include <iostream>

int main()
{
	int i = 0, j = 0;
	LUCE_MACRO_DO(0)
	{
		LUCE_MACRO_DO(1)
		{
			std::printf("%d %d\n", i, j);
			++j;
		}
		LUCE_MACRO_END_DO(1, j <= 9);
		++i;
		j = 0;
	}
	LUCE_MACRO_END_DO(0, i <= 9);

	return 0;
}