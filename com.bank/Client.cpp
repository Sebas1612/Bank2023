//
// Created by ASAF TRUJILLO on 20/04/2023.
//

#include "Client.h"
#include <iostream>

Client::Client(std::string id, std::string name, std::string phone)
{
    this->id = id;
    this->name = name;
    this->phone = phone;
}

//Getters
std::string Client::getId(){
    return id;
}
std::string Client::getName(){
    return name;
}
std::string Client::getPhone(){
    return phone;
}
//Setters
void Client::setId(std::string id){
    this->id = id;
}
void Client::setName(std::string name){
    this->name = name;
}
void Client::setPhone(std::string phone){
    this->phone = phone;
}
