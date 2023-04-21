//
// Created by ASAF TRUJILLO on 20/04/2023.
//

#include "Account.h"
#include <iostream>
#include <string>

//constructor
Account::Account(std::string ID, long balance){
    this->ID = ID;
    this->balance = balance;
    clientsAccount.empty();
}
std::string Account::getNumberAccount() {
    return ID;
}
long Account::getBalance(){
    return balance;
}
void Account::addClient(Client e) {
    clientsAccount.push_back(e);
}
//set
void Account::setNumberAccount(std::string ID) {
    this->ID = ID;
}
void Account::setBalance(long balance) {
    this->balance = balance;
}
bool Account::withdrawMoney(long amount) {
    if(balance>=amount){
        balance=balance-amount;
        return true;
    }
    else return false;
}
void Account::consignMoney(long amount) {
    balance = balance + amount;
}
std::vector<Client>Account::getAccountClients(){
    return this->clientsAccount;
}

