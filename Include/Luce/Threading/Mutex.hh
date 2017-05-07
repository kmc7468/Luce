#ifndef LUCE_HEADER_THREADING_MUTEX_HH
#define LUCE_HEADER_THREADING_MUTEX_HH
#include <Luce/Configuration.hh>

#include <Luce/Utility/NonComparable.hh>
#include <Luce/Utility/NonCopyable.hh>

#include <cstddef>

namespace Luce
{
	namespace Threading
	{
		class Mutex LUCE_MACRO_FINAL
			: Utility::NonComparable, Utility::NonCopyable
		{
			LUCE_MACRO_CANNOT_PARENT(Mutex)

		private:
			struct Data_;

		public:
			Mutex();

		public:
			void Lock();
			void Unlock();
			bool TryLock();

		public:
			void* NativeHandle();

		private:
			Data_* Value_;
		};
	}
}

#endif