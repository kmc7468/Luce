#include <Luce/Crypto/RSA.hh>

#if LUCE_MACRO_SUPPORTED_RVALUE_REF
#include <utility>
#endif

namespace Luce
{
	namespace Crypto
	{
		RSA::RSA()
			: ICrypto<RSA, RSAKey>(RSAKey::Empty)
		{
			KeyBit_ = 256;
		}
		RSA::RSA(const Utility::UIntMax& key_bit)
			: ICrypto<RSA, RSAKey>(RSAKey::Empty)
		{
			KeyBit_ = key_bit;
		}
		RSA::RSA(const RSA& rsa)
			: ICrypto<RSA, RSAKey>(rsa.Key)
		{
			KeyBit_ = rsa.KeyBit_;
		}
#if LUCE_MACRO_SUPPORTED_RVALUE_REF
		RSA::RSA(RSA&& rsa) LUCE_MACRO_NOEXCEPT
			: ICrypto<RSA, RSAKey>(std::move(rsa.Key))
		{
			KeyBit_ = std::move(rsa.KeyBit_);
		}
#endif

		RSA::~RSA()
		{}

		std::vector<Utility::UInt8> RSA::EncryptByKey(const ByteVector& bytes,
													  const KeyType& key)
		{
			ByteArray bytes_array(const_cast<Utility::UInt8*>(bytes.data()), bytes.size());
			ByteArray result = EncryptByKey(bytes_array, key);

			ByteVector result_vec;
			result_vec.assign(result.first, result.first + result.second);
			return result_vec;
		}
		std::vector<Utility::UInt8> RSA::DecryptByKey(const ByteVector& bytes,
													  const KeyType& key)
		{
			ByteArray bytes_array(const_cast<Utility::UInt8*>(bytes.data()), bytes.size());
			ByteArray result = DecryptByKey(bytes_array, key);

			ByteVector result_vec;
			result_vec.assign(result.first, result.first + result.second);
			return result_vec;
		}
		std::pair<Utility::UInt8*, std::size_t> RSA::EncryptByKey(const ByteArray& bytes,
																  const KeyType& key)
		{
			ByteArray result;

			// TODO

			return result;
		}
		std::pair<Utility::UInt8*, std::size_t> RSA::DecryptByKey(const ByteArray& bytes,
																  const KeyType& key)
		{
			ByteArray result;

			// TODO

			return result;
		}
		RSAKey RSA::KeyGen()
		{
			return RSAKey();
		}

		std::vector<Utility::UInt8> RSA::Encrypt(const ByteVector& bytes) const
		{
			return EncryptByKey(bytes, Key);
		}
		std::vector<Utility::UInt8> RSA::Decrypt(const ByteVector& bytes) const
		{
			return DecryptByKey(bytes, Key);
		}
		std::pair<Utility::UInt8*, std::size_t> RSA::Encrypt(const ByteArray& bytes) const
		{
			return EncryptByKey(bytes, Key);
		}
		std::pair<Utility::UInt8*, std::size_t> RSA::Decrypt(const ByteArray& bytes) const
		{
			return DecryptByKey(bytes, Key);
		}
	}
}