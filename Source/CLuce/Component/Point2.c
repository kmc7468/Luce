#include <CLuce/Component/Point2.h>

CLUCE_MACRO_EXPORT Luce_Point2 Luce_Point2_Create()
{
	return Luce_Component_Point2_Create();
}
CLUCE_MACRO_EXPORT int Luce_Point2_Destroy(Luce_Point2* location)
{
	return Luce_Component_Point2_Destroy(location);
}
CLUCE_MACRO_EXPORT int Luce_Point2_Initializer(void* memory)
{
	return Luce_Component_Point2_Initializer(memory);
}
CLUCE_MACRO_EXPORT int Luce_Point2_Destroyer(void* memory)
{
	return Luce_Component_Point2_Destroyer(memory);
}

CLUCE_MACRO_EXPORT int Luce_Point2_Compare(Luce_Point2 lhs, Luce_Point2 rhs)
{
	return Luce_Component_Point2_Compare(lhs, rhs);
}
CLUCE_MACRO_EXPORT int Luce_Point2_Equal(Luce_Point2 lhs, Luce_Point2 rhs)
{
	return Luce_Component_Point2_Equal(lhs, rhs);
}

CLUCE_MACRO_EXPORT Luce_Utility_Int32 Luce_Point2_GetX(Luce_Point2 location)
{
	return Luce_Component_Point2_GetX(location);
}
CLUCE_MACRO_EXPORT int Luce_Point2_SetX(Luce_Point2 location, Luce_Utility_Int32 x)
{
	return Luce_Component_Point2_SetX(location, x);
}
CLUCE_MACRO_EXPORT Luce_Utility_Int32 Luce_Point2_GetY(Luce_Point2 location)
{
	return Luce_Component_Point2_GetY(location);
}
CLUCE_MACRO_EXPORT int Luce_Point2_SetY(Luce_Point2 location, Luce_Utility_Int32 y)
{
	return Luce_Component_Point2_SetY(location, y);
}