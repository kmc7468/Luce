#ifndef LUCE_HEADER_UTILITY_LABLEDLOOP_HH
#define LUCE_HEADER_UTILITY_LABLEDLOOP_HH

#include <csetjmp>

#define LUCE_MACRO_BREAK(id)											\
std::longjmp(Luce_Internal_Utility_LabledLoop_##id, 0)

#define LUCE_MACRO_WHILE(id, expr)										\
std::jmp_buf Luce_Internal_Utility_LabledLoop_##id;						\
bool Luce_Internal_Utility_LabledLoop_##id##_temp = false;				\
goto Luce_Internal_Utility_LabledLoop_##id##_temp_1;					\
Luce_Internal_Utility_LabledLoop_##id##_temp_0:							\
while ((expr))

#define LUCE_MACRO_END_WHILE(id)										\
Luce_Internal_Utility_LabledLoop_##id##_temp_1:							\
setjmp(Luce_Internal_Utility_LabledLoop_##id);							\
if (!Luce_Internal_Utility_LabledLoop_##id##_temp)						\
{																		\
	Luce_Internal_Utility_LabledLoop_##id##_temp = true;				\
	goto Luce_Internal_Utility_LabledLoop_##id##_temp_0;				\
}

#define LUCE_MACRO_FOR(id, expr)										\
std::jmp_buf Luce_Internal_Utility_LabledLoop_##id;						\
bool Luce_Internal_Utility_LabledLoop_##id##_temp = false;				\
goto Luce_Internal_Utility_LabledLoop_##id##_temp_1;					\
Luce_Internal_Utility_LabledLoop_##id##_temp_0:							\
for (expr)

#define LUCE_MACRO_END_FOR(id)											\
Luce_Internal_Utility_LabledLoop_##id##_temp_1:							\
setjmp(Luce_Internal_Utility_LabledLoop_##id);							\
if (!Luce_Internal_Utility_LabledLoop_##id##_temp)						\
{																		\
	Luce_Internal_Utility_LabledLoop_##id##_temp = true;				\
	goto Luce_Internal_Utility_LabledLoop_##id##_temp_0;				\
}

#define LUCE_MACRO_DO(id)												\
std::jmp_buf Luce_Internal_Utility_LabledLoop_##id;						\
bool Luce_Internal_Utility_LabledLoop_##id##_temp = false;				\
goto Luce_Internal_Utility_LabledLoop_##id##_temp_1;					\
Luce_Internal_Utility_LabledLoop_##id##_temp_0:							\
do

#define LUCE_MACRO_END_DO(id, expr)										\
while ((expr));															\
Luce_Internal_Utility_LabledLoop_##id##_temp_1:							\
setjmp(Luce_Internal_Utility_LabledLoop_##id);							\
if (!Luce_Internal_Utility_LabledLoop_##id##_temp)						\
{																		\
	Luce_Internal_Utility_LabledLoop_##id##_temp = true;				\
	goto Luce_Internal_Utility_LabledLoop_##id##_temp_0;				\
}

#endif