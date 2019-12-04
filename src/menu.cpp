#include <iostream>
#include <string>
#include <sstream>

#include "menu.h"

bool getMenuOption(int* option)
{
    system("cls");
    std::cout << "0 - Exit" << std::endl;
    std::cout << "1 - Login" << std::endl;
    std::cout << "2 - Create account" << std::endl;
    std::cout << "3 - Create hotel" << std::endl;

    // this part takes whatever input and changes the pointer
    std::string str;
    std::cin >> str;
    std::istringstream isNumber(str);
    isNumber >> *option;

    // Checks if "input" is a numerical character and if it's not, run again.
    if (!isNumber.eof()){
        std::cout << "Wrong, try again" << std::endl;
        getMenuOption(option);
    }
    //return true to keep the program running or false if not
    return true;
}
