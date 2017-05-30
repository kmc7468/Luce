#ifndef CLUCE_HEADER_COMPONENT_POINT2_H
#define CLUCE_HEADER_COMPONENT_POINT2_H
#include <CLuce/Configuration.h>

#include <CLuce/Utility/Integer.h>

#ifdef __cplusplus
#include <Luce/Component/Point2.hh>
typedef Luce::Component::Point2* Luce_Component_Point2;
typedef Luce::Component::Point2F* Luce_Component_Point2F;
#else
typedef struct Luce_Component_Point2* Luce_Component_Point2;
typedef struct Luce_Component_Point2F* Luce_Component_Point2F;
#endif

typedef Luce_Component_Point2 Luce_Point2;
typedef Luce_Component_Point2F Luce_Point2F;

CLUCE_MACRO_CONNECT_BEGIN

extern const int Luce_Component_Point2_Size;

CLUCE_MACRO_EXPORT Luce_Component_Point2 Luce_Component_Point2_Create();
CLUCE_MACRO_EXPORT int Luce_Component_Point2_Destroy(Luce_Component_Point2* location);
CLUCE_MACRO_EXPORT int Luce_Component_Point2_Initializer(void* memory);
CLUCE_MACRO_EXPORT int Luce_Component_Point2_Destroyer(void* memory);

CLUCE_MACRO_EXPORT int Luce_Component_Point2_Compare(Luce_Component_Point2 lhs,
													 Luce_Component_Point2 rhs);
CLUCE_MACRO_EXPORT int Luce_Component_Point2_Equal(Luce_Component_Point2 lhs,
												   Luce_Component_Point2 rhs);

CLUCE_MACRO_EXPORT Luce_Utility_Int32
Luce_Component_Point2_GetX(Luce_Component_Point2 location);
CLUCE_MACRO_EXPORT int
Luce_Component_Point2_SetX(Luce_Component_Point2 location, Luce_Utility_Int32 x);
CLUCE_MACRO_EXPORT Luce_Utility_Int32
Luce_Component_Point2_GetY(Luce_Component_Point2 location);
CLUCE_MACRO_EXPORT int
Luce_Component_Point2_SetY(Luce_Component_Point2 location, Luce_Utility_Int32 y);

CLUCE_MACRO_CONNECT_END

CLUCE_MACRO_EXPORT Luce_Point2 Luce_Point2_Create();
CLUCE_MACRO_EXPORT int Luce_Point2_Destroy(Luce_Point2* location);
CLUCE_MACRO_EXPORT int Luce_Point2_Initializer(void* memory);
CLUCE_MACRO_EXPORT int Luce_Point2_Destroyer(void* memory);

CLUCE_MACRO_EXPORT int Luce_Point2_Compare(Luce_Point2 lhs, Luce_Point2 rhs);
CLUCE_MACRO_EXPORT int Luce_Point2_Equal(Luce_Point2 lhs, Luce_Point2 rhs);

CLUCE_MACRO_EXPORT Luce_Utility_Int32 Luce_Point2_GetX(Luce_Point2 location);
CLUCE_MACRO_EXPORT int Luce_Point2_SetX(Luce_Point2 location, Luce_Utility_Int32 x);
CLUCE_MACRO_EXPORT Luce_Utility_Int32 Luce_Point2_GetY(Luce_Point2 location);
CLUCE_MACRO_EXPORT int Luce_Point2_SetY(Luce_Point2 location, Luce_Utility_Int32 y);

#if !defined(CLUCE_MACRO_LINKING_COMPONENT) && CLUCE_MACRO_IS_MSVC
#define CLUCE_MACRO_LINKING_COMPONENT
#pragma comment(lib, "CLuce-Component.lib")
#endif
#endif