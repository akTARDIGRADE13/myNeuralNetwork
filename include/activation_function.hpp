#pragma once

#include <algorithm>
#include <cmath>

namespace ActivationFunction {

double sigmoid(double num);

double sigmoid_d(double num);

double ReLU(double num);

double ReLU_d(double num);

double tangent_hyperbolic(double num);

double tangent_hyperbolic_d(double num);

}  // namespace ActivationFunction