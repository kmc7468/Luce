#ifndef LUCE_HEADER_CRYPTO_DETAIL_ICRYPTO_HH
#define LUCE_HEADER_CRYPTO_DETAIL_ICRYPTO_HH

namespace Luce
{
	namespace Crypto
	{
		template<typename Crypto_, typename Key_>
		ICrypto<Crypto_, Key_>::~ICrypto()
		{}

		template<typename Crypto_, typename Key_>
		ICrypto<Crypto_, Key_>::ICrypto(const Key_& key)
		{
			Key = key;
		}

		template<typename Crypto_, typename Key_>
		std::vector<Utility::UInt8> ICrypto<Crypto_, Key_>::
			EncryptByKey(const ByteVector_& bytes, const Key_& key)
		{
			return Crypto_::EncryptByKey(bytes, key);
		}
		template<typename Crypto_, typename Key_>
		std::vector<Utility::UInt8> ICrypto<Crypto_, Key_>::
			DecryptByKey(const ByteVector_& bytes, const Key_& key)
		{
			return Crypto_::DecryptByKey(bytes, key);
		}

		template<typename Crypto_, typename Key_>
		Key_ ICrypto<Crypto_, Key_>::GetKey() const
		{
			return Key;
		}
		template<typename Crypto_, typename Key_>
		void ICrypto<Crypto_, Key_>::SetKey(const Key_& key)
		{
			Key = key;
		}
	}
}

#endif