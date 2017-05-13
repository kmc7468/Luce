#include <Luce/Memory/Endian.hh>

#include <Luce/Exception/InvalidValue.hh>
#include <Luce/Threading/Lock.hh>
#include <Luce/Threading/Mutex.hh>
#include <Luce/Utility/Integer.hh>

#include <cstring>
#if LUCE_MACRO_SUPPORTED_RVALUE_REF
#include <utility>
#endif
#include <stdexcept>

namespace Luce
{
	namespace Memory
	{
#if !LUCE_MACRO_SUPPORTED_CONSTEXPR
		Endian::Endian() LUCE_MACRO_NOEXCEPT
		{}
		Endian::Endian(const Enumeration& endian) LUCE_MACRO_NOEXCEPT
		{
			Value_ = endian;
		}
		Endian::Endian(const Endian& endian) LUCE_MACRO_NOEXCEPT
		{
			Value_ = endian.Value_;
		}
#if LUCE_MACRO_SUPPORTED_RVALUE_REF
		Endian::Endian(Endian&& endian) LUCE_MACRO_NOEXCEPT
		{
			Value_ = std::move(endian.Value_);
		}
#endif
#endif

		Endian& Endian::operator=(const Endian& endian) LUCE_MACRO_NOEXCEPT
		{
			Value_ = endian.Value_;
			return *this;
		}
#if LUCE_MACRO_SUPPORTED_RVALUE_REF
		Endian& Endian::operator=(Endian&& endian) LUCE_MACRO_NOEXCEPT
		{
			Value_ = std::move(endian.Value_);
			return *this;
		}
#endif

#if !LUCE_MACRO_SUPPORTED_CONSTEXPR
		bool Endian::operator==(const Endian& endian) const LUCE_MACRO_NOEXCEPT
		{
			return Value_ == endian.Value_;
		}
		bool Endian::operator!=(const Endian& endian) const LUCE_MACRO_NOEXCEPT
		{
			return Value_ != endian.Value_;
		}

		Endian Endian::SystemEndian()
		{
			static Endian e = Endian::None;
			static Threading::Mutex m;

			if (e == Endian::None)
			{
				Threading::Lock lock(m);

				Utility::Int32 temp = 1;
				if (*reinterpret_cast<Utility::UInt8*>(&temp) == 1)
				{
					e = Endian::Little;
				}
				else
				{
					e = Endian::Big;
				}
			}

			return e;
		}

		const char* const Endian::ToString() const
		{
			return ToString_(0);
		}
		const char* const Endian::ToString_(std::size_t index) const
		{
			if (index >= sizeof(Enum_Item_) / sizeof(Enumeration))
				throw InvalidValue(__LINE__, __FILE__, __FUNCTION__);

			return Value_ == Enum_Index_[index] ? Enum_String_[index] :
				ToString_(index + 1);
		}
		Endian Endian::FromString(const char* const str)
		{
			return FromString_(str, 0);
		}
		Endian Endian::FromString_(const char* const str, std::size_t index)
		{
			if (index >= sizeof(Enum_Item_) / sizeof(Enumeration))
				throw InvalidValue(__LINE__, __FILE__, __FUNCTION__);

			return strcmp(str, Enum_String_[index]) == 0 ?
				Enum_Item_[index] : FromString_(str, index + 1);
		}

		const char* const Endian::Enum_String_[] = { "None", "Big", "Little" };
		const Endian::Enumeration Endian::Enum_Item_[] = { None, Big, Little };
		const std::size_t Endian::Enum_Index_[] = { 0, 1, 2 };
#endif
	}
}