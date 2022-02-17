#include "MatrixApp.hpp"

using std::cout;
using std::cin;
using std::endl;

int main() {
    matrix::Matrix m_d(3, 3);
    cout << m_d.get(1, 1) << endl;
}