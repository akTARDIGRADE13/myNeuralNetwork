#pragma once

#include "perceptron.hpp"

#include <string>
#include <vector>

namespace my_NeuralNetwork {

struct Layer {
private:
  // 入力の個数
  int input_num;
  // パーセプトロン
  std::vector<Perceptron> perceptron_list;

public:
  // 出力の個数
  int output_num;

public:
  explicit Layer(int _input_num, int _output_num, std::string act_name);

  std::vector<double> forward_propagation(std::vector<double> &input);
};

} // namespace my_NeuralNetwork