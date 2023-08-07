#include "optimizer.hpp"

namespace my_NeuralNetwork {

Optimizer::Optimizer(std::vector<Layer> &_layers, double _learning_rate)
    : layers(_layers), learning_rate(_learning_rate) {}

void Optimizer::back_propagation(std::vector<double> &input,
                        std::vector<double> &error_gradient){
                          
                        }

} // namespace my_NeuralNetwork