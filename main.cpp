#include <iostream>

#include "menu.h"
#include "createAccount.h"
#include "Navigation.h"


//This code needs to have its own separate handler file so main can just initiate things
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