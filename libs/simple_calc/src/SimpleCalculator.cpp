#include "SimpleCalculator.hpp"
#include <cmath>

using std::pow;
using std::cos;
using std::exp;

namespace simple {
    SimpleCalculator::SimpleCalculator(const double& a_, const double& b_)
        : a(a_)
        , b(b_)
    {}

    double SimpleCalculator::compute(const double& x) const {
        return pow(x, a * cos(2 * x)) - 1 / exp(b * pow(x, 2));
    }

    void SimpleCalculator::step_compute(const double& x1, const double& x2, double* result) const {
        double step_weight = (x2 - x1) / 10;
        int steps = 10;

        for (int i = 0; i < steps; i++) {
            result[i] = compute(x1 + (step_weight * i));
        }
    }
}