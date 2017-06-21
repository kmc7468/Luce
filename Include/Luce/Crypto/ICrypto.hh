#ifndef LUCE_HEADER_CRYPTO_ICRYPTO_HH
#define LUCE_HEADER_CRYPTO_ICRYPTO_HH
#include <Luce/Configuration.hh>

#include <Luce/Utility/Integer.hh>

#include <cstddef>
#include <utility>
#include <vector>

namespace Luce
{
	namespace Crypto
	{
		template<typename Crypto_, typename Key_>
		class ICrypto
		{
		public:
			typedef Key_ KeyType;
			typedef std::vector<Utility::UInt8> ByteVector;
			typedef std::pair<Utility::UInt8*, std::size_t> ByteArray;

		public:
			virtual ~ICrypto();

		protected:
			ICrypto(const Key_& key);
#if LUCE_MACRO_SUPPORTED_RVALUE_REF
			ICrypto(Key_&& key) LUCE_MACRO_NOEXCEPT;
#endif

		public:
			static ByteVector EncryptByKey(const ByteVector& bytes, const Key_& key);
			static ByteVector DecryptByKey(const ByteVector& bytes, const Key_& key);
			static ByteArray EncryptByKey(const ByteArray& bytes, const Key_& key);
			static ByteArray DecryptByKey(const ByteArray& bytes, const Key_& key);

		public:
			Key_ GetKey() const;
			void SetKey(const Key_& key);

		protected:
			Key_ Key;
		};

		template<>
		class LUCE_MACRO_EXPORT ICrypto<void, void>
		{
		private:
			typedef Utility::UInt8 Byte_;
			typedef std::vector<Byte_> ByteVector_;
			typedef std::pair<Byte_*, std::size_t> ByteArray_;

		public:
			virtual ~ICrypto();

		public:
			virtual ByteVector_ Encrypt(const ByteVector_& bytes) const = 0;
			virtual ByteVector_ Decrypt(const ByteVector_& bytes) const = 0;
			virtual ByteArray_ Encrypt(const ByteArray_& bytes) const = 0;
			virtual ByteArray_ Decrypt(const ByteArray_& bytes) const = 0;
		};

		typedef ICrypto<void, void>& CryptoRef;

#define LUCE_MACRO_CRYPTO_CLASS(name, key) public Luce::Crypto::ICrypto<name, key>, \
public Luce::Crypto::ICrypto<void, void>
	}

	using Luce::Crypto::CryptoRef;
}

#include "Detail/ICrypto.hh"
#endif