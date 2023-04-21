//
// Created by ASAF TRUJILLO on 20/04/2023.
//

#ifndef BANK_CLIENT_H
#define BANK_CLIENT_H
#include <string>

class Client{
private:
    std::string id;
    std::string name;
    std::string phone;
public:
//constructor
    Client(std::string id, std:: string name, std:: string phone);
//Get
    std::string getId();
    std::string getName();
    std::string getPhone();
//SET
    void setId(std::string code);
    void setName(std::string name);
    void setPhone(std::string phone);
};
#endif //BANK_CLIENT_H
