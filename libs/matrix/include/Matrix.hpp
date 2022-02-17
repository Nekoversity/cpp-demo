#ifndef __MATRIX_LIB__

#define __MATRIX_LIB__

#include <iostream>
#include <vector>

using std::vector;

namespace matrix {
    class Matrix {
    private:
        unsigned m_rows;
        unsigned m_cols;
        vector<vector<double>> m_data;
    public:
        Matrix(const unsigned& rows = 3, const unsigned& cols = 3);

        const double& get(const unsigned&, const unsigned&) const;
        double& get(const unsigned&, const unsigned&);
        void set(const unsigned&, const unsigned&, const double&);
    };
}

#endif  // __MATRIX_LIB__