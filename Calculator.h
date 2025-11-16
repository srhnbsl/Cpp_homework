#ifndef CALCULATOR_H
#define CALCULATOR_H
#include <stdexcept>//处理除数等于0的报错
//类
class Calculator{
    public:
    double add(double a,double b);// 双精度浮点数（整数、小数）
    double subtract(double a,double b);
    double multiply(double a,double b);
    double divide(double a,double b);
};
#endif//CALCULATOR_H