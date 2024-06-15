#include <iostream>
#include "Calculator.h"


Calculator::Calculator() {}

double Calculator::add(double a, double b)
{
    return a + b;
}

double Calculator::subtract(double a, double b)
{
    return a - b;
}

double Calculator::multiply(double a, double b)
{
    return a * b;
}

double Calculator::divide(double a, double b)
{
    // Verify condition for processing
    if (b != 0)
    {
        return a / b;
    }
    else
    {
        std::cerr << "Error: Division by zero!" << std::endl;
        return 0;
    }
}

int Calculator::fibonacci(int num)
{
    // Verify condition for processing
    if (num < 0)
    {
        std::cerr << "Error: Input should be a positive integer." << std::endl;
    }

    // Check stop condition and return, or process the fibonacci of the next number
    if (num == 1 || num == 0)
    {
        return num;
    }
    else
    {
        int fib_num = fibonacci(num - 1) + fibonacci(num - 2);
        return fib_num;
    }
}
