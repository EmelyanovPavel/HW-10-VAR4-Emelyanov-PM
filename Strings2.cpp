//Homework 10.
#include <iostream>
#include <string>

//Complex actions with strings.A meaningful text message is given(i.e.
//    alphanumeric information separated by spaces and
//    punctuation marks, with a dot at the end).Perform the work
//    using the std::string class.
//4. Display all the palindrome words contained in the specified message.

bool isPalindrome(std::string word) 
{
    std::string::const_iterator left = word.begin();
    std::string::const_iterator right = word.end() - 1;
    
    while (left < right) 
    {
        if (*left != *right) 
        {
            return false;
        }
        left++;
        right--;
    }
    return true;
}

void task1() 
{
    std::string message;
    std::cout << "Enter the string: ";
    std::getline(std::cin, message);
    
    std::string currentWord = "";
    bool isWord = false;
    
    std::cout << "The palindrome words: " << std::endl;
    
    int i = 0;
    while (i < message.length()) 
    {
        if (isalpha(message[i])) 
        {
            currentWord += tolower(message[i]);
            isWord = true;
        }
        else if (isWord) 
        {
            if (isPalindrome(currentWord)) 
            {
                std::cout << currentWord << std::endl;
            }
            currentWord = "";
            isWord = false;
        }
        i++;
    }
    
    //Checking the last word
    if (isWord && isPalindrome(currentWord)) 
    {
        std::cout << currentWord << std::endl;
    }
}

int main()
{
    task1();
    return 0;
}
