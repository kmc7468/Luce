#include <Luce/Utility/NonCopyable.hh>

namespace Luce
{
	namespace Utility
	{
		NonCopyable::NonCopyable()
		{}
		NonCopyable::~NonCopyable() LUCE_MACRO_NOEXCEPT
		{}
	}
}