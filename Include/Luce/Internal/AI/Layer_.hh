#ifndef LUCE_HEADER_INTERNAL_AI_LAYER__HH
#define LUCE_HEADER_INTERNAL_AI_LAYER__HH

namespace Luce
{
	namespace AI
	{
		template<typename Elem_, template<typename> class Neuron_>
		Layer<Elem_, Neuron_>::~Layer()
		{}
	}
}

#endif