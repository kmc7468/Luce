#include <CLuce.h>

#include <stdio.h>

int main()
{
	Luce_Component_Point2 p = Luce_Component_Point2_Create();
	Luce_Component_Point2_Destroy(&p);

	return 0;
}