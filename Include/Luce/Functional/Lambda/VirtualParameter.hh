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
				
			};
		}
	}
}

#endif