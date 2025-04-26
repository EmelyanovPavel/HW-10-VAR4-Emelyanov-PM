//Homework 10.
#include <algorithm>
#include <iostream>
#include <sstream>
#include <string>

//Task 1.
//Complex actions with strings.A meaningful text message is given(i.e.
//    alphanumeric information separated by spaces and
//    punctuation marks, with a dot at the end).Perform the work
//    using the std::string class.
//4. Display all the palindrome words contained in the specified
//message.

bool isPalindrome(std::string str)
{
    for (int left = 0, right = str.length() - 1; left < right; left++, right--) //go to the middle
        if (str[left] != str[right]) //check for symmetry
            return false;
    return true;
}

void task1()
{
    //declaring a variable
    std::string str;

    //getting a string
    std::getline(std::cin, str);

    //turning a string into a stream
    std::istringstream ist(str);

    while (ist >> str) {
        //reading the stream
        if (isPalindrome(str)) { //finding a palindrome
            std::cout << str << " "; //output a palindrome words
        }
    }
    std::cout << std::endl;
}

int main()
{
    task1();
    return 0;
}
