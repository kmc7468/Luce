#ifndef LUCE_HEADER_INTERNAL_AI_PERCEPTRON__HH
#define LUCE_HEADER_INTERNAL_AI_PERCEPTRON__HH

#if LUCE_MACRO_SUPPORTED_RVALUE_REF
#include <utility>
#endif

namespace Luce
{
	namespace AI
	{
		template<typename Elem_>
		Perceptron<Elem_>::Perceptron(const std::size_t& input_size)
		{
			Weights.resize(input_size);
			Bias = Elem_(0);
		}
		template<typename Elem_>
		Perceptron<Elem_>::Perceptron(const My_& neuron)
		{
			Weights = neuron.Weights;
			Bias = neuron.Bias;
		}
#if LUCE_MACRO_SUPPORTED_RVALUE_REF
		template<typename Elem_>
		Perceptron<Elem_>::Perceptron(My_&& neuron) LUCE_MACRO_NOEXCEPT
		{
			Weights = std::move(neuron.Weights);
			Bias = std::move(neuron.Bias);
		}
#endif

		template<typename Elem_>
		Perceptron<Elem_>& Perceptron<Elem_>::operator=(const My_& neuron)
		{
			Weights = neuron.Weights;
			Bias = neuron.Bias;

			return *this;
		}
#if LUCE_MACRO_SUPPORTED_RVALUE_REF
		template<typename Elem_>
		Perceptron<Elem_>& Perceptron<Elem_>::operator=(My_&& neuron) LUCE_MACRO_NOEXCEPT
		{
			Weights = std::move(neuron.Weights);
			Bias = std::move(neuron.Bias);

			return *this;
		}
#endif
	}
}

#endif