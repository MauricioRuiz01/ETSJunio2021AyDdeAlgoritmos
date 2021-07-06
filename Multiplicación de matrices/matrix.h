// matrix.h - Matrix class declaration
#if !defined(_MATRIX_H_)
#define _MATRIX_H_
#define is_power2(X)  (((X&(X-1)) != 0) ? (false) : (true))
#include <string>
#include <vector>

class Matrix
{
private:
    std::vector<std::vector<int>> mat;
    int len;
public:
    Matrix();
    Matrix(std::vector<std::vector<int>> A);
    void setMatrix(std::vector<std::vector<int>> A);
    Matrix operator+(const Matrix B);
    Matrix operator-(const Matrix B);
    void split(Matrix &q11, Matrix &q12, Matrix &q21, Matrix &q22);
    void join(Matrix &q11, Matrix &q12, Matrix &q21, Matrix &q22);
    void multiply(Matrix B);
    void printMatrix();
    int getLength();
};

void assignValue(std::vector<std::vector<int>> &q11,std::vector<std::vector<int>> &q12,
    std::vector<std::vector<int>> &q21, 
    std::vector<std::vector<int>> &q22,
    std::vector<int> aux, int row, int col, int len);

#endif // _MATRIX_H_
