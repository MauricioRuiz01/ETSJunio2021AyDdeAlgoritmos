#include <bits/stdc++.h>
#include "matrix.h"

using namespace std;

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
  Matrix q11, q12, q21, q22;
  MatA.split(q11, q12, q21, q22);

  q11.printMatrix();
  q12.printMatrix();
  q21.printMatrix();
  q22.printMatrix();
  
  return 0;
}
