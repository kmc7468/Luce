#ifndef LUCE_HEADER_NUMBERIC_RATIO_HH
#define LUCE_HEADER_NUMBERIC_RATIO_HH
#include <Luce/Configuration.hh>

#include <Luce/TypeTrait/IntegralConstant.hh>
#include <Luce/Utility/Integer.hh>
#include <Luce/Utility/NonComparable.hh>
#include <Luce/Utility/NonCopyable.hh>
#include <Luce/Utility/Real.hh>

namespace Luce
{
	namespace Numberic
	{
		namespace Detail
		{
			template<Utility::IntMax A_, Utility::IntMax B_>
			struct Max_ LUCE_MACRO_FINAL
				: private Utility::NonComparable, private Utility::NonCopyable
			{
				LUCE_MACRO_CANNOT_PARENT(Max_)

			public:
				static const Utility::IntMax Value = A_ > B_ ? A_ : B_;
			};
			template<Utility::IntMax A_, Utility::IntMax B_>
			struct Min_ LUCE_MACRO_FINAL
				: private Utility::NonComparable, private Utility::NonCopyable
			{
				LUCE_MACRO_CANNOT_PARENT(Min_)

			public:
				static const Utility::IntMax Value = A_ < B_ ? A_ : B_;
			};
			template<Utility::IntMax A_, Utility::IntMax B_>
			struct Gcd_ LUCE_MACRO_FINAL
				: private Utility::NonComparable, private Utility::NonCopyable
			{
				LUCE_MACRO_CANNOT_PARENT(Gcd_)

			public:
				static const Utility::IntMax Value =
					Gcd_<Min_<A_, B_>::Value, Max_<A_, B_>::Value % Min_<A_, B_>::Value>::Value;
			};
			template<Utility::IntMax A_>
			struct Gcd_<A_, 0> LUCE_MACRO_FINAL
				: private Utility::NonComparable, private Utility::NonCopyable
			{
				LUCE_MACRO_CANNOT_PARENT(Gcd_)

			public:
				static const Utility::IntMax Value = A_;
			};
			template<Utility::IntMax A_, Utility::IntMax B_>
			struct Lcm_ LUCE_MACRO_FINAL
				: private Utility::NonComparable, private Utility::NonCopyable
			{
				LUCE_MACRO_CANNOT_PARENT(Lcm_)

			public:
				static const Utility::IntMax Value = A_ * B_ / Gcd_<A_, B_>::Value;
			};
		}

		template<Utility::IntMax Num_, Utility::IntMax Den_ = 1>
		struct Ratio LUCE_MACRO_FINAL
			: private Utility::NonComparable, private Utility::NonCopyable
		{
			LUCE_MACRO_CANNOT_PARENT_CONSTEXPR(Ratio)

		public:
			static const Utility::IntMax Numerator = Num_;
			static const Utility::IntMax Denominator = Den_;
		};

		typedef Ratio<1000000000000000000, 1> Exa;
		typedef Ratio<1000000000000000, 1> Peta;
		typedef Ratio<1000000000000, 1> Tera;
		typedef Ratio<1000000000, 1> Giga;
		typedef Ratio<1000000, 1> Mega;
		typedef Ratio<1000, 1> Kilo;
		typedef Ratio<100, 1> Hecto;
		typedef Ratio<10, 1> Deca;

		typedef Ratio<1, 1000000000000000000> Atto;
		typedef Ratio<1, 1000000000000000> Femto;
		typedef Ratio<1, 1000000000000> Pico;
		typedef Ratio<1, 1000000000> Nano;
		typedef Ratio<1, 1000000> Micro;
		typedef Ratio<1, 1000> Milli;
		typedef Ratio<1, 100> Centi;
		typedef Ratio<1, 10> Deci;

		namespace Detail
		{
			template<typename Ratio_>
			struct Red_ LUCE_MACRO_FINAL
				: private Utility::NonComparable, private Utility::NonCopyable
			{
				LUCE_MACRO_CANNOT_PARENT(Red_)

			public:
				typedef Ratio<
					(Ratio_::Numerator / (Gcd_<Ratio_::Numerator, Ratio_::Denominator>::Value)),
					(Ratio_::Denominator / (Gcd_<Ratio_::Numerator, Ratio_::Denominator>::Value))
				> Type;
			};
			template<typename A_, typename B_>
			struct RedCd_ LUCE_MACRO_FINAL
				: private Utility::NonComparable, private Utility::NonCopyable
			{
				LUCE_MACRO_CANNOT_PARENT(RedCd_)

			public:
				typedef Ratio<
					(A_::Numerator * (A_::Numerator /
					(A_::Denominator * (B_::Denominator / Detail::Gcd_<
										A_::Denominator, B_::Denominator>::Value)))),
					(A_::Denominator * (B_::Denominator / Detail::Gcd_<
										A_::Denominator, B_::Denominator>::Value))
				> AType;
				typedef Ratio<
					(B_::Numerator * (B_::Numerator /
					(A_::Denominator * (B_::Denominator / Detail::Gcd_<
										A_::Denominator, B_::Denominator>::Value)))),
					(A_::Denominator * (B_::Denominator / Detail::Gcd_<
										A_::Denominator, B_::Denominator>::Value))
				> BType;
			};
		}

