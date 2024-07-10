#ifndef MATRIX_HPP
#define MATRIX_HPP //为避免重复包含头文件的标准写法，也可用#pragma once

#include <iostream>

using namespace std;

class Matrix
{
private:
    /* data */
    int x;
    int y;
  
public:    
    
    Matrix(int _x,int _y/* args */):x(_x),y(_y){}; //Matrix的构造函数，‘: x(_x), y(_y)’ 这部分是构造函数的初始化列表
    Matrix(); //重载的构造函数声明
    ~Matrix(); //Matrix的析构函数
    
    void printMatrix();

};

#endif
