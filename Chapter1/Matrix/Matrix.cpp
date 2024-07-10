#include"Matrix.hpp"

Matrix::Matrix()
{
    x = 0;
    y = 0;
}// 重载的构造函数的定义

Matrix::~Matrix()
{
  
}

void Matrix::printMatrix()
{
    cout<<"行序列x:"<<x<<"-列序列y:"<<y<<endl;
}
