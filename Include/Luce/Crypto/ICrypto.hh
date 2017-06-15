#ifndef LUCE_HEADER_CRYPTO_ICRYPTO_HH
#define LUCE_HEADER_CRYPTO_ICRYPTO_HH

#include <Luce/Utility/Integer.hh>

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

		private:
			typedef Utility::UInt8 Byte_;

		public:
			virtual ~ICrypto();

		protected:
			ICrypto(const Key_& key);
#if LUCE_MACRO_SUPPORTED_RVALUE_REF
			ICrypto(Key_&& key);
#endif

		public:
			static ByteVector EncryptByKey(const ByteVector& bytes, const Key_& key);
			static ByteVector DecryptByKey(const ByteVector& bytes, const Key_& key);

		public:
			Key_ GetKey() const;
			void SetKey(const Key_& key);

		public:
			virtual ByteVector Encrypt(const ByteVector& bytes) const = 0;
			virtual ByteVector Decrypt(const ByteVector& bytes) const = 0;

		protected:
			Key_ Key;
		};
	}
}

#include "Detail/ICrypto.hh"
#endif