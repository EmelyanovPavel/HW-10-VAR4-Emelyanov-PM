//Homework 10.
#include <iostream>
#include <string>

// Complex actions with strings. A meaningful text message is given(i.e.
//    alphanumeric information separated by spaces and
//    punctuation marks, with a dot at the end).Perform the work
//    using the std::string class.
//4. Display all the palindrome words contained in the specified message.

// Palindrome checking function without copying a string
bool isPalindrome(const std::string& word) 
{
    std::string::size_type left = 0;
    std::string::size_type right = word.length() - 1;
    
    while (left < right) 
    {
        if (word[left] != word[right]) 
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
    std::cout << "Enter a message: ";
    getline(std::cin, message);
    
    std::string::size_type start = 0;
    std::string::size_type end = 0;
    
    std::cout << "Palindromes in the message: " << std::endl;
    
    while (start < message.length()) 
    {
        
        // Finding the beginning of a word
        while (start < message.length() && !isalpha(message[start])) 
        {
            start++;
        }
        
        // Finding the end of a word
        end = start;
        while (end < message.length() && isalpha(message[end])) 
        {
            end++;
        }
        
        //  Checking if found the word
        if (start < message.length()) 
        {
            
            // Checking the palindrome without copying the string
            std::string::size_type length = end - start;
            if (isPalindrome(message.substr(start, length))) 
            {
                
                std::cout << message.substr(start, length) << std::endl;
                
            } 
            start = end;
            
        } 
        
    }
    std::cout << std::endl;
}

int main()
{
    task1();
    
    return 0;
}
