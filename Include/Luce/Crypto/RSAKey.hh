#ifndef LUCE_HEADER_CRYPTO_RSAKEY_HH
#define LUCE_HEADER_CRYPTO_RSAKEY_HH
#include <Luce/Configuration.hh>

#include <Luce/Crypto/RSAKey.hh>
#include <Luce/Utility/Integer.hh>
#include <Luce/Utility/NonComparable.hh>

#include <cstddef>
#include <utility>
#include <vector>

namespace Luce
{
	namespace Crypto
	{
		class LUCE_MACRO_EXPORT RSAKey LUCE_MACRO_FINAL
			: Utility::NonComparable
		{
			LUCE_MACRO_CANNOT_PARENT(RSAKey)

		private:
			typedef std::vector<Utility::UInt8> ByteVector_;
			typedef std::pair<Utility::UInt8*, std::size_t> ByteArray_;

		public:
			RSAKey();
			RSAKey(const ByteVector_& key);
#if LUCE_MACRO_SUPPORTED_RVALUE_REF
			RSAKey(ByteVector_&& key) LUCE_MACRO_NOEXCEPT;
#endif
			RSAKey(const ByteArray_& key);
			RSAKey(const RSAKey& key);
#if LUCE_MACRO_SUPPORTED_RVALUE_REF
			RSAKey(RSAKey&& key) LUCE_MACRO_NOEXCEPT;
#endif

		public:
			RSAKey& operator=(const RSAKey& key);
#if LUCE_MACRO_SUPPORTED_RVALUE_REF
			RSAKey& operator=(RSAKey&& key) LUCE_MACRO_NOEXCEPT;
#endif

		public:
			std::size_t GetSize() const;
			std::size_t GetSizeByBit() const;

		public:
			static const RSAKey Empty;

		private:
			ByteVector_ Key_;
		};
	}
}

#if !defined(LUCE_MACRO_LINKING_CRYPTO) && LUCE_MACRO_IS_MSVC
#define LUCE_MACRO_LINKING_CRYPTO
#pragma comment(lib, "Luce-Crypto.lib")
#endif
#endif