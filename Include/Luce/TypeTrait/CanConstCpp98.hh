#ifndef LUCE_HEADER_TYPETRAIT_CANCONSTCPP98_HH
#define LUCE_HEADER_TYPETRAIT_CANCONSTCPP98_HH
#include <Luce/Configuration.hh>

#include <Luce/Utility/NonComparable.hh>
#include <Luce/Utility/NonCopyable.hh>

namespace Luce
{
	namespace TypeTrait
	{
		template<typename Ty_>
		struct LUCE_MACRO_EXPORT CanConstCpp98 LUCE_MACRO_FINAL
			: private Utility::NonComparable, private Utility::NonCopyable
		{
			LUCE_MACRO_CANNOT_PARENT(CanConstCpp98)

		public:
			static const bool Value = false;
		};
	}
}

#endif