#include "test.h"
#include <string>
#include <iostream>

void Test::dummy()
{
    std::string str1 = "Testing";
    std::string str2 = std::move(str1);

    // Well, we use str1 after a std::move(). Not that smart :)
    // clang-tidy will find this!
    std::cout << str1 << str2;
}
