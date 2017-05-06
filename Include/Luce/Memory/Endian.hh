#ifndef LUCE_HEADER_MEMORY_ENDIAN_HH
#define LUCE_HEADER_MEMORY_ENDIAN_HH
#include <Luce/Configuration.hh>

#include <cstddef>

namespace Luce
{
	namespace Memory
	{
		class Endian LUCE_MACRO_FINAL
		{
			LUCE_MACRO_CANNOT_PARENT(Endian)

		public:
			enum Enumeration
			{
				None,
				Big,
				Little,
			};

		public:
			LUCE_MACRO_CONSTEXPR Endian();
			LUCE_MACRO_CONSTEXPR Endian(const Enumeration& endian);
			LUCE_MACRO_CONSTEXPR Endian(const Endian& endian);
#if LUCE_MACRO_SUPPORTED_RVALUE_REF
			LUCE_MACRO_CONSTEXPR Endian(Endian&& endian) LUCE_MACRO_NOEXCEPT;
#endif

		public:
			Endian& operator=(const Endian& endian);
#if LUCE_MACRO_SUPPORTED_RVALUE_REF
			Endian& operator=(Endian&& endian) LUCE_MACRO_NOEXCEPT;
#endif
			LUCE_MACRO_CONSTEXPR
				bool operator==(const Endian& endian) const LUCE_MACRO_NOEXCEPT;
			LUCE_MACRO_CONSTEXPR
				bool operator!=(const Endian& endian) const LUCE_MACRO_NOEXCEPT;

		public:
			static Endian SystemEndian();

		private:
			LUCE_MACRO_CONSTEXPR static const char* const Enum_String_[3]
#if LUCE_MACRO_SUPPORTED_CONSTEXPR
				= { "None", "Big", "Little" }
#endif
			;
			LUCE_MACRO_CONSTEXPR static const std::size_t Enum_String_Length_[3]
#if LUCE_MACRO_SUPPORTED_CONSTEXPR
				= { 4, 3, 6 }
#endif
				;

		private:
			Enumeration Value_;
		};
	}

	typedef Luce::Memory::Endian Endian;
}

#include <Luce/Internal/Memory/Endian_.hh>
#endif