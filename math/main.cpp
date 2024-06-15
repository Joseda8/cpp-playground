#include <iostream>
#include "Calculator.h"

/**
 * @brief Main function to demonstrate the Calculator class.
 * @return 0 on successful execution.
 */
int main()
{
    double num1 = 8, num2 = 4;
    std::cout << "Result: " << Calculator::add(num1, num2) << std::endl;
    std::cout << "Result: " << Calculator::subtract(num1, num2) << std::endl;
    std::cout << "Result: " << Calculator::multiply(num1, num2) << std::endl;
    std::cout << "Result: " << Calculator::divide(num1, num2) << std::endl;
    std::cout << "Result: " << Calculator::fibonacci(num1) << std::endl;
    return 0;
}
