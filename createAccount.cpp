#include "createAccount.h"

#include <string>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include <fstream>
#include <limits>

int numberGenerator_ID();
int countAccounts();

void registerAccount(const int& id, const int& lineNr,const std::string &username, const std::string &password)
{
    std::fstream accountFile;
    accountFile.open("accounts/accountList.txt");

    accountFile.seekg(std::ios::beg);
    for(int i = 0; i < lineNr - 1; i++)
    {
        accountFile.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
    }

    accountFile << "ID: " << id << std::endl;
    accountFile << "Name: " << username << std::endl;
    accountFile << "Password: " << password << std::endl;
    accountFile.close();
}

int countAccounts()
{
    int accountLines = 0;
    std::string line;
    std::ifstream accountFile;
    accountFile.open("accounts/accountList.txt");

    while(!accountFile.eof())
    {
        getline(accountFile,line);
        accountLines++;
    }
    return accountLines;
}

user newAccount()
{
    int lineNumber = countAccounts();
    user testUser;
    int i = 0;

    testUser.ID = numberGenerator_ID();
    std::cout << "Write down username" << std::endl;
    std::cin >> testUser.username;
    std::cout << "Write down password" << std::endl;
    std::cin >> testUser.password;

    std::cout << testUser.ID << " " << testUser.username << " " << testUser.password << std::endl;

    registerAccount(testUser.ID, lineNumber, testUser.username, testUser.password);
}

int numberGenerator_ID()
{
    int iSecret, iGuess;
    srand(time(NULL));
    iSecret = rand() % 1000 + 1;
    return iSecret;
}

