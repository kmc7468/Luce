#ifndef LUCE_HEADER_UTILITY_PROPERTY_HH
#define LUCE_HEADER_UTILITY_PROPERTY_HH
#include <Luce/Configuration.hh>

#include <Luce/Utility/NonComparable.hh>
#include <Luce/Utility/NonCopyable.hh>

#define LUCE_MACRO_PROPERTY(type, name, getter, setter)								\
class LUCE_MACRO_FINAL																\
	: Luce::Utility::NonComparable													\
{																					\
public:																				\
	void operator=(const type& value)												\
	{																				\
		setter																		\
	}																				\
	operator type() const															\
	{																				\
		getter																		\
	}																				\
																					\
private:																			\
	type Value_;																	\
} name

#define LUCE_MACRO_GET return Value_;
#define LUCE_MACRO_SET Value_ = value;

#endif