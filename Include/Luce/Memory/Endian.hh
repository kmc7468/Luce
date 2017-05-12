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
			LUCE_MACRO_CANNOT_PARENT_CONSTEXPR(Endian)

		public:
			enum Enumeration
			{
				None,
				Big,
				Little,
			};

		public:
			LUCE_MACRO_CONSTEXPR Endian() LUCE_MACRO_NOEXCEPT;
			LUCE_MACRO_CONSTEXPR Endian(const Enumeration& endian) LUCE_MACRO_NOEXCEPT;
			LUCE_MACRO_CONSTEXPR Endian(const Endian& endian) LUCE_MACRO_NOEXCEPT;
#if LUCE_MACRO_SUPPORTED_RVALUE_REF
			LUCE_MACRO_CONSTEXPR Endian(Endian&& endian) LUCE_MACRO_NOEXCEPT;
#endif

		public:
			Endian& operator=(const Endian& endian) LUCE_MACRO_NOEXCEPT;
#if LUCE_MACRO_SUPPORTED_RVALUE_REF
			Endian& operator=(Endian&& endian) LUCE_MACRO_NOEXCEPT;
#endif
			LUCE_MACRO_CONSTEXPR
				bool operator==(const Endian& endian) const LUCE_MACRO_NOEXCEPT;
			LUCE_MACRO_CONSTEXPR
				bool operator!=(const Endian& endian) const LUCE_MACRO_NOEXCEPT;

		public:
			LUCE_MACRO_CONSTEXPR static Endian FromString(const char* const str);
			static Endian SystemEndian();

		private:
			LUCE_MACRO_CONSTEXPR static Endian FromString_(const char* const str,
														  std::size_t index);
#if LUCE_MACRO_SUPPORTED_CONSTEXPR
			LUCE_MACRO_CONSTEXPR static bool StrCmp_(const char* lhs, const char* rhs);
#endif

		public:
			LUCE_MACRO_CONSTEXPR const char* const ToString() const;

		private:
			LUCE_MACRO_CONSTEXPR const char* const ToString_(std::size_t index) const;

		private:
			LUCE_MACRO_CONSTEXPR static const char* const Enum_String_[3]
#if LUCE_MACRO_SUPPORTED_CONSTEXPR
				= { "None", "Big", "Little" }
#endif
			;
			LUCE_MACRO_CONSTEXPR static const Endian::Enumeration Enum_Item_[3]
#if LUCE_MACRO_SUPPORTED_CONSTEXPR
				= { None, Big, Little }
#endif
				;
			LUCE_MACRO_CONSTEXPR static const std::size_t Enum_Index_[3]
#if LUCE_MACRO_SUPPORTED_CONSTEXPR
				= { 0, 1, 2 }
#endif
			;

		private:
			Enumeration Value_;
		};
	}

	using Luce::Memory::Endian;
}

#include <Luce/Internal/Memory/Endian_.hh>
#endif