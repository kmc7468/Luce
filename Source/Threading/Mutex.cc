#include <Luce/Threading/Mutex.hh>

namespace Luce
{
	namespace Threading
	{
		void* Mutex::NativeHandle()
		{
			return Handle_;
		}
	}
}