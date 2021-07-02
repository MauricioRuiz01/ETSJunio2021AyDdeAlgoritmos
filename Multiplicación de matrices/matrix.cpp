#include <iostream>
#include <string>
#include "matrix.h"

using namespace std;

Matrix::Matrix(){}

Matrix::Matrix(vector<vector<int>> A){
    Matrix::mat = A;
}

Matrix Matrix::operator+(const Matrix B){
    vector<vector<int>> result;
    vector<int> aux, rowA, rowB;
    int len = Matrix::mat.size();

    for (int i = 0; i < len; i++){
      rowA = Matrix::mat.at(i); rowB = B.Matrix::mat.at(i);
      for (int j = 0; j < len; j++){
        aux.push_back(rowA.at(j) + rowB.at(j));
      }
      result.push_back(aux);
      aux.clear();
    }
    Matrix res(result);
    return res;
}

Matrix Matrix::operator-(const Matrix B){
    vector<vector<int>> result;
    vector<int> aux, rowA, rowB;
    int len = Matrix::mat.size();

    for (int i = 0; i < len; i++){
      rowA = Matrix::mat.at(i); rowB = B.Matrix::mat.at(i);
      for (int j = 0; j < len; j++){
        aux.push_back(rowA.at(j) - rowB.at(j));
      }
      result.push_back(aux);
      aux.clear();
    }
    Matrix res(result);
    return res;
}
/**
 * TODO:Create split function for each object
 * return quadrants typedef with pointers to
 * four matrix objects 
quadrants Matrix::split(){ 

    return;
}*/

void Matrix::printMatrix(){ 
    int len = Matrix::mat.size();
    vector<int> row;
    for (int i = 0; i < len; i++){
        row = Matrix::mat.at(i);
        for (int j = 0; j < len; j++){
            cout << " " << row.at(j) << " ";           
        }   
        cout << "\n"; 
        row.clear();
    }   
    return;
}