#ifndef LUCE_HEADER_TYPETRAIT_ENABLEIF_HH
#define LUCE_HEADER_TYPETRAIT_ENABLEIF_HH
#include <Luce/Configuration.hh>

#include <Luce/Utility/NonComparable.hh>
#include <Luce/Utility/NonCopyable.hh>

namespace Luce
{
	namespace TypeTrait
	{
		template<bool Expr_, typename Ty_ = void>
		struct EnableIf LUCE_MACRO_FINAL
			: private Utility::NonComparable, private Utility::NonCopyable
		{
			LUCE_MACRO_CANNOT_PARENT(EnableIf)

		public:
			typedef Ty_ Type;
		};
		template<typename Ty_ = void>
		struct EnableIf<false, Ty_> LUCE_MACRO_FINAL
			: private Utility::NonComparable, private Utility::NonCopyable
		{
			LUCE_MACRO_CANNOT_PARENT(EnableIf)
		};

		template<bool Expr_, typename Ty_ = void>
		struct DisableIf LUCE_MACRO_FINAL
			: private Utility::NonComparable, private Utility::NonCopyable
		{
			LUCE_MACRO_CANNOT_PARENT(DisableIf)
		};
		template<typename Ty_ = void>
		struct DisableIf<false, Ty_> LUCE_MACRO_FINAL
			: private Utility::NonComparable, private Utility::NonCopyable
		{
			LUCE_MACRO_CANNOT_PARENT(DisableIf)

		public:
			typedef Ty_ Type;
		};
	}
}

#endif