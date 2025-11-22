#ifndef MATRIX_H
#define MATRIX_H
#include <iostream>
#include <vector>
using namespace std;
class Matrix{
public:
    Matrix(int rows, int cols);
    ~Matrix();
    friend istream& operator>>(istream& in, Matrix& matrix);
    friend ostream& operator<<(ostream& os, const Matrix& matrix);
    Matrix operator*(const Matrix&other) const;
private:
    int rows;
    int cols;
    vector<vector<int>> data;
};
#endif