//
// Created by Yasin on 8/19/2017.
//

#include "header.h"

bool PalindromePermutation(std::string);
int GetLength(std::string str);
bool IsPalindrome(std::string str);

void TestPalindromePermutation()
{
    std::string input = "Tact Coa";
    //input = tolower(input); // Implement later

    PalindromePermutation(input);
}

bool PalindromePermutation(std::string str)
{
    bool found = false;

    return false;
}

bool IsPalindrome(std::string str)
{
    int len = GetLength(str);

    for(int i = 0; i < len/2; i++)
        if(str[i] != str[len - i - 1])
            return false;
    return true;

}
