#ifndef CLUCE_HEADER_COMPONENT_SIZE2_H
#define CLUCE_HEADER_COMPONENT_SIZE2_H
#include <CLuce/Configuration.h>

#include <CLuce/Utility/Integer.h>
#include <CLuce/Utility/Real.h>

#ifdef __cplusplus
#include <Luce/Component/Size2.hh>
typedef Luce::Component::Size2* Luce_Component_Size2;
typedef Luce::Component::Size2F* Luce_Component_Size2F;
#else
typedef struct Luce_Component_Size2* Luce_Component_Size2;
typedef struct Luce_Component_Size2F* Luce_Component_Size2F;
#endif

typedef Luce_Component_Size2 Luce_Size2;
typedef Luce_Component_Size2F Luce_Size2F;

// Size2

CLUCE_MACRO_CONNECT_BEGIN

extern const int Luce_Component_Size2_Size;

CLUCE_MACRO_EXPORT Luce_Component_Size2 Luce_Component_Size2_Create();
CLUCE_MACRO_EXPORT int Luce_Component_Size2_Destory(Luce_Component_Size2* size);
CLUCE_MACRO_EXPORT int Luce_Component_Size2_Initializer(void* memory);
CLUCE_MACRO_EXPORT int Luce_Component_Size2_Destoryer(void* memory);

CLUCE_MACRO_EXPORT int Luce_Component_Size2_Compare(Luce_Component_Size2 lhs,
													Luce_Component_Size2 rhs);
CLUCE_MACRO_EXPORT int Luce_Component_Size2_Equal(Luce_Component_Size2 lhs,
												  Luce_Component_Size2 rhs);
CLUCE_MACRO_EXPORT int Luce_Component_Size2_Assign(Luce_Component_Size2 lhs,
												   Luce_Component_Size2 rhs);

CLUCE_MACRO_EXPORT Luce_Utility_Int64 Luce_Component_Size2_Area(Luce_Component_Size2 size);

CLUCE_MACRO_EXPORT Luce_Utility_Int32
Luce_Component_Size2_GetWidth(Luce_Component_Size2 size);
CLUCE_MACRO_EXPORT int
Luce_Component_Size2_SetWidth(Luce_Component_Size2 size, Luce_Utility_Int32 width);
CLUCE_MACRO_EXPORT Luce_Utility_Int32
Luce_Component_Size2_GetHeight(Luce_Component_Size2 size);
CLUCE_MACRO_EXPORT int
Luce_Component_Size2_SetHeight(Luce_Component_Size2 size, Luce_Utility_Int32 height);

CLUCE_MACRO_CONNECT_END

CLUCE_MACRO_EXPORT Luce_Size2 Luce_Size2_Create();
CLUCE_MACRO_EXPORT int Luce_Size2_Destory(Luce_Size2* size);
CLUCE_MACRO_EXPORT int Luce_Size2_Initializer(void* memory);
CLUCE_MACRO_EXPORT int Luce_Size2_Destoryer(void* memory);

CLUCE_MACRO_EXPORT int Luce_Size2_Compare(Luce_Size2 lhs, Luce_Size2 rhs);
CLUCE_MACRO_EXPORT int Luce_Size2_Equal(Luce_Size2 lhs, Luce_Size2 rhs);
CLUCE_MACRO_EXPORT int Luce_Size2_Assign(Luce_Size2 lhs, Luce_Size2 rhs);

CLUCE_MACRO_EXPORT Luce_Utility_Int64 Luce_Size2_Area(Luce_Size2 size);

CLUCE_MACRO_EXPORT Luce_Utility_Int32 Luce_Size2_GetWidth(Luce_Size2 size);
CLUCE_MACRO_EXPORT int Luce_Size2_SetWidth(Luce_Size2 size, Luce_Utility_Int32 width);
CLUCE_MACRO_EXPORT Luce_Utility_Int32 Luce_Size2_GetHeight(Luce_Size2 size);
CLUCE_MACRO_EXPORT int Luce_Size2_SetHeight(Luce_Size2 size, Luce_Utility_Int32 height);

#if !defined(CLUCE_MACRO_LINKING_COMPONENT) && CLUCE_MACRO_IS_MSVC
#define CLUCE_MACRO_LINKING_COMPONENT
#pragma comment(lib, "CLuce-Component.lib")
#endif
#endif