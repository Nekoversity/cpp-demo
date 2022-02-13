#include <iostream>
#include "SimpleCalculator.cpp"

using std::cout;
using std::cin;
using std::endl;

int main() {
    calculator::SimpleCalculator calc(-0.71, 1.17);
    cout << "RESULT: " << calc.compute(5.42) << endl;
}
