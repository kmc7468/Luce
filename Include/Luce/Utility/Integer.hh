#ifndef LUCE_HEADER_UTILITY_INTEGER_HH
#define LUCE_HEADER_UTILITY_INTEGER_HH
#include <Luce/Configuration.hh>

#if LUCE_MACRO_IS_WINDOWS
#include <basetsd.h>
#else
// TODO
#endif

namespace Luce
{
	namespace Utility
	{
#if LUCE_MACRO_IS_WINDOWS
		typedef ::INT8 Int8;
		typedef ::UINT8 UInt8;
		typedef ::INT16 Int16;
		typedef ::UINT16 UInt16;
		typedef ::INT32 Int32;
		typedef ::UINT32 UInt32;
		typedef ::INT64 Int64;
		typedef ::UINT64 UInt64;
		typedef ::INT_PTR IntPtr;
		typedef ::UINT_PTR UIntPtr;
		
		typedef Int64 IntMax;
		typedef UInt64 UIntMax;
		typedef IntPtr IntFaster;
		typedef UIntPtr UIntFaster;
#else
		// TODO
#endif
	}

	using Luce::Utility::Int8;
	using Luce::Utility::Int16;
	using Luce::Utility::Int32;
	using Luce::Utility::Int64;
	using Luce::Utility::IntPtr;
	using Luce::Utility::IntMax;
	using Luce::Utility::IntFaster;

	using Luce::Utility::UInt8;
	using Luce::Utility::UInt16;
	using Luce::Utility::UInt32;
	using Luce::Utility::UInt64;
	using Luce::Utility::UIntPtr;
	using Luce::Utility::UIntMax;
	using Luce::Utility::UIntFaster;
}

#endif