#ifndef LUCE_HEADER_UTILITY_NONCOPYABLE_HH
#define LUCE_HEADER_UTILITY_NONCOPYABLE_HH
#include <Luce/Configuration.hh>

namespace Luce
{
	namespace Utility
	{
		class LUCE_MACRO_EXPORT NonCopyable
		{
		protected:
			NonCopyable();
			~NonCopyable();

		private:
			NonCopyable(const NonCopyable& object);
#if LUCE_MACRO_SUPPORTED_RVALUE_REF
			NonCopyable(NonCopyable&& object) LUCE_MACRO_NOEXCEPT;
#endif

		private:
			NonCopyable& operator=(const NonCopyable& object);
#if LUCE_MACRO_SUPPORTED_RVALUE_REF
			NonCopyable& operator=(NonCopyable&& object) LUCE_MACRO_NOEXCEPT;
#endif
		};
	}

	typedef Luce::Utility::NonCopyable NonCopyable;
}

#endif