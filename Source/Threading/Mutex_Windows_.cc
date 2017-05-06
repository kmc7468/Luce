#include <Luce/Threading/Mutex.hh>

#if LUCE_MACRO_IS_WINDOWS
#include <Windows.h>

namespace Luce
{
	namespace Threading
	{
		Mutex::Mutex()
		{
			Handle_ = CreateMutex(NULL, FALSE, NULL);
		}
		LUCE_MACRO_CANNOT_PARENT_DESTRUCTOR_DEF(Mutex,
		{
			// TODO
		})
	}
}
#endif