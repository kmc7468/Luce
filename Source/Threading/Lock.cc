#include <Luce/Threading/Lock.hh>

namespace Luce
{
	namespace Threading
	{
		Lock::Lock(Mutex& mutex)
			: Mutex_(mutex)
		{
			Mutex_.Lock();
		}
		Lock::~Lock()
		{
			Mutex_.Unlock();
		}
	}
}