#include "SimpleCalculator.hpp"
#include <cmath>

using std::pow;
using std::cos;
using std::exp;

namespace calculator {
    SimpleCalculator::SimpleCalculator(const double& a_, const double& b_)
        : a(a_)
        , b(b_)
    {}

    double SimpleCalculator::compute(const double& x) const {
        return pow(x, a * cos(2 * x)) - 1 / exp(b * pow(x, 2));
    }
}