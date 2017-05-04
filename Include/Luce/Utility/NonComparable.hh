#ifndef LUCE_HEADER_UTILITY_NONCOMPARABLE_HH
#define LUCE_HEADER_UTILITY_NONCOMPARABLE_HH
#include <Luce/Configuration.hh>

namespace Luce
{
	namespace Utility
	{
		class LUCE_MACRO_EXPORT NonComparable
		{
		protected:
			~NonComparable();

		private:
			bool operator==(const NonComparable& object) const LUCE_MACRO_NOEXCEPT;
			bool operator!=(const NonComparable& object) const LUCE_MACRO_NOEXCEPT;
		};
	}

	typedef Luce::Utility::NonComparable NonComparable;
}

#endif