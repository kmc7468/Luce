#include <Luce/Utility/NonCopyable.hh>

namespace Luce
{
	namespace Utility
	{
#if LUCE_MACRO_IS_NO(LUCE_CONFIG_CONSTEXPR)
		NonCopyable::NonCopyable()
		{}
#endif
		NonCopyable::~NonCopyable()
		{}
	}
}