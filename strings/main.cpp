#include <iostream>
#include "UtilStrings.h"

/**
 * @brief Main function to demonstrate the UtilStrings class.
 * @return 0 on successful execution.
 */
int main()
{
    std::string word_1 = "rAdar";
    std::string word_2 = "hello";
    std::string sentence_1 = "Madam in Eden Im Adam";
    std::string sentence_2 = "I love sloths";

    bool is_word_1_palindrome = UtilStrings::is_palindrome(word_1);
    bool is_word_2_palindrome = UtilStrings::is_palindrome(word_2);
    bool is_sentece_1_palindrome = UtilStrings::is_palindrome(sentence_1);
    bool is_sentece_2_palindrome = UtilStrings::is_palindrome(sentence_2);

    std::cout << word_1 << " is a palindrome: " << std::boolalpha << is_word_1_palindrome << std::endl;
    std::cout << word_2 << " is a palindrome: " << std::boolalpha << is_word_2_palindrome << std::endl;
    std::cout << sentence_1 << " is a palindrome: " << std::boolalpha << is_sentece_1_palindrome << std::endl;
    std::cout << sentence_2 << " is a palindrome: " << std::boolalpha << is_sentece_2_palindrome << std::endl;

    return 0;
}
