//
// Created by ASAF TRUJILLO on 20/04/2023.
//

#ifndef BANK_BANK_H
#define BANK_BANK_H
#include "Account.h"
#include "Client.h"
#include <string>
#include <vector>
class Bank {
private:
    std::string name;
    std::vector<Client> clients;
    std::vector<Account>accounts;
public:
    Bank(std::string name);
    std::string getName() ;
    void setName(std::string name);
    void addClient(Client e);
    void addAccount(Account c);
    void printData();
    void calculateAverage();
};


#endif //BANK_BANK_H
