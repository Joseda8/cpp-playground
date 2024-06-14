#include <iostream>
#include "Calculator.h"

/**
 * @brief Main function to demonstrate the Calculator class.
 * @return 0 on successful execution.
 */
int main()
{
    Calculator calc;
    double num1 = 8, num2 = 4;

    std::cout << "Result: " << calc.add(num1, num2) << std::endl;
    std::cout << "Result: " << calc.subtract(num1, num2) << std::endl;
    std::cout << "Result: " << calc.multiply(num1, num2) << std::endl;
    std::cout << "Result: " << calc.divide(num1, num2) << std::endl;
    return 0;
}
