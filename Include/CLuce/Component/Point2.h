#ifndef CLUCE_HEADER_COMPONENT_POINT2_H
#define CLUCE_HEADER_COMPONENT_POINT2_H
#include <CLuce/Configuration.h>

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
CLUCE_MACRO_EXPORT int Luce_Component_Point2_Initialize(void* memory);

CLUCE_MACRO_CONNECT_END

#if !defined(__cplusplus) && !defined(CLUCE_MACRO_LINKING_COMPONENT) && CLUCE_MACRO_IS_MSVC
#define CLUCE_MACRO_LINKING_COMPONENT
#pragma comment(lib, "CLuce-Component.lib")
#endif
#endif