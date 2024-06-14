#include <iostream>
#include "Calculator.h"

/**
 * @brief Constructor for Calculator class.
 * Does nothing here as there are no data members to initialize.
 */
Calculator::Calculator() {}

/**
 * @brief Adds two numbers.
 * @param a The first number.
 * @param b The second number.
 * @return The result of adding a and b.
 */
double Calculator::add(double a, double b) {
    return a + b;
}

/**
 * @brief Subtracts the second number from the first.
 * @param a The first number.
 * @param b The second number.
 * @return The result of subtracting b from a.
 */
double Calculator::subtract(double a, double b) {
    return a - b;
}

/**
 * @brief Multiplies two numbers.
 * @param a The first number.
 * @param b The second number.
 * @return The result of multiplying a and b.
 */
double Calculator::multiply(double a, double b) {
    return a * b;
}

/**
 * @brief Divides the first number by the second.
 * @param a The numerator.
 * @param b The denominator.
 * @return The result of dividing a by b.
 * @details Prints an error message and returns 0 if b is 0.
 */
double Calculator::divide(double a, double b) {
    if (b != 0) {
        return a / b;
    } else {
        std::cerr << "Error: Division by zero!" << std::endl;
        return 0;
    }
}
