#include <iostream>
#include "SimpleCalculator.cpp"

using std::cout;
using std::cin;
using std::endl;

int main() {
    calculator::SimpleCalculator calc(-0.71, 1.17);
    cout << "compute() RESULT: " << calc.compute(5.42) << endl;

    cout << endl << "===================" << endl << endl;

    double results[10];
    calc.step_compute(5.1, 6, results);
    for (double result : results) {
        cout << "step_compute() RESULT: " << result << endl;
    }

    cout << endl << "===================" << endl << endl;
    calc.tabulate(5.1, 6);
}
