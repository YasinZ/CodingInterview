// CheckPermuation pg 90, IP, close
// Created by Yasin on 8/17/2017.
//
#include "header.h"

bool CheckPermutation(std::string, std::string);
int GetLength(std::string);
bool Permute(std::string, std::string, int, int);

void TestCheckPermutation()
{
    std::string str1 = "this";
    std::string str2 = "hist";

    std::cout << "The string " << str1 << " is" << (CheckPermutation(str1, str2) ? " " : " not ")
              << "a permutation of " << str2 << std::endl;
}

bool CheckPermutation(std::string s1, std::string s2)
{
    int lenS1 = GetLength(s1);

    if(lenS1 != GetLength(s2))
        return false;

    return Permute(s1, s2, 0, lenS1 - 1);
}

bool Permute(std::string s1, std::string s2, int start, int end)
{
    for(int i = start; i <= end; i++)
    {
        std::swap(s1[start], s1[i]);
        Permute(s1, s2, start+1, end);
    }

    return false;
}

int GetLength(std::string str)
{
    int i;
    for(i = 0; str[i] != '\0'; i++) {}

    return i;
}

