#ifndef LUCE_HEADER_AI_AIOBJECT_HH
#define LUCE_HEADER_AI_AIOBJECT_HH

#include <Luce/Utility/NonComparable.hh>

namespace Luce
{
	namespace AI
	{
		class AIObject
			: Utility::NonComparable
		{
		public:
			virtual ~AIObject();

		protected:
			AIObject();
		};
	}
}

#if !defined(LUCE_MACRO_LINKING_AI) && LUCE_MACRO_IS_MSVC
#define LUCE_MACRO_LINKING_AI
#pragma comment(lib, "Luce-AI.lib")
#endif
#endif