#ifndef LUCE_HEADER_FUNCTIONAL_FUNCTION_HH
#define LUCE_HEADER_FUNCTIONAL_FUNCTION_HH
#include <Luce/Configuration.hh>

#include <Luce/Utility/NonComparable.hh>
#include <Luce/Utility/NonCopyable.hh>

#include <cstddef>

namespace Luce
{
	namespace Functional
	{
		namespace Detail
		{
			template<typename Result_>
			struct GetResultType_;
			template<typename Result_>
			struct GetResultType_<Result_()> LUCE_MACRO_FINAL
				: private Utility::NonComparable, private Utility::NonCopyable
			{
				LUCE_MACRO_CANNOT_PARENT(GetResultType_)

			public:
				typedef Result_ Type;
			};
			template<typename Result_, typename Param_>
			struct GetResultType_<Result_(Param_)> LUCE_MACRO_FINAL
				: private Utility::NonComparable, private Utility::NonCopyable
			{
				LUCE_MACRO_CANNOT_PARENT(GetResultType_)

			public:
				typedef Result_ Type;
			};

			template<typename Result_>
			struct GetParameterType_;
			template<typename Result_>
			struct GetParameterType_<Result_()> LUCE_MACRO_FINAL
				: private Utility::NonComparable, private Utility::NonCopyable
			{
				LUCE_MACRO_CANNOT_PARENT(GetParameterType_)

			public:
				typedef void Type0;
			};
			template<typename Result_, typename Param0_>
			struct GetParameterType_<Result_(Param0_)> LUCE_MACRO_FINAL
				: private Utility::NonComparable, private Utility::NonCopyable
			{
				LUCE_MACRO_CANNOT_PARENT(GetParameterType_)

			public:
				typedef Param0_ Type0;
			};
			template<typename Result_, typename Param0_, typename Param1_>
			struct GetParameterType_<Result_(Param0_, Param1_)> LUCE_MACRO_FINAL
				: private Utility::NonComparable, private Utility::NonCopyable
			{
				LUCE_MACRO_CANNOT_PARENT(GetParameterType_)

			public:
				typedef Param0_ Type0;
				typedef Param1_ Type1;
			};
			template<typename Result_, typename Param0_, typename Param1_,
				typename Param2_>
				struct GetParameterType_<Result_(Param0_, Param1_, Param2_)> LUCE_MACRO_FINAL
				: private Utility::NonComparable, private Utility::NonCopyable
			{
				LUCE_MACRO_CANNOT_PARENT(GetParameterType_)

			public:
				typedef Param0_ Type0;
				typedef Param1_ Type1;
				typedef Param2_ Type2;
			};
			template<typename Result_, typename Param0_, typename Param1_,
				typename Param2_, typename Param3_>
				struct GetParameterType_<Result_(Param0_, Param1_, Param2_,
												 Param3_)> LUCE_MACRO_FINAL
				: private Utility::NonComparable, private Utility::NonCopyable
			{
				LUCE_MACRO_CANNOT_PARENT(GetParameterType_)

			public:
				typedef Param0_ Type0;
				typedef Param1_ Type1;
				typedef Param2_ Type2;
				typedef Param3_ Type3;
			};
			template<typename Result_, typename Param0_, typename Param1_,
				typename Param2_, typename Param3_, typename Param4_>
				struct GetParameterType_<Result_(Param0_, Param1_, Param2_,
												 Param3_, Param4_)> LUCE_MACRO_FINAL
				: private Utility::NonComparable, private Utility::NonCopyable
			{
				LUCE_MACRO_CANNOT_PARENT(GetParameterType_)

			public:
				typedef Param0_ Type0;
				typedef Param1_ Type1;
				typedef Param2_ Type2;
				typedef Param3_ Type3;
				typedef Param4_ Type4;
			};
			template<typename Result_, typename Param0_, typename Param1_,
				typename Param2_, typename Param3_, typename Param4_,
				typename Param5_>
				struct GetParameterType_<Result_(Param0_, Param1_, Param2_,
												 Param3_, Param4_, Param5_)> LUCE_MACRO_FINAL
				: private Utility::NonComparable, private Utility::NonCopyable
			{
				LUCE_MACRO_CANNOT_PARENT(GetParameterType_)

			public:
				typedef Param0_ Type0;
				typedef Param1_ Type1;
				typedef Param2_ Type2;
				typedef Param3_ Type3;
				typedef Param4_ Type4;
				typedef Param5_ Type5;
			};
			template<typename Result_, typename Param0_, typename Param1_,
				typename Param2_, typename Param3_, typename Param4_,
				typename Param5_, typename Param6_>
				struct GetParameterType_<Result_(Param0_, Param1_, Param2_,
												 Param3_, Param4_, Param5_,
												 Param6_)> LUCE_MACRO_FINAL
				: private Utility::NonComparable, private Utility::NonCopyable
			{
				LUCE_MACRO_CANNOT_PARENT(GetParameterType_)

			public:
				typedef Param0_ Type0;
				typedef Param1_ Type1;
				typedef Param2_ Type2;
				typedef Param3_ Type3;
				typedef Param4_ Type4;
				typedef Param5_ Type5;
				typedef Param6_ Type6;
			};
			template<typename Result_, typename Param0_, typename Param1_,
				typename Param2_, typename Param3_, typename Param4_,
				typename Param5_, typename Param6_, typename Param7_>
				struct GetParameterType_<Result_(Param0_, Param1_, Param2_,
												 Param3_, Param4_, Param5_,
												 Param6_, Param7_)> LUCE_MACRO_FINAL
				: private Utility::NonComparable, private Utility::NonCopyable
			{
				LUCE_MACRO_CANNOT_PARENT(GetParameterType_)

			public:
				typedef Param0_ Type0;
				typedef Param1_ Type1;
				typedef Param2_ Type2;
				typedef Param3_ Type3;
				typedef Param4_ Type4;
				typedef Param5_ Type5;
				typedef Param6_ Type6;
				typedef Param7_ Type7;
			};
			template<typename Result_, typename Param0_, typename Param1_,
				typename Param2_, typename Param3_, typename Param4_,
				typename Param5_, typename Param6_, typename Param7_,
				typename Param8_>
				struct GetParameterType_<Result_(Param0_, Param1_, Param2_,
												 Param3_, Param4_, Param5_,
												 Param6_, Param7_, Param8_)> LUCE_MACRO_FINAL
				: private Utility::NonComparable, private Utility::NonCopyable
			{
				LUCE_MACRO_CANNOT_PARENT(GetParameterType_)

			public:
				typedef Param0_ Type0;
				typedef Param1_ Type1;
				typedef Param2_ Type2;
				typedef Param3_ Type3;
				typedef Param4_ Type4;
				typedef Param5_ Type5;
				typedef Param6_ Type6;
				typedef Param7_ Type7;
				typedef Param8_ Type8;
			};
			template<typename Result_, typename Param0_, typename Param1_,
				typename Param2_, typename Param3_, typename Param4_,
				typename Param5_, typename Param6_, typename Param7_,
				typename Param8_, typename Param9_>
				struct GetParameterType_<Result_(Param0_, Param1_, Param2_,
												 Param3_, Param4_, Param5_,
												 Param6_, Param7_, Param8_,
												 Param9_)> LUCE_MACRO_FINAL
				: private Utility::NonComparable, private Utility::NonCopyable
			{
				LUCE_MACRO_CANNOT_PARENT(GetParameterType_)

			public:
				typedef Param0_ Type0;
				typedef Param1_ Type1;
				typedef Param2_ Type2;
				typedef Param3_ Type3;
				typedef Param4_ Type4;
				typedef Param5_ Type5;
				typedef Param6_ Type6;
				typedef Param7_ Type7;
				typedef Param8_ Type8;
				typedef Param9_ Type9;
			};
		}

		template<typename Ty_>
		class Function
		{
		public:
			typedef typename Detail::GetResultType_<Ty_>::Type ReturnType;
		
		private:
			typedef Function<Ty_> My_;
		};
	}

	using Luce::Functional::Function;
}

#endif