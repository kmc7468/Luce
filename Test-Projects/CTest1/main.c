#include <CLuce.h>

#include <stdio.h>

int main()
{
	Luce_Endian e;
	Luce_Endian_SystemEndian(&e);

	printf("%d\n", e);

	return 0;
}