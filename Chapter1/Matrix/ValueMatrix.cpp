#include "ValueMatrix.hpp"

int ValueMatrix::test = 0;

ValueMatrix::~ValueMatrix()
{
    
}

void ValueMatrix::printMatrix()
{
    
    Matrix::printMatrix();
    cout<<"浮点数值："<<double_value;
    cout<<"-数值："<<value<<endl;
}
