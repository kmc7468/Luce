#ifndef LUCE_HEADER_CRYPTO_RSAKEY_HH
#define LUCE_HEADER_CRYPTO_RSAKEY_HH
#include <Luce/Configuration.hh>

#include <Luce/Crypto/RSAKey.hh>
#include <Luce/Utility/Integer.hh>

#include <cstddef>
#include <vector>

namespace Luce
{
	namespace Crypto
	{
		class LUCE_MACRO_EXPORT RSAKey LUCE_MACRO_FINAL
		{
			LUCE_MACRO_CANNOT_PARENT(RSAKey)

		public:
			RSAKey();
			RSAKey(const std::vector<Utility::UInt8>& key);
#if LUCE_MACRO_SUPPORTED_RVALUE_REF
			RSAKey(std::vector<Utility::UInt8>&& key);
#endif
			RSAKey(const RSAKey& key);
#if LUCE_MACRO_SUPPORTED_RVALUE_REF
			RSAKey(RSAKey&& key);
#endif

		public:
			std::size_t GetSize() const;
			std::size_t GetSizeByBit() const;

		public:
			static const RSAKey Empty;

		private:
			std::vector<Utility::UInt8> Key_;
		};
	}
}

#if !defined(LUCE_MACRO_LINKING_CRYPTO) && LUCE_MACRO_IS_MSVC
#define LUCE_MACRO_LINKING_CRYPTO
#pragma comment(lib, "Luce-Crypto.lib")
#endif
#endif