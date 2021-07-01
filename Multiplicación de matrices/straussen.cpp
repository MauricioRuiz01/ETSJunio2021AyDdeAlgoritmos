#include <bits/stdc++.h>
#define MATRIX_LENGTH 4

using namespace std;

/**
 * TODO: throw error for bad initialization
 * TODO: refactor crate another file for matrix class
*/

class matrix{
private:
  int row;
  vector<vector<int>> Mat;
public:
  matrix(){
  }
  matrix(vector<vector<int>> M){
    Mat = M;
    row = Mat.size();
  }
  matrix operator+(const matrix& B) {
    vector<vector<int>> result;
    vector<int> aux;
    vector<int> rowA;
    vector<int> rowB;
    for (size_t i = 0; i < row; i++){
      rowA = Mat.at(i); rowB = B.Mat.at(i);
      for (size_t j = 0; j < Mat.at(0).size(); j++){
        aux.push_back(rowA.at(j) + rowB.at(j));
      }
      result.push_back(aux);
      aux.clear();
    }
    matrix res(result);
    return res;
  }

};

int main() {
  vector<vector<int>> A;
  A = {
    {2,2,3},
    {2,6,3},
    {8,2,3},
    {8,2,3},
  };
  return 0;
}

/**
 * ? Create a split function or use overload operators
 * ? for divide matrices
*/
vector<vector<int>> strassenmtd(vector<vector<int>>A, vector<vector<int>>B){
  /*if (A.size() == 1) {  
    return A*B
  }*/
  
}
