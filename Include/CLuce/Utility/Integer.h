#ifndef CLUCE_HEADER_UTILITY_INTEGER_H
#define CLUCE_HEADER_UTILITY_INTEGER_H
#include <CLuce/Configuration.h>

#if CLUCE_MACRO_IS_WINDOWS
#include <basetsd.h>
#endif
#include <limits.h>
#include <stddef.h>

#if CLUCE_MACRO_IS_WINDOWS
typedef INT8 Luce_Utility_Int8;
typedef UINT8 Luce_Utility_UInt8;
typedef INT16 Luce_Utility_Int16;
typedef UINT16 Luce_Utility_UInt16;
typedef INT32 Luce_Utility_Int32;
typedef UINT32 Luce_Utility_UInt32;
typedef INT64 Luce_Utility_Int64;
typedef UINT64 Luce_Utility_UInt64;
typedef INT_PTR Luce_Utility_IntPtr;
typedef UINT_PTR Luce_Utility_UIntPtr;
#else
#if UCHAR_MAX == 255
typedef signed char Luce_Utility_Int8;
typedef unsigned char Luce_Utility_UInt8;
#else
#error It is a platform that does not support the data types required by CLuce.
#endif

#if USHRT_MAX == 65535
typedef signed short Luce_Utility_Int16;
typedef unsigned short Luce_Utility_UInt16;
#elif UINT_MAX == 65535
typedef signed int Luce_Utility_Int16;
typedef unsigned int Luce_Utility_UInt16;
#else
#error It is a platform that does not support the data types required by CLuce.
#endif

#if USHRT_MAX == 4294967295
typedef signed short Luce_Utility_Int32;
typedef unsigned short Luce_Utility_UInt32;
#elif UINT_MAX == 4294967295
typedef signed int Luce_Utility_Int32;
typedef unsigned int Luce_Utility_UInt32;
#elif ULONG_MAX == 4294967295
typedef signed long Luce_Utility_Int32;
typedef unsigned long Luce_Utility_UInt32;
#else
#error It is a platform that does not support the data types required by CLuce.
#endif

#ifndef ULLONG_MAX
#if USHRT_MAX == 18446744073709551615
typedef signed short Luce_Utility_Int64;
typedef unsigned short Luce_Utility_UInt64;
#elif UINT_MAX == 18446744073709551615
typedef signed int Luce_Utility_Int64;
typedef unsigned int Luce_Utility_UInt64;
#elif ULONG_MAX == 18446744073709551615
typedef signed long Luce_Utility_Int64;
typedef unsigned long Luce_Utility_UInt64;
#elif ULLONG_MAX == 18446744073709551615
typedef signed long long Luce_Utility_Int64;
typedef unsigned long long Luce_Utility_UInt64;
#else
#if CLUCE_MACRO_IS_MSVC
#define CLUCE_MACRO_INT64_IMPL_COMPILER_EXTENSION
typedef signed __int64 Luce_Utility_Int64;
typedef unsigned __int64 Luce_Utility_UInt64;
#else
#error It is a platform that does not support the data types required by CLuce.
#endif
#endif
#else
#if CLUCE_MACRO_IS_MSVC
#define CLUCE_MACRO_INT64_IMPL_COMPILER_EXTENSION
typedef signed __int64 Luce_Utility_Int64;
typedef unsigned __int64 Luce_Utility_UInt64;
#else
#error It is a platform that does not support the data types required by CLuce.
#endif
#endif

#if CLUCE_MACRO_IS_MSVC
#ifdef _WIN64
typedef Luce_Utility_Int64 Luce_Utility_IntPtr;
typedef Luce_Utility_UInt64 Luce_Utility_UIntPtr;
#elif defined(_WIN32)
typedef Luce_Utility_Int32 Luce_Utility_IntPtr;
typedef Luce_Utility_UInt32 Luce_Utility_UIntPtr;
#elif defined(_WIN16)
typedef Luce_Utility_Int16 Luce_Utility_IntPtr;
typedef Luce_Utility_UInt16 Luce_Utility_UIntPtr;
#else
#error It is a platform that does not support the data types required by CLuce.
#endif
#else
// TODO
//typedef typename TypeTrait::MakeSigned<std::size_t>::Type Luce_Utility_IntPtr;
//typedef typename TypeTrait::MakeUnsigned<std::size_t>::Type Luce_Utility_UIntPtr;
#endif
#endif

typedef Luce_Utility_IntPtr Luce_Utility_IntFaster;
typedef Luce_Utility_UIntPtr Luce_Utility_UIntFaster;
typedef Luce_Utility_Int64 Luce_Utility_IntMax;
typedef Luce_Utility_UInt64 Luce_Utility_UIntMax;

typedef Luce_Utility_Int8 Luce_Int8;
typedef Luce_Utility_UInt8 Luce_UInt8;
typedef Luce_Utility_Int16 Luce_Int16;
typedef Luce_Utility_UInt16 Luce_Int16;
typedef Luce_Utility_Int32 Luce_Int32;
typedef Luce_Utility_UInt32 Luce_UInt32;
typedef Luce_Utility_Int64 Luce_Int64;
typedef Luce_Utility_UInt64 Luce_UInt64;
typedef Luce_Utility_IntPtr Luce_IntPtr;
typedef Luce_Utility_UIntPtr Luce_UIntPtr;
typedef Luce_Utility_IntMax Luce_IntMax;
typedef Luce_Utility_UIntMax Luce_UIntMax;
typedef Luce_Utility_IntFaster Luce_IntFaster;
typedef Luce_Utility_UIntFaster Luce_UIntFaster;

#endif