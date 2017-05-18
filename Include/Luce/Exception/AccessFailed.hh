#ifndef LUCE_HEADER_EXCEPTION_ACCESSFAILED_HH
#define LUCE_HEADER_EXCEPTION_ACCESSFAILED_HH
#include <Luce/Configuration.hh>

#include <Luce/Exception/LuceException.hh>

namespace Luce
{
	namespace Exception
	{
		class AccessFailed : public LuceException
		{
			LUCE_MACRO_LEXCEPT_CONSTRUCTORS(AccessFailed, LuceException)

		public:
			AccessFailed(const AccessFailed& exception);
#if LUCE_MACRO_SUPPORTED_RVALUE_REF
			AccessFailed(AccessFailed&& exception) LUCE_MACRO_NOEXCEPT;
#endif

		public:
			AccessFailed& operator=(const AccessFailed& exception);
#if LUCE_MACRO_SUPPORTED_RVALUE_REF
			AccessFailed& operator=(AccessFailed&& exception) LUCE_MACRO_NOEXCEPT;
#endif

		public:
			virtual std::string ToString() const override;

		protected:
			using LuceException::ToString;
		};
	}

	using Luce::Exception::AccessFailed;
}

#endif