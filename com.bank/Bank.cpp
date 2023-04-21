//
// Created by ASAF TRUJILLO on 20/04/2023.
//

#include "Bank.h"
#include <iostream>
#include <string>
//Constructor
Bank::Bank(std::string name){
    this->name = name;
    accounts.empty();
}
std::string Bank:: getName(){ return name; }
void Bank:: setName(std::string name){
    this->name = name;
}
void Bank:: addClient(Client e){
    clients.push_back(e);
}
void Bank:: addAccount(Account c){
    accounts.push_back(c);
}
void Bank::printData(){
    std::vector<Client>aux;
    std::cout<<"El nombre del Banco es:";
    std::cout<<name<<std::endl;
    std::cout<<"El banco tiene las siguientes cuentas"<<std::endl;
    for(int data_clients=0; data_clients<accounts.size(); data_clients++){
        std::cout<<accounts.at(data_clients).getNumberAccount()<<"tiene el saldo:"<<accounts.at(data_clients).getBalance()<<std::endl;
        std::cout<<"La cuente tiene asociados los siguientes clientes: "<<std::endl;
        aux =accounts.at(data_clients).getAccountClients();
        for(int dataclients=0; dataclients < aux.size(); dataclients++){
            std::cout<<aux.at(dataclients).getId()<<aux.at(dataclients).getName()<<std::endl;
        }
        std::cout<<std::endl;
    }
    std::cout<<std::endl;
    std::cout<<"El banco tiene los siguientes clientes: "<<std::endl;
    for(int dataclients=0; dataclients < clients.size(); dataclients++){
        std::cout<<clients.at(dataclients).getName()<<std::endl;
    }
    std::cout<<std::endl;
}
void Bank::calculateAverage() {
    long aux = 0;
    for(int dataclients=0; dataclients< accounts.size(); dataclients++){
        aux += accounts.at(dataclients).getBalance();
    }
    std::cout<<"El promedio de las cuentas es: "<<aux/accounts.size()<<std::endl;
}

}

