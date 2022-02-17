#include "SimpleCalc.hpp"

using std::cout;
using std::cin;
using std::endl;

int main() {
    simple::SimpleCalculator calc(-0.71, 1.17);
    cout << "> compute(5.42)  =  " << calc.compute(5.42) << endl;

    cout << endl << endl;

    double results[10];
    calc.step_compute(5.1, 6, results);
    for (double result : results) {
        cout << "> step_compute(5.1, 6)  =  " << result << endl;
    }
}