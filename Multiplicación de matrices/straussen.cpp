#include <bits/stdc++.h>
#include "matrix.h"

using namespace std;

int main() {
  vector<vector<int>> A, B;
  A = {
    {2,2,3},
    {2,6,3},
    {8,2,3},
  };

  B = {
    {1,2,3},
    {2,6,3},
    {8,2,3},
  };

  Matrix MatA(A), MatB(B), MatC, MatD;
  MatC = MatA + MatB;
  MatD = MatA - MatB;

  return 0;
}

/*Matrix strassenmtd(Matrix A, Matrix B){
  
}*/
