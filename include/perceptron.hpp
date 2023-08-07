#pragma once

#include <cassert>
#include <functional>
#include <string>
#include <vector>

namespace my_NeuralNetwork {

struct Perceptoron {
 private:
  // 入力の個数
  int input_num;
  // 入力
  std::vector<double> input;
  // バイアス
  double bias;
  // 重み
  std::vector<double> weight;
  // 活性化関数を通す前の値
  double before_act;
  // 活性化関数を通した後の値
  double after_act;
  // 活性化関数
  std::function<double(double)> act;

 private:
  explicit Perceptoron(int _input_num, std::string act_name);

  double forward_propagation(std::vector<double> _input);
};

}  // namespace my_NeuralNetwork