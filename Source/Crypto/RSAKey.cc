#include <Luce/Crypto/RSAKey.hh>

namespace Luce
{
	namespace Crypto
	{
		std::size_t RSAKey::GetSize() const
		{
			return Key_.size();
		}
		std::size_t RSAKey::GetSizeByBit() const
		{
			return Key_.size() * 8;
		}
	}
}