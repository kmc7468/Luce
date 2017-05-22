#include <CLuce.h>

#include <stdio.h>

int main()
{
	Luce_Endian e;
	Luce_Endian_SystemEndian(&e);

	char c[10];
	Luce_Endian_ToString(&e, c);

	printf("%d %s\n", e, c);

	return 0;
}