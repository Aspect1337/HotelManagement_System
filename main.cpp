#include <iostream>

#include "menu.h"
#include "createAccount.h"
#include "Navigation.h"

int main()
{
    int option = 1;
    int* pOption = &option;

    while(getMenuOption(pOption))
    {
        //Quit
        if(*pOption == 0)
        {
            std::cout << "Logging out... \n";
            break;
        }
        //Log in
        if(*pOption == 1)
        {
            printFloor();
        }
        //Creates new account in text file
        if(*pOption == 2)
        {
            newAccount();
        }
    }
    return 0;

}