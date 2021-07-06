#include <bits/stdc++.h>
#include "matrix.h"

using namespace std;

Matrix strassenmtd(Matrix A, Matrix B);

int main() {
  vector<vector<int>> A, B;
  A = {
    {2,2,3,3},
    {2,6,3,3},
    {8,2,4,3},
    {2,6,3,9},
  };

  B = {
    {1,2,3,3},
    {2,6,3,3},
    {8,2,3,3},
    {2,6,3,3},
  };

  Matrix MatA(A), MatB(B), MatC, MatD;
  MatC = MatA + MatB;
  MatD = MatA - MatB;
  MatA.printMatrix();
  cout << " Esta es la logitud " << MatA.getLength() << endl;

  strassenmtd(MatA,MatB);

  return 0;
}

Matrix strassenmtd(Matrix A, Matrix B){  
    if (A.getLength() == 1){
      A.multiply(B);
      return A; 
    }

    Matrix a, b, c, d;
    Matrix e, f, g, h;

    Matrix p1 = strassenmtd(a, f - h);
    Matrix p2 = strassenmtd(a + b, h);
    Matrix p3 = strassenmtd(c + d, e);
    Matrix p4 = strassenmtd(d, g - e);
    Matrix p5 = strassenmtd(a + d, e + h);
    Matrix p6 = strassenmtd(b - d, g + h);
    Matrix p7 = strassenmtd(a - c, e + f);
    
    Matrix c11 = p5 + p4 - p2 + p6; 
    Matrix c12 = p1 + p2; 
    Matrix c21 = p3 + p4; 
    Matrix c22 = p1 + p5 - p3 - p7; 

    c11.printMatrix();
    c12.printMatrix();
    c21.printMatrix();
    c22.printMatrix();

    return c11;
}