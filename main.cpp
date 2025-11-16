#include <iostream>
#include "../include/Calculator.h"
using namespace std;
int main()
{
    Calculator calc;
    double num1,num2;
    char op;
    cout<<"如你所见这是一个计算器（支持加减乘除）"<<endl;
    cout<<"输入表达式（数字 符号 数字）"<<endl;
    cin>>num1>>op>>num2;
    try
    {// 出错跳去catch处理
        double result = 0.0;
        switch(op)
        {
            case '+':
            result = calc.add(num1,num2);
            break;

            case '-':
            result = calc.subtract(num1,num2);
            break;

            case '*':
            result = calc.multiply(num1,num2);
            break;

            case '/':
            result = calc.divide(num1,num2);
            break;

            default:
            throw invalid_argument("我太菜了，不支持该运算");
        }

            cout<<"结果："<<num1<<" "<<op<<" "<<num2<<"="<<result<<endl;
    }
        catch(const exception& e)
        {
            cerr<<"错误："<<e.what()<<endl;
            return 1;
        }
        return 0;
}