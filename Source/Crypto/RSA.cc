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
			ByteVector result;

			// TODO

			return result;
		}
		std::vector<Utility::UInt8> RSA::DecryptByKey(const ByteVector& bytes,
													  const KeyType& key)
		{
			ByteVector result;

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
	}
}