#include <Luce/Crypto/RSAKey.hh>

#include <algorithm>
#if LUCE_MACRO_SUPPORTED_RVALUE_REF
#include <utility>
#endif

namespace Luce
{
	namespace Crypto
	{
		RSAKey::RSAKey()
		{}
		RSAKey::RSAKey(const ByteVector_& key)
		{
			Key_ = key;
		}
#if LUCE_MACRO_SUPPORTED_RVALUE_REF
		RSAKey::RSAKey(ByteVector_&& key) LUCE_MACRO_NOEXCEPT
		{
			Key_ = std::move(key);
		}
#endif
		RSAKey::RSAKey(const ByteArray_& key)
		{
			Key_.resize(key.second);
			std::copy(Key_.begin(), Key_.end(), key.first);
		}
		RSAKey::RSAKey(const RSAKey& key)
		{
			Key_ = key.Key_;
		}
#if LUCE_MACRO_SUPPORTED_RVALUE_REF
		RSAKey::RSAKey(RSAKey&& key) LUCE_MACRO_NOEXCEPT
		{
			Key_ = std::move(key.Key_);
		}
#endif

		RSAKey::~RSAKey()
		{}

		RSAKey& RSAKey::operator=(const RSAKey& key)
		{
			Key_ = key.Key_;
			return *this;
		}
#if LUCE_MACRO_SUPPORTED_RVALUE_REF
		RSAKey& RSAKey::operator=(RSAKey&& key) LUCE_MACRO_NOEXCEPT
		{
			Key_ = std::move(key.Key_);
			return *this;
		}
#endif

		std::size_t RSAKey::GetSize() const
		{
			return Key_.size();
		}
		std::size_t RSAKey::GetSizeByBit() const
		{
			return Key_.size() * 8;
		}

		const RSAKey RSAKey::Empty = RSAKey();
	}
}