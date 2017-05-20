#ifndef LUCE_HEADER_SYSTEM_CPU_HH
#define LUCE_HEADER_SYSTEM_CPU_HH
#include <Luce/Configuration.hh>

#include <Luce/System/Unit.hh>

#include <string>
#include <vector>

namespace Luce
{
	namespace System
	{
		class UnitType;
		
		class LUCE_MACRO_EXPORT Architecture LUCE_MACRO_FINAL
		{
			LUCE_MACRO_CANNOT_PARENT_CONSTEXPR(Architecture)

		public:
			enum Enumeration
			{
				Unknown,
				x86,
				Amd64,
				x64 = Amd64,
				IA32,
				IA64,
			};

		public:
			LUCE_MACRO_CONSTEXPR Architecture() LUCE_MACRO_NOEXCEPT;
			LUCE_MACRO_CONSTEXPR Architecture(const Enumeration& architecture) LUCE_MACRO_NOEXCEPT;
			LUCE_MACRO_CONSTEXPR Architecture(const Architecture& architecture) LUCE_MACRO_NOEXCEPT;
#if LUCE_MACRO_SUPPORTED_RVALUE_REF
			LUCE_MACRO_CONSTEXPR Architecture(Architecture&& architecture) LUCE_MACRO_NOEXCEPT;
#endif

		public:
			Architecture& operator=(const Architecture& architecture) LUCE_MACRO_NOEXCEPT;
#if LUCE_MACRO_SUPPORTED_RVALUE_REF
			Architecture& operator=(Architecture&& architecture) LUCE_MACRO_NOEXCEPT;
#endif
			LUCE_MACRO_CONSTEXPR
				bool operator==(const Architecture& architecture) const LUCE_MACRO_NOEXCEPT;
			LUCE_MACRO_CONSTEXPR
				bool operator!=(const Architecture& architecture) const LUCE_MACRO_NOEXCEPT;

		public:
			LUCE_MACRO_CONSTEXPR static Architecture FromString(const char* const str);

		private:
			LUCE_MACRO_CONSTEXPR static Architecture FromString_(const char* const str,
																 std::size_t index);
#if LUCE_MACRO_SUPPORTED_CONSTEXPR
			LUCE_MACRO_CONSTEXPR static bool StrCmp_(const char* lhs, const char* rhs);
#endif

		public:
			LUCE_MACRO_CONSTEXPR const char* const ToString() const;

		private:
			LUCE_MACRO_CONSTEXPR const char* const ToString_(std::size_t index) const;

		private:
			LUCE_MACRO_CONSTEXPR static const char* const Enum_String_[6]
#if LUCE_MACRO_SUPPORTED_CONSTEXPR
				= { "Unknown", "x86", "Amd64", "x64", "IA32", "IA64" }
#endif
			;
			LUCE_MACRO_CONSTEXPR static const Architecture::Enumeration Enum_Item_[6]
#if LUCE_MACRO_SUPPORTED_CONSTEXPR
				= { Unknown, x86, Amd64, x64, IA32, IA64 }
#endif
			;
			LUCE_MACRO_CONSTEXPR static const std::size_t Enum_Index_[6]
#if LUCE_MACRO_SUPPORTED_CONSTEXPR
				= { 0, 1, 2, 2, 3, 4 }
#endif
			;

		private:
			Enumeration Value_;
		};

		class LUCE_MACRO_EXPORT Cpu : public Unit
		{
		public:
			Cpu(const Cpu& unit);
#if LUCE_MACRO_SUPPORTED_RVALUE_REF
			Cpu(Cpu&& unit);
#endif
			virtual ~Cpu() LUCE_MACRO_OVERRIDE;

		private:
			Cpu(const std::string& name, const Architecture& architecture);

		public:
			static std::vector<Cpu> GetCpus();
			static Cpu Create(const std::string& name, const Architecture& architecture);

		public:
			virtual UnitType GetUnitType() const LUCE_MACRO_NOEXCEPT LUCE_MACRO_OVERRIDE;

		public:
			Architecture Architecture() const LUCE_MACRO_NOEXCEPT;

		private:
			System::Architecture Architecture_;
		};
	}
}

#include <Luce/Internal/System/Cpu_.hh>
#endif