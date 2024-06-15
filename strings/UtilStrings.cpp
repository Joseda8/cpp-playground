#include <cctype>
#include <iostream>

#include "UtilStrings.h"

UtilStrings::UtilStrings() {}

std::string UtilStrings::remove_spaces(const std::string &str_input)
{
    std::string result;
    for (char character : str_input)
    {
        if (!std::isspace(character))
        {
            result += character;
        }
    }
    return result;
}

std::string UtilStrings::to_lower_case(const std::string &str_input)
{
    std::string str_output = str_input;
    // Convert each character to lower case
    for (char &character : str_output)
    {
        character = std::tolower(character);
    }
    return str_output;
}

bool UtilStrings::is_palindrome(const std::string &word)
{
    // Edge cases: Empty string or single character
    if (word.empty() || word.size() == 1)
    {
        return true;
    }

    // Convert word to lower case and remove empty spaces
    std::string word_no_spaces = remove_spaces(word);
    std::string word_lower = to_lower_case(word_no_spaces);

    // Compare characters from beginning and end towards the middle
    int left = 0;
    int right = word_lower.size() - 1;
    while (left < right)
    {
        if (word_lower[left] != word_lower[right])
        {
            return false;
        }
        left++;
        right--;
    }

    return true;
}