		template<typename A_, typename B_>
		struct RatioAdd LUCE_MACRO_FINAL
			: private Utility::NonComparable, private Utility::NonCopyable
		{
			LUCE_MACRO_CANNOT_PARENT(RatioAdd)

		public:
			typedef typename Detail::Red_<Ratio<
				(A_::Numerator * (B_::Denominator / Detail::Gcd_<
								 A_::Denominator, B_::Denominator>::Value)) +
				(B_::Numerator * (A_::Denominator / Detail::Gcd_<
								  A_::Denominator, B_::Denominator>::Value)),
				(A_::Denominator * (B_::Denominator / Detail::Gcd_<
								 A_::Denominator, B_::Denominator>::Value))
			>>::Type Type;
		};
		template<typename A_, typename B_>
		struct RatioSub LUCE_MACRO_FINAL
			: private Utility::NonComparable, private Utility::NonCopyable
		{
			LUCE_MACRO_CANNOT_PARENT(RatioSub)

		public:
			typedef typename RatioAdd<A_, Ratio<
				-B_::Numerator, B_::Denominator
				>>::Type Type;
		};
		template<typename A_, typename B_>
		struct RatioMul LUCE_MACRO_FINAL
			: private Utility::NonComparable, private Utility::NonCopyable
		{
			LUCE_MACRO_CANNOT_PARENT(RatioMul)

		public:
			typedef typename Detail::Red_<Ratio<
				(A_::Numerator * B_::Numerator),
				(A_::Denominator * B_::Denominator)
			>>::Type Type;
		};
		template<typename A_, typename B_>
		struct RatioDiv LUCE_MACRO_FINAL
			: private Utility::NonComparable, private Utility::NonCopyable
		{
			LUCE_MACRO_CANNOT_PARENT(RatioDiv)

		public:
			typedef typename Detail::Red_<Ratio<
				(A_::Numerator * B_::Denominator),
				(A_::Denominator * B_::Numerator)
				>>::Type Type;
		};

		template<typename A_, typename B_>
		struct RatioEqual LUCE_MACRO_FINAL
			: private Utility::NonComparable, private Utility::NonCopyable
		{
			LUCE_MACRO_CANNOT_PARENT(RatioEqual)

		public:
			enum
			{
				Value = (Detail::Red_<A_>::Type::Numerator ==
						 Detail::Red_<B_>::Type::Numerator) &&
						(Detail::Red_<A_>::Type::Denominator ==
						 Detail::Red_<B_>::Type::Denominator)
			};
		};
		template<typename A_, typename B_>
		struct RatioNotEqual LUCE_MACRO_FINAL
			: private Utility::NonComparable, private Utility::NonCopyable
		{
			LUCE_MACRO_CANNOT_PARENT(RatioNotEqual)

		public:
			enum
			{
				Value = !((Detail::Red_<A_>::Type::Numerator ==
				Detail::Red_<B_>::Type::Numerator) &&
						 (Detail::Red_<A_>::Type::Denominator ==
						  Detail::Red_<B_>::Type::Denominator))
			};
		};
		template<typename A_, typename B_>
		struct RatioLess LUCE_MACRO_FINAL
			: private Utility::NonComparable, private Utility::NonCopyable
		{
			LUCE_MACRO_CANNOT_PARENT(RatioLess)

		public:
			enum
			{
				Value = Detail::RedCd_<A_, B_>::AType::Numerator <
						Detail::RedCd_<A_, B_>::BType::Numerator
			};
		};
		template<typename A_, typename B_>
		struct RatioLessEqual LUCE_MACRO_FINAL
			: private Utility::NonComparable, private Utility::NonCopyable
		{
			LUCE_MACRO_CANNOT_PARENT(RatioLessEqual)

		public:
			enum
			{
				Value = Detail::RedCd_<A_, B_>::AType::Numerator <=
				Detail::RedCd_<A_, B_>::BType::Numerator
			};
		};
		template<typename A_, typename B_>
		struct RatioGreater LUCE_MACRO_FINAL
			: private Utility::NonComparable, private Utility::NonCopyable
		{
			LUCE_MACRO_CANNOT_PARENT(RatioGreater)

		public:
			enum
			{
				Value = Detail::RedCd_<A_, B_>::AType::Numerator >
				Detail::RedCd_<A_, B_>::BType::Numerator
			};
		};
		template<typename A_, typename B_>
		struct RatioGreaterEqual LUCE_MACRO_FINAL
			: private Utility::NonComparable, private Utility::NonCopyable
		{
			LUCE_MACRO_CANNOT_PARENT(RatioGreaterEqual)

		public:
			enum
			{
				Value = Detail::RedCd_<A_, B_>::AType::Numerator >=
				Detail::RedCd_<A_, B_>::BType::Numerator
			};
		};
	}

	using Luce::Numberic::Ratio;

	using Luce::Numberic::Exa;
	using Luce::Numberic::Peta;
	using Luce::Numberic::Tera;
	using Luce::Numberic::Giga;
	using Luce::Numberic::Mega;
	using Luce::Numberic::Kilo;
	using Luce::Numberic::Hecto;
	using Luce::Numberic::Deca;

	using Luce::Numberic::Atto;
	using Luce::Numberic::Femto;
	using Luce::Numberic::Pico;
	using Luce::Numberic::Nano;
	using Luce::Numberic::Micro;
	using Luce::Numberic::Milli;
	using Luce::Numberic::Centi;
	using Luce::Numberic::Deci;

	using Luce::Numberic::RatioAdd;
	using Luce::Numberic::RatioSub;
	using Luce::Numberic::RatioMul;
	using Luce::Numberic::RatioDiv;

	using Luce::Numberic::RatioLess;
	using Luce::Numberic::RatioLessEqual;
	using Luce::Numberic::RatioGreater;
	using Luce::Numberic::RatioGreaterEqual;
}

#endif