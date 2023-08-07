#include <activation_function.hpp>

namespace ActivationFunction {

double sigmoid(double num) { return 1 / (1 + exp(-num)); }

double sigmoid_d(double num) { return (1 - sigmoid(num)) * sigmoid(num); }

double ReLU(double num) { return std::max(double(0), num); }

double ReLU_d(double num) { return (num >= 0) ? 1 : 0; }

double tangent_hyperbolic(double num) { return tanh(num); }

double tangent_hyperbolic_d(double num) { return 1 / cosh(num); }

}  // namespace ActivationFunction
