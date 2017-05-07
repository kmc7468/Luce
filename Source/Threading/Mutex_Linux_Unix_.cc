#include <Luce/Threading/Mutex.hh>

#if LUCE_MACRO_IS_LINUX || LUCE_MACRO_IS_UNIX
#include <pthread.h>

namespace Luce
{
	namespace Threading
	{
		struct Mutex::Data_
		{
			pthread_mutex_t Handle_;
		};

		Mutex::Mutex()
		{
			Value_ = new Mutex::Data_;
			Value_->Handle_ = pthread_mutex_init(&Value_->Handle_, NULL);
		}
		Mutex::~Mutex()
		{
			pthread_mutex_destroy(&Value_->Handle_);
			delete Value_;
		}

		void Mutex::Lock()
		{
			pthread_mutex_lock(&Value_->Handle_);
		}
		void Mutex::Unlock()
		{
			pthread_mutex_unlock(&Value_->Handle_);
		}
		bool Mutex::TryLock()
		{
			if (pthread_mutex_trylock(&Value_->Handle_) == 0)
			{
				return true;
			}
			else
			{
				return false;
			}
		}

		void* Mutex::NativeHandle()
		{
			return Value_->Handle_;
		}
	}
}
#endif