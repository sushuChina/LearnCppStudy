#include <iostream>

#include "testfunc.hpp"//自己创建的文件一般在最前面包含，以免对系统的头文件重复包含
#include "ValueMatrix.hpp" 


int main()
{
    testfunc myTestFunc;
    
    myTestFunc.testCin();
    return 0;
}
