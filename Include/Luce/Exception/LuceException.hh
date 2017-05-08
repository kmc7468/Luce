#ifndef LUCE_HEADER_EXCEPTION_LUCEEXCEPTION_HH
#define LUCE_HEADER_EXCEPTION_LUCEEXCEPTION_HH
#include <Luce/Configuration.hh>

#include <Luce/Utility/NonComparable.hh>

#include <cstddef>
#include <exception>
#include <string>

namespace Luce
{
	namespace Exception
	{
		class LuceException : public std::exception, public Utility::NonComparable
		{
		public:
			LuceException(const std::size_t& line, const std::string& file);
			LuceException(const std::string& message, const std::size_t& line,
						  const std::string& file);
			LuceException(const LuceException& exception);
#if LUCE_MACRO_SUPPORTED_RVALUE_REF
			LuceException(LuceException&& exception) LUCE_MACRO_NOEXCEPT;
#endif

		public:
			LuceException& operator=(const LuceException& exception);
#if LUCE_MACRO_SUPPORTED_RVALUE_REF
			LuceException& operator=(LuceException&& exception) LUCE_MACRO_NOEXCEPT;
#endif

		public:
			virtual const char* what() const;

		private:
			std::size_t Line_;
			std::string File_;
			std::string Message_;
		};
	}

	using Luce::Exception::LuceException;
}

#endif