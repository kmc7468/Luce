#ifndef LUCE_HEADER_UTILITY_NONCOPYABLE_HH
#define LUCE_HEADER_UTILITY_NONCOPYABLE_HH
#include <Luce/Configuration.hh>

namespace Luce
{
	namespace Utility
	{
		class LUCE_MACRO_EXPORT NonCopyable
		{
#if LUCE_MACRO_SUPPORTED_DELETE
		public:
			NonCopyable(const NonCopyable& object) = delete;
#endif

		protected:
			LUCE_MACRO_CONSTEXPR NonCopyable() {}
			~NonCopyable() {}

#if !LUCE_MACRO_SUPPORTED_DELETE
		private:
			NonCopyable(const NonCopyable& object);
#endif

#if LUCE_MACRO_SUPPORTED_DELETE
		public:
			NonCopyable& operator=(const NonCopyable& object) = delete;
#else
		private:
			NonCopyable& operator=(const NonCopyable& object);
#endif
		};
	}

	typedef Luce::Utility::NonCopyable NonCopyable;
}

#endif