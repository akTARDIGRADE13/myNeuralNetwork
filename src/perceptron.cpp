#include <perceptron.hpp>
#include <activation_function.hpp>

namespace my_NeuralNetwork {

Perceptoron::Perceptoron(int _input_num, std::string act_name) : input_num(_input_num){
  bias = 0;
  weight.assign(input_num,0);
  if (act_name == "sigmoid") {
    act = ActivationFunction::sigmoid;
  } else if (act_name == "ReLU") {
    act = ActivationFunction::ReLU;
  } else if (act_name == "tanh") {
    act = ActivationFunction::tangent_hyperbolic;
  } else{
    assert(false);
  }
} 

double Perceptoron::forward_propagation(std::vector<double> &_input){
  input = _input;

  before_act = bias;
  for (int i = 0; i < input_num; ++i){
    before_act += weight[i]*input[i];
  }
  after_act = act(before_act);
  
  return after_act;
}

}  // namespace my_NeuralNetwork
