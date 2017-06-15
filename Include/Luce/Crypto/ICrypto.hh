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
		private:
			typedef Utility::UInt8 Byte_;
			typedef std::vector<Byte_> ByteVector_;

		public:
			virtual ~ICrypto();

		protected:
			ICrypto(const Key_& key);

		public:
			static ByteVector_ EncryptByKey(const ByteVector_& bytes, const Key_& key);
			static ByteVector_ DecryptByKey(const ByteVector_& bytes, const Key_& key);

		public:
			Key_ GetKey() const;
			void SetKey(const Key_& key);

		public:
			virtual ByteVector_ Encrypt(const ByteVector_& bytes) const = 0;
			virtual ByteVector_ Decrypt(const ByteVector_& bytes) const = 0;

		protected:
			Key_ Key;
		};
	}
}

#include "Detail/ICrypto.hh"
#endif