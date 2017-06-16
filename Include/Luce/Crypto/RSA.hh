#ifndef LUCE_HEADER_CRYPTO_RSA_HH
#define LUCE_HEADER_CRYPTO_RSA_HH
#include <Luce/Configuration.hh>

#include <Luce/Crypto/ICrypto.hh>
#include <Luce/Crypto/RSAKey.hh>
#include <Luce/Utility/Integer.hh>

#include <cstddef>
#include <utility>
#include <vector>

namespace Luce
{
	namespace Crypto
	{
		struct RSAParameter LUCE_MACRO_FINAL
		{
			LUCE_MACRO_CANNOT_PARENT(RSAParameter)

		private:
			typedef std::pair<Utility::UInt8*, std::size_t> ByteArray_;

		public:
			ByteArray_ P; // p
			ByteArray_ Q; // q
			ByteArray_ N; // N=pq
			ByteArray_ BigP; // P=(p-1)(q-1)
			ByteArray_ E; // ed = kP+1
			ByteArray_ D; // ed = kP+1
		};

		class LUCE_MACRO_EXPORT RSA LUCE_MACRO_FINAL
			: LUCE_MACRO_CRYPTO_CLASS(RSA, RSAKey)
		{
			LUCE_MACRO_CANNOT_PARENT(RSA)

		public:
			typedef RSAKey KeyType;

		public:
			RSA();
			RSA(const Utility::UIntMax& key_bit);
			RSA(const RSA& rsa);
#if LUCE_MACRO_SUPPORTED_RVALUE_REF
			RSA(RSA&& rsa) LUCE_MACRO_NOEXCEPT;
#endif

		public:
			static ByteVector EncryptByKey(const ByteVector& bytes, const KeyType& key);
			static ByteVector DecryptByKey(const ByteVector& bytes, const KeyType& key);
			static ByteArray EncryptByKey(const ByteArray& bytes, const KeyType& key);
			static ByteArray DecryptByKey(const ByteArray& bytes, const KeyType& key);
			static RSAKey KeyGen();

		public:
			virtual ByteVector Encrypt(const ByteVector& bytes) const;
			virtual ByteVector Decrypt(const ByteVector& bytes) const;
			virtual ByteArray Encrypt(const ByteArray& bytes) const;
			virtual ByteArray Decrypt(const ByteArray& bytes) const;

		private:
			Utility::UIntMax KeyBit_;
		};
	}

	using Luce::Crypto::RSA;
}

#if !defined(LUCE_MACRO_LINKING_CRYPTO) && LUCE_MACRO_IS_MSVC
#define LUCE_MACRO_LINKING_CRYPTO
#pragma comment(lib, "Luce-Crypto.lib")
#endif
#endif