//
// Created by ASAF TRUJILLO on 20/04/2023.
//

#ifndef BANK_ACCOUNT_H
#define BANK_ACCOUNT_H
#include "Client.h"
#include <string>
#include <vector>

class Account {
private:
    std::string ID;
    long balance;
    std::vector <Client> clientsAccount;
public:
    //Constructor
    Account(std::string ID,long balance);
    //Get
    std::string getNumberAccount();
    long getBalance();
    std::vector <Client> getAccountClients();
    //Add Clients
    void addClient(Client e);
    //Set
    void setNumberAccount(std::string ID);
    void setBalance(long balance);
    //Withdrawals and consignments
    bool withdrawMoney(long amount);
    void consignMoney(long amount);
};
#endif //BANK_ACCOUNT_H
