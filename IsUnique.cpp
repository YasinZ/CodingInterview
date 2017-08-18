// IsUnique pg 90, solved
// Created by Yasin on 8/17/2017.
//

#include "header.h"

bool IsUnique(std::string);

void TestIsUnique()
{
    std::string inputString = "This";
    std::cout << "The string \"" << inputString << "\", is " << (IsUnique(inputString) ? "unique" : "not unique") << ".\n";
}


bool IsUnique(std::string inpString)
{
    if(inpString == "")
        return true;

    for(int i = 0; inpString[i] != '\0'; i++)
        for(int j = i + 1; inpString[j] != '\0'; j++)
            if(inpString[i] == inpString[j])
                return false;

    return true;
}