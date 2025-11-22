#include "matrix.hpp"
#include <iostream>
#include <vector>
using namespace std;
Matrix::Matrix(int a,int b):rows(a),cols(b),data(rows,vector<int>(cols,0))
{}
Matrix::~Matrix(){
}
istream& operator>>(istream& in, Matrix& matrix){
    for(int i=0;i<matrix.rows;i++){
        for(int j=0;j<matrix.cols;j++){
            in>>matrix.data[i][j];
        }
    }
    return in;
}
ostream& operator<<(ostream& os, const Matrix& matrix){
    if(matrix.rows==0||matrix.cols==0){
        os<<"空矩阵"<<endl;
        return os;
    }
    os<<"A*B= \n";
    for(int i=0;i<matrix.rows;i++){
        for(int j=0;j<matrix.cols;j++){
            os<<matrix.data[i][j]<<" ";
        }
        os<<"\n";
    }
    os<<endl;
    return os;
}
Matrix Matrix::operator*(const Matrix& other)const{
    if (cols!=other.rows) {
        cerr<<"不行"<<endl;
        return Matrix(0,0);
    }
    Matrix a(rows,other.cols);
    for(int i=0;i<rows;i++){
        for(int j=0;j<other.cols;j++){
            for(int k=0;k<cols;k++){
                a.data[i][j]+=data[i][k]*other.data[k][j];
            }
        }
    }
    return a;
}
int main(){
    int rows, cols;
    cin >> rows >> cols;
    Matrix A(rows, cols);
    cin >> A;
    cin >> rows >> cols;
    Matrix B(rows, cols);
    cin >> B;
    cout << A*B;
    return 0;
}