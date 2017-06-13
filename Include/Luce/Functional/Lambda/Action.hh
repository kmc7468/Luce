#ifndef LUCE_HEADER_FUNCTIONAL_LAMBDA_ACTION_HH
#define LUCE_HEADER_FUNCTIONAL_LAMBDA_ACTION_HH
#include <Luce/Configuration.hh>

#include <Luce/Utility/NonComparable.hh>

namespace Luce
{
	namespace Functional
	{
		namespace Lambda
		{
#define LUCE_MACRO_I_ACTION_DEFINE(name, algorithm)					\
template<typename A_, typename B_>									\
struct name##_ LUCE_MACRO_FINAL										\
	: Utility::NonComparable										\
{																	\
	LUCE_MACRO_CANNOT_PARENT(name)									\
																	\
public:																\
	template<typename Result_>										\
	Result_ Do(const A_& a, const B_& b)							\
	{																\
		return algorithm;											\
	}																\
};
#define LUCE_MACRO_I_ACTION(name) Luce::Functional::Lambda::Detail::name##_

			namespace Detail
			{
				LUCE_MACRO_I_ACTION_DEFINE(AddAction, a + b);
				LUCE_MACRO_I_ACTION_DEFINE(SubAction, a - b);
				LUCE_MACRO_I_ACTION_DEFINE(MulAction, a * b);
				LUCE_MACRO_I_ACTION_DEFINE(DivAction, a / b);
				LUCE_MACRO_I_ACTION_DEFINE(ModAction, a % b);
				LUCE_MACRO_I_ACTION_DEFINE(LAndAction, a && b);
				LUCE_MACRO_I_ACTION_DEFINE(LOrAction, a || b);
				LUCE_MACRO_I_ACTION_DEFINE(AndAction, a & b);
				LUCE_MACRO_I_ACTION_DEFINE(OrAction, a | b);
				LUCE_MACRO_I_ACTION_DEFINE(XorAction, a ^ b);
				LUCE_MACRO_I_ACTION_DEFINE(BiggerAction, a > b);
				LUCE_MACRO_I_ACTION_DEFINE(BigEqualAction, a >= b);
				LUCE_MACRO_I_ACTION_DEFINE(SmallerAction, a < b);
				LUCE_MACRO_I_ACTION_DEFINE(SmallEqualAction, a <= b);
				LUCE_MACRO_I_ACTION_DEFINE(LShiftAction, a << b);
				LUCE_MACRO_I_ACTION_DEFINE(RShiftAction, a >> b);
			}
		}
	}
}

#endif