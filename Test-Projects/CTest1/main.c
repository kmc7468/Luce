#include <CLuce.h>

#include <stdio.h>

int main()
{
	Luce_Point2F p = Luce_Point2F_Create();

	Luce_Point2F_SetX(p, 5.0);
	Luce_Point2F_SetY(p, 4.0);

	printf("X=%f Y=%f\n", Luce_Point2F_GetX(p), Luce_Point2F_GetY(p));

	Luce_Point2F_Destroy(&p);

	return 0;
}