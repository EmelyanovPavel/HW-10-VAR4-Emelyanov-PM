//Task 1.
#include <algorithm>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>

//Complex actions with strings.A meaningful text message is given(i.e.
//    alphanumeric information separated by spaces and
//    punctuation marks, with a dot at the end).Perform the work
//    using the std::string class.
//    4. Display all the palindrome words contained in the specified
//    message.

void task1() {
    std::string yourString, word;
    std::vector <string> palindromes;
    std::cout << "Enter a string: " << std::endl;
    std::getline(cin, yourString);
    std::stringstream streamForString(yourString);
    while (streamForString >> word) {
        std::string invertWord(word);
        std::reverse(invertWord.begin(), invertWord.end());
        if ((!word.compare(invertWord)) && (word.size() > 1)) {
            std::palindromes.push_back(word);
        }
    }
    if (palindromes.empty()) std::cout << "There are no palindromes in the string. ";
    else {
        std::cout << "Palindromes number: " << palindromes.size() << std::endl;
        for (unsigned int i = 0; i < palindromes.size(); i++) std::cout << " - " << palindromes[i] << std::endl;
    }
}

int main()
{
    task1();
    return 0;
}