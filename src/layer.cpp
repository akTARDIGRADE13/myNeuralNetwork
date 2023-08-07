#include <layer.hpp>

namespace my_NeuralNetwork {

explicit Layer::Layer(int _input_num, int _output_num, std::string act_name) {
  input_num = _input_num;
  output_num = _output_num;
  perceptron_list.assign(output_num, Perceptron(input_num, act_name));
}

std::vector<double> Layer::forward_propagation(std::vector<double> &input) {
  std::vector<double> ret(output_num);
  for (int i = 0; i < output_num; ++i) {
    ret[i] = perceptron_list[i].forward_propagation(input);
  }
  return ret;
}

} // namespace my_NeuralNetwork