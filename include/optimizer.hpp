#pragma once

#include "layer.hpp"

#include <vector>

namespace my_NeuralNetwork {

struct Optimizer {
private:
  // 層
  std::vector<Layer> &layers;
  // 学習率
  double learning_rate;
  // 結果を記録しておく
  std::vector<std::vector<double>> calc_result;

public:
  Optimizer(std::vector<Layer> &_layers, double _learning_rate);

  void back_propagation(std::vector<double> &input,
                        std::vector<double> &error_gradient);

private:
  void calc_d(int layerNo, int perceptronNo,
              std::vector<double> &error_gradient);
};

} // namespace my_NeuralNetwork