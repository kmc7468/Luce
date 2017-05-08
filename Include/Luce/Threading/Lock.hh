#ifndef LUCE_HEADER_THREADING_LOCK_HH
#define LUCE_HEADER_THREADING_LOCK_HH
#include <Luce/Configuration.hh>

#include <Luce/Threading/Mutex.hh>
#include <Luce/Utility/NonComparable.hh>
#include <Luce/Utility/NonCopyable.hh>

namespace Luce
{
	namespace Threading
	{
		class Lock LUCE_MACRO_FINAL
			: Utility::NonComparable, Utility::NonCopyable
		{
			LUCE_MACRO_CANNOT_PARENT(Lock)

		public:
			Lock(Mutex& mutex);

		private:
			Mutex& Mutex_;
		};
	}
}

#endif