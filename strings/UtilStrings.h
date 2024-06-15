#ifndef UTIL_STRINGS_H
#define UTIL_STRINGS_H

#include <string>

/**
 * @brief Utility functions for string manipulation.
 */
class UtilStrings
{
public:
    /**
     * @brief Constructor for UtilStrings class.
     */
    UtilStrings();

    /**
     * @brief Remove the empty spaces in a string. For example: "I love sloths" -> "Ilovesloths".
     * @param str_input The string to convert.
     * @return The input string with no empty spaces.
     */
    static std::string remove_spaces(const std::string &str_input);

    /**
     * @brief Convert a string to lower case. For example: "I Love Sloths" -> "i love sloths".
     * @param str_input The string to convert.
     * @return The input string in lower-case.
     */
    static std::string to_lower_case(const std::string &str_input);

    /**
     * @brief Verify if the given word is a palindrome.
     * @param word Word to verify.
     * @return True is the word is a palindrome, False otherwise.
     */
    static bool is_palindrome(const std::string &word);
};

#endif
