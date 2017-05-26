#ifndef LUCE_HEADER_AI_LAYER_HH
#define LUCE_HEADER_AI_LAYER_HH
#include <Luce/Configuration.hh>

#include <Luce/AI/AIObject.hh>

namespace Luce
{
	namespace AI
	{
		template<typename Elem_>
		class Layer : public AIObject
		{
		public:
			virtual ~Layer();
		};
	}
}

#include "Detail/Layer.hh"
#endif