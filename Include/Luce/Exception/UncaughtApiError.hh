#ifndef LUCE_HEADER_EXCEPTION_UNCAUGHTAPIERROR_HH
#define LUCE_HEADER_EXCEPTION_UNCAUGHTAPIERROR_HH
#include <Luce/Configuration.hh>

#include <Luce/Exception/LuceException.hh>

namespace Luce
{
	namespace Exception
	{
		class UncaughtApiError : public LuceException
		{
			LUCE_MACRO_LEXCEPT_CONSTRUCTORS(UncaughtApiError, LuceException)

		public:
			UncaughtApiError(const UncaughtApiError& exception);
#if LUCE_MACRO_SUPPORTED_RVALUE_REF
			UncaughtApiError(UncaughtApiError&& exception) LUCE_MACRO_NOEXCEPT;
#endif

		public:
			UncaughtApiError& operator=(const UncaughtApiError& exception);
#if LUCE_MACRO_SUPPORTED_RVALUE_REF
			UncaughtApiError& operator=
				(UncaughtApiError&& exception) LUCE_MACRO_NOEXCEPT;
#endif

		public:
			virtual std::string ToString() const override;

		protected:
			using LuceException::ToString;
		};
	}

	using Luce::Exception::UncaughtApiError;
}

#endif