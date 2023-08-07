#include <activation_function.hpp>

namespace ActivationFunction {

double sigmoid(double num) { return 1 / (1 + exp(-num)); }

double sigmoid_d(double num) { return (1 - sigmoid(num)) * sigmoid(num); }

} // namespace ActivationFunction
