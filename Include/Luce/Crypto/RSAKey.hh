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
		class RSAKey LUCE_MACRO_FINAL
		{
			LUCE_MACRO_CANNOT_PARENT(RSAKey)

		public:

		public:
			std::size_t GetSize() const;
			std::size_t GetSizeByBit() const;

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