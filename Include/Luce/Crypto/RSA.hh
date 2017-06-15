#ifndef LUCE_HEADER_CRYPTO_RSA_HH
#define LUCE_HEADER_CRYPTO_RSA_HH
#include <Luce/Configuration.hh>

#include <Luce/Crypto/ICrypto.hh>
#include <Luce/Crypto/RSAKey.hh>
#include <Luce/Utility/Integer.hh>

#include <vector>

namespace Luce
{
	namespace Crypto
	{
		class LUCE_MACRO_EXPORT RSA LUCE_MACRO_FINAL : public ICrypto<RSA, RSAKey>
		{
			LUCE_MACRO_CANNOT_PARENT(RSA)

		public:
			typedef std::vector<Utility::UInt8> ByteVector;
			typedef RSAKey KeyType;

		public:
			RSA();
			RSA(const Utility::UIntMax& key_bit);
			RSA(const RSA& rsa);
#if LUCE_MACRO_SUPPORTED_RVALUE_REF
			RSA(RSA&& rsa);
#endif

		public:
			static ByteVector EncryptByKey(const ByteVector& bytes, const KeyType& key);
			static ByteVector DecryptByKey(const ByteVector& bytes, const KeyType& key);

		public:
			virtual ByteVector Encrypt(const ByteVector& bytes) const;
			virtual ByteVector Decrypt(const ByteVector& bytes) const;

		private:
			Utility::UIntMax KeyBit_;
		};
	}
}

#if !defined(LUCE_MACRO_LINKING_CRYPTO) && LUCE_MACRO_IS_MSVC
#define LUCE_MACRO_LINKING_CRYPTO
#pragma comment(lib, "Luce-Crypto.lib")
#endif
#endif