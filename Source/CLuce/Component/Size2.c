#include <CLuce/Component/Size2.h>

CLUCE_MACRO_EXPORT Luce_Size2 Luce_Size2_Create()
{
	return Luce_Component_Size2_Create();
}
CLUCE_MACRO_EXPORT int Luce_Size2_Destory(Luce_Size2* size)
{
	return Luce_Component_Size2_Destory(size);
}
CLUCE_MACRO_EXPORT int Luce_Size2_Initializer(void* memory)
{
	return Luce_Component_Size2_Initializer(memory);
}
CLUCE_MACRO_EXPORT int Luce_Size2_Destoryer(void* memory)
{
	return Luce_Component_Size2_Destoryer(memory);
}

CLUCE_MACRO_EXPORT int Luce_Size2_Compare(Luce_Size2 lhs, Luce_Size2 rhs)
{
	return Luce_Component_Size2_Compare(lhs, rhs);
}
CLUCE_MACRO_EXPORT int Luce_Size2_Equal(Luce_Size2 lhs, Luce_Size2 rhs)
{
	return Luce_Component_Size2_Equal(lhs, rhs);
}
CLUCE_MACRO_EXPORT int Luce_Size2_Assign(Luce_Size2 lhs, Luce_Size2 rhs)
{
	return Luce_Component_Size2_Assign(lhs, rhs);
}

CLUCE_MACRO_EXPORT Luce_Utility_Int64 Luce_Size2_Area(Luce_Size2 size)
{
	return Luce_Component_Size2_Area(size);
}

CLUCE_MACRO_EXPORT Luce_Utility_Int32 Luce_Size2_GetWidth(Luce_Size2 size)
{
	return Luce_Component_Size2_GetWidth(size);
}
CLUCE_MACRO_EXPORT int Luce_Size2_SetWidth(Luce_Size2 size, Luce_Utility_Int32 width)
{
	return Luce_Component_Size2_SetWidth(size, width);
}
CLUCE_MACRO_EXPORT Luce_Utility_Int32 Luce_Size2_GetHeight(Luce_Size2 size)
{
	return Luce_Component_Size2_GetHeight(size);
}
CLUCE_MACRO_EXPORT int Luce_Size2_SetHeight(Luce_Size2 size, Luce_Utility_Int32 height)
{
	return Luce_Component_Size2_SetHeight(size, height);
}