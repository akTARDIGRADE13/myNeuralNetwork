#include <activation_function.hpp>
#include <perceptron.hpp>

namespace my_NeuralNetwork {

Perceptron::Perceptron(int _input_num, std::string act_name)
    : input_num(_input_num) {
  bias = 0;
  weight.assign(input_num, 0);
  if (act_name == "sigmoid") {
    act = ActivationFunction::sigmoid;
    act_d = ActivationFunction::sigmoid_d;
  } else if (act_name == "ReLU") {
    act = ActivationFunction::ReLU;
    act_d = ActivationFunction::ReLU_d;
  } else if (act_name == "tanh") {
    act = ActivationFunction::tangent_hyperbolic;
    act = ActivationFunction::tangent_hyperbolic_d;
  } else {
    assert(false);
  }
}

double Perceptron::forward_propagation(std::vector<double> &_input) {
  input = _input;

  before_act = bias;
  for (int i = 0; i < input_num; ++i) {
    before_act += weight[i] * input[i];
  }
  after_act = act(before_act);

  return after_act;
}

} // namespace my_NeuralNetwork
