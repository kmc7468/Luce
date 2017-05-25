#ifndef LUCE_HEADER_AI_PERCEPTRON_HH
#define LUCE_HEADER_AI_PERCEPTRON_HH
#include <Luce/Configuration.hh>

#include <Luce/AI/INeuron.hh>
#include <Luce/Utility/NonComparable.hh>

#include <cstddef>
#include <vector>

namespace Luce
{
	namespace AI
	{
		template<typename Elem_>
		class Perceptron LUCE_MACRO_FINAL
			: public INeuron, Utility::NonComparable
		{
			LUCE_MACRO_CANNOT_PARENT(Preceptron)

		private:
			typedef Perceptron<Elem_> My_;

		public:
			Perceptron(const std::size_t& input_size);
			Perceptron(const My_& neuron);
#if LUCE_MACRO_SUPPORTED_RVALUE_REF
			Perceptron(My_&& neuron) LUCE_MACRO_NOEXCEPT;
#endif

		public:
			My_& operator=(const My_& neuron);
#if LUCE_MACRO_SUPPORTED_RVALUE_REF
			My_& operator=(My_&& neuron) LUCE_MACRO_NOEXCEPT;
#endif

		public:
			std::vector<Elem_> Weights;
			Elem_ Bias;
		};
	}
}

#include <Luce/Internal/AI/Perceptron_.hh>
#endif