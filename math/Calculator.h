#ifndef CALCULATOR_H
#define CALCULATOR_H

/**
 * @brief The Calculator class provides basic arithmetic operations.
 */
class Calculator
{
public:
    /**
     * @brief Constructor for Calculator class.
     */
    Calculator();

    /**
     * @brief Adds two numbers.
     * @param a The first number.
     * @param b The second number.
     * @return The result of adding a and b.
     */
    static double add(double a, double b);

    /**
     * @brief Subtracts the second number from the first.
     * @param a The first number.
     * @param b The second number.
     * @return The result of subtracting b from a.
     */
    static double subtract(double a, double b);

    /**
     * @brief Multiplies two numbers.
     * @param a The first number.
     * @param b The second number.
     * @return The result of multiplying a and b.
     */
    static double multiply(double a, double b);

    /**
     * @brief Divides the first number by the second.
     * @param a The numerator.
     * @param b The denominator.
     * @return The result of dividing a by b.
     * @details Prints an error message and returns 0 if b is 0.
     */
    static double divide(double a, double b);

    /**
     * @brief Computes the Fibonacci of a given number.
     * @param num The number to compute the Fibonacci of.
     * @return The result of Fib(num).
     */
    static int fibonacci(int a);
};

#endif
