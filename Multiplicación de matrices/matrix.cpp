#include <iostream>
#include <string>
#include "matrix.h"

using namespace std;

Matrix::Matrix(){}

Matrix::Matrix(vector<vector<int>> A){
	Matrix::mat = A;
	Matrix::len = Matrix::mat.at(0).size();
}

void Matrix::setMatrix(vector<vector<int>> A){
	Matrix::mat = A;
	Matrix::len = Matrix::mat.at(0).size();
}

int Matrix::getLength(){
	return Matrix::len;
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

void Matrix::multiply(Matrix B){
	B.printMatrix();
	Matrix::mat.at(0).at(0) = (Matrix::mat.at(0).at(0)) * (B.mat.at(0).at(0)); 	
}

void Matrix::split(Matrix &Q11, Matrix &Q12, Matrix &Q21, Matrix &Q22){
	vector<vector<int>> q11,q12,q21,q22; 
	vector<int>aux;
	int len = Matrix::mat.size();

	for (int row = 0; row < len; row++){
		for (int col = 0; col < len; col++){

			if (row <= ((len-1)/2) && col <= ((len-1)/2)) //q11
				aux.push_back(Matrix::mat.at(row).at(col));

			if (row <= ((len-1)/2) && col > ((len-1)/2)) // q12
				aux.push_back(Matrix::mat.at(row).at(col));

			if (row > ((len-1)/2) && col <= ((len-1)/2)) // q21
				aux.push_back(Matrix::mat.at(row).at(col));

			if (row > ((len-1)/2) && col > ((len-1)/2)) // q22
				aux.push_back(Matrix::mat.at(row).at(col));

			assignValue(q11,q12,q21,q22,aux,row,col,len);
			
			if (col == ((len-1)/2) || col == (len-1)){
				aux.clear();
			}
			
		}	
		aux.clear();
	}
	Q11.setMatrix(q11);
	Q12.setMatrix(q12);
	Q21.setMatrix(q21);
	Q22.setMatrix(q22);
}

void join(Matrix &q11, Matrix &q12, Matrix &q21, Matrix &q22){

}
    

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
	cout << "\n";
	return;
}

void assignValue(
				vector<vector<int>> &q11,
				vector<vector<int>> &q12,
				vector<vector<int>> &q21, 
				vector<vector<int>> &q22, 
				vector<int> aux, 
				int row, int col, int len){
	
	if (row <= ((len-1)/2) && col == ((len-1)/2)) //q11
		q11.push_back(aux);

	if (row <= ((len-1)/2) && col == (len-1)) // q12
		q12.push_back(aux);

	if (row > ((len-1)/2) && col == ((len-1)/2)) // q21
		q21.push_back(aux);

	if (row > ((len-1)/2) && col == (len-1)) // q22
		q22.push_back(aux);
}