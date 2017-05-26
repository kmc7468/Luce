#ifndef LUCE_HEADER_UTILITY_NONCOMPARABLE_HH
#define LUCE_HEADER_UTILITY_NONCOMPARABLE_HH
#include <Luce/Configuration.hh>

namespace Luce
{
	namespace Utility
	{
		class NonComparable
		{
		protected:
			~NonComparable() {}

#if LUCE_MACRO_SUPPORTED_DELETE
		public:
			bool operator==(const NonComparable& object) const LUCE_MACRO_NOEXCEPT = delete;
			bool operator!=(const NonComparable& object) const LUCE_MACRO_NOEXCEPT = delete;
#else
		private:
			bool operator==(const NonComparable& object) const LUCE_MACRO_NOEXCEPT;
			bool operator!=(const NonComparable& object) const LUCE_MACRO_NOEXCEPT;
#endif
		};
	}

	using Luce::Utility::NonComparable;
}

#endif