#ifndef LUCE_HEADER_AI_LAYER_HH
#define LUCE_HEADER_AI_LAYER_HH
#include <Luce/Configuration.hh>

#include <Luce/AI/Perceptron.hh>

namespace Luce
{
	namespace AI
	{
		template<typename Elem_, template<typename> class Neuron_ = Perceptron>
		class Layer
		{
		public:
			virtual ~Layer();
		};
	}
}

#include <Luce/Internal/AI/Layer_.hh>
#endif