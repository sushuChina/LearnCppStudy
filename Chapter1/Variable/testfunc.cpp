#include "testfunc.hpp"

testfunc::testfunc(/* args */)
{
}

testfunc::~testfunc()
{
}

void testfunc::initializationVariables()
{
    int a;     // no initializer (default initialization)
    int b = 5; // initial value after equals sign (copy initialization)
    int c(6);  // initial value in parenthesis (direct initialization)
    /*
        Direct initialization is also used when values are explicitly cast to another type.
        One of the reasons direct initialization had fallen out of favor is because it makes it hard to differentiate variables from functions. For example:

        int x();  // forward declaration of function x
        int x(0); // definition of variable x with initializer 0
    */

    // List initialization methods (C++11) (preferred)
    int d{7};    // initial value in braces (direct list initialization)
    int e = {8}; // initial value in braces after equals sign (copy list initialization)
    int f{};     // initializer is empty braces (value initialization)
    double g{1.2};

    ValueMatrix myMatrix1(d, b, c);
    ValueMatrix myMatrix2(d, e);
    ValueMatrix myMatrix3;
    ValueMatrix myMatrix4(d, b, g);

    myMatrix1.printMatrix();
    myMatrix2.printMatrix();
    myMatrix3.printMatrix();
    myMatrix4.printMatrix();
}

void testfunc::testNewlineCharacter()
{
    // 第一种输出方法
    std::cout << "姓名：郑盼盼" << std::endl
              << "性别：女" << std::endl
              << "年龄：29" << std::endl
              << "身高：165" << std::endl
              << "体重：49kg" << std::endl; // 使用stdendl换行，但是每次换行都刷新缓存区
    // 第二种输出方法
    std::cout << "姓名：苏明舒" << '\n'
              << "性别：男" << '\n'
              << "年龄：28" << '\n'
              << "身高：172" << '\n'
              << "体重：90kg" << std::endl; // 使用\n换行，不刷新缓存区，最后的std::endl表示此行输出完毕
}

int testfunc::testCin()
{
    std::cout << "Enter three number separated by a space:: "; // ask user for a number

    int x{}; // define variable x to hold user input (and value-initialize it)
    int y{};
    int z{};
    std::cin >> x >> y >> z; // get number from keyboard and store it in variable x

    std::cout << "You entered " << x << ","
              << y << ",and"
              << z << std::endl;
    return 0;
}