// matrix.h - Matrix class declaration
#if !defined(_MATRIX_H_)
#define _MATRIX_H_
#include <string>
#include <vector>

class Matrix
{
private:
    std::vector<std::vector<int>> mat;
    struct quadrants{
        Matrix *q11;
        Matrix *q12;
        Matrix *q21;
        Matrix *q22;
    };
public:
    Matrix();
    Matrix(std::vector<std::vector<int>> A);
    Matrix operator+(const Matrix B);
    Matrix operator-(const Matrix B);
    quadrants split();
    void printMatrix();
};

#endif // _MATRIX_H_
