#ifndef LUCE_HEADER_CRYPTO_RSA_HH
#define LUCE_HEADER_CRYPTO_RSA_HH
#include <Luce/Configuration.hh>

#include <Luce/Crypto/ICrypto.hh>
#include <Luce/Crypto/RSAKey.hh>

namespace Luce
{
	namespace Crypto
	{
		class LUCE_MACRO_EXPORT RSA LUCE_MACRO_FINAL : public ICrypto<RSA, RSAKey>
		{

		};
	}
}

#endif