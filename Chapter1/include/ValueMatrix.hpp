#ifndef VALUE_MATRIX_HPP
#define VALUE_MATRIX_HPP //为避免重复包含头文件的标准写法，也可用#pragma once

#include "Matrix.hpp"

//对父类Matrix进行共有派生
//ValueMatrix拥有Matrix的所有成员变量，但是只能调用public的属性与函数
class  ValueMatrix:public Matrix
{
    private:
    //子类拥有父类所有的成员变量
    //声明自己特有的变量
        static int test;
        int value{0};
        double double_value{0.0};

    public:
        //构造函数
        ValueMatrix():ValueMatrix(0,0){};
        ValueMatrix(int _x,int _y):ValueMatrix(_x,_y,0){};//函数重载，根据函数输入的参数不同调用不同的函数
        ValueMatrix(int _x,int _y,int _value):Matrix(_x,_y),value(_value){};//函数重载，根据函数输入的参数不同调用不同的函数
        ValueMatrix(int _x,int _y,double double_value):Matrix(_x,_y),double_value(double_value){};//函数重载，也可以根据输入参数类型进行重载
        ~ValueMatrix();
        //成员函数
        int getValue(){return value;};
        void printMatrix();
    
        
};

#endif