#ifndef LUCE_HEADER_FUNCTIONAL_LAMBDA_VIRTUALPARAMETER_HH
#define LUCE_HEADER_FUNCTIONAL_LAMBDA_VIRTUALPARAMETER_HH
#include <Luce/Configuration.hh>

#include <Luce/Utility/Integer.hh>
#include <Luce/Utility/NonComparable.hh>

namespace Luce
{
	namespace Functional
	{
		namespace Lambda
		{
			template<Utility::UIntMax Index_>
			struct VirtualParameter LUCE_MACRO_FINAL
			{
				LUCE_MACRO_CANNOT_PARENT(VirtualParameter)

			public:
				static const Utility::UIntMax Index = Index_;
			};

			typedef const VirtualParameter<0>& VirtualParameter0;
			typedef const VirtualParameter<1>& VirtualParameter1;
			typedef const VirtualParameter<2>& VirtualParameter2;
			typedef const VirtualParameter<3>& VirtualParameter3;
			typedef const VirtualParameter<4>& VirtualParameter4;
			typedef const VirtualParameter<5>& VirtualParameter5;
			typedef const VirtualParameter<6>& VirtualParameter6;
			typedef const VirtualParameter<7>& VirtualParameter7;
			typedef const VirtualParameter<8>& VirtualParameter8;
			typedef const VirtualParameter<9>& VirtualParameter9;

			namespace Parameter
			{
				extern VirtualParameter0 _0;
				extern VirtualParameter1 _1;
				extern VirtualParameter2 _2;
				extern VirtualParameter3 _3;
				extern VirtualParameter4 _4;
				extern VirtualParameter5 _5;
				extern VirtualParameter6 _6;
				extern VirtualParameter7 _7;
				extern VirtualParameter8 _8;
				extern VirtualParameter9 _9;
			}
		}
	}
}

#if !defined(LUCE_MACRO_LINKING_FUNCTIONAL) && LUCE_MACRO_IS_MSVC
#define LUCE_MACRO_LINKING_FUNCTIONAL
#pragma comment(lib, "Luce-Functional.lib")
#endif
#endif