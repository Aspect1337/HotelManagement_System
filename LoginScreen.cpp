/*
#include <iostream>
#include <fstream>
#include "LoginScreen.h"

account userTryout()
{
    account userTryout;

    std::cout << "Enter username";
    std::cin >> userTryout.name;

    std::cout << "Enter password";
    std::cin >> userTryout.password;



}

int logInToAccount()
{
    account userTryout;

    std::string userNameInput;
    std::string passwordInput;
}

bool matchUsername()
{
    std::string userName;
    int indexLine = 0;
    std::fstream accountFile;
    accountFile.open("accounts/accountList.txt");


    while(getline(accountFile, userName))
    {
        if(userName.empty())
            break;
        else
            logInToAccount();
    }

    accountFile.close();
}

*/