// URLify pg 90, completed, solved incorrectly. Use given length to find spaces then redistribute correctly.
// Created by Yasin on 8/19/2017.
//
#include "header.h"

std::string URLify(std::string, int);

void TestURLify()
{
    std::string str = "Mr John Smith    ";
    std::string stl = "Mr%20John%20Smith";
    int len = 13;

    std::cout << "URLifying: " << str << std::endl;
    std::cout << URLify(str, len) << std::endl;
}


std::string URLify(std::string str, int len)
{
    std::string ans = str;

    int j = 0;
    for(int i = 0; i < len; i++) {
        if (str[i] != ' ')
            ans[j++] = str[i];
        else if(str[i+1] != ' ') {
            ans[j++] = '%';
            ans[j++] = '2';
            ans[j++] = '0';
        }
    }

    return ans;
}
