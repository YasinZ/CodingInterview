//
// Created by Yasin on 9/5/2017.
//

#include "header.h"
#include <sstream>

int GetLength(std::string);

void TestStringCompression()
{
    std::string str = "aabcccccaaa";
    std::ostringstream newStr;

    int counter = 1;

    for(int i = 0; i < GetLength(str); i++) {
        if (str[i] == str[i + 1])
            counter++;
        else {
            newStr << str[i];
            newStr << counter;
            counter = 1;
        }
    }

    if(GetLength(newStr.str()) >= GetLength(str))
        std::cout << str << std::endl;
    else
        std::cout << newStr.str() << std::endl;
}
