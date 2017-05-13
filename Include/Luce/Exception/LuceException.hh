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
		class LuceException : Utility::NonComparable, public std::exception
		{
		public:
			LuceException(const std::size_t& line, const std::string& file);
			LuceException(const std::size_t& line, const std::string& file,
						  const std::string& function);
			LuceException(const std::string& message, const std::size_t& line,
						  const std::string& file);
			LuceException(const std::string& message, const std::size_t& line,
						  const std::string& file, const std::string& function);
			LuceException(const std::exception& exception, const std::size_t& line,
						  const std::string& file);
			LuceException(const std::exception& exception, const std::size_t& line,
						  const std::string& file, const std::string& function);
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
			virtual const char* what() const override;

			virtual std::string ToString() const;

		protected:
			std::string ToString(const std::string& exception_name) const;

		public:
			std::size_t Line() const;
			std::string File() const;
			std::string Message() const;
			std::string Function() const;

		private:
			std::size_t Line_;
			std::string File_;
			std::string Message_;
			std::string Function_;
		};
	}

	using Luce::Exception::LuceException;
}

#define LUCE_MACRO_LEXCEPT_CONSTRUCTORS(name, parent)							\
public:																			\
	name(const std::size_t& line, const std::string& file)						\
		: parent(line, file)													\
	{}																			\
	name(const std::size_t& line, const std::string& file,						\
		 const std::string& function)											\
		: parent(line, file, function)											\
	{}																			\
	name(const std::string& message, const std::size_t& line,					\
 		const std::string& file)												\
		: parent(message, line, file)											\
	{}																			\
	name(const std::string& message, const std::size_t& line,					\
		 const std::string& file, const std::string& function)					\
		: parent(message, line, file, function)									\
	{}

#endif