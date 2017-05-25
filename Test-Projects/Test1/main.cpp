#include <Luce.hh>
using namespace Luce;

#include <cstdio>
#include <iostream>

int main()
{
	for (int i = 2; i <= 9; ++i)
	{
		for (int j = 1; j <= 9; ++j)
		{
			std::printf("%d * %d = %d\n", i, j, i * j);

			if (j == 5)
			{
				LUCE_MACRO_BREAK(1);
			}
		}
		LUCE_MACRO_ID(1)
	}
	LUCE_MACRO_ID(0)

	return 0;
}