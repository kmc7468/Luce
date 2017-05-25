#ifndef LUCE_HEADER_UTILITY_LABLEDLOOP_HH
#define LUCE_HEADER_UTILITY_LABLEDLOOP_HH

#include <csetjmp>

#define LUCE_MACRO_BREAK(id)								\
goto Luce_Internal_Utility_LabledLoop_##id;

#define LUCE_MACRO_ID(id)									\
Luce_Internal_Utility_LabledLoop_##id:						\
{															\
	int Luce_Internal_Utility_LabledLoop_##id##_temp;		\
}

#endif