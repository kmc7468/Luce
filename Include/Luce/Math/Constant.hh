#ifndef LUCE_HEADER_MATH_CONSTANT_HH
#define LUCE_HEADER_MATH_CONSTANT_HH
#include <Luce/Configuration.hh>

namespace Luce
{
	namespace Math
	{
#if LUCE_MACRO_SUPPORTED_CONSTEXPR
		LUCE_MACRO_CONSTEXPR double PI = 3.1415926;
		LUCE_MACRO_CONSTEXPR double E = 2.7182818;
#else
		extern const double PI;
		extern const double E;
#endif
	}

	using Luce::Math::PI;
	using Luce::Math::E;
}

#if !defined(LUCE_MACRO_LINKING_MATH) && LUCE_MACRO_IS_MSVC
#define LUCE_MACRO_LINKING_MATH
#pragma comment(lib, "Luce-Math.lib")
#endif
#endif