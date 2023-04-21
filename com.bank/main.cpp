#include "Account.h"
#include "Bank.h"
#include "Client.h"
#include <iostream>

int main() {
    Bank bancoConavi("Banco Conavi");
    Account miCuenta("130788", 5000000);
    Account miCuenta2("130785",20000000);
    Client miCliente("11930458341","Pedro Navaja","3145235867");
    Client miCliente2("11453456789","Diomedes Diaz","3155245270");
    Client miCliente3("11735669531","Jorge Ivam","3006455801");
    //Add clients
    //Add clients after to add accounts in the bank

    miCuenta.addClient(miCliente);
    miCuenta.addClient(miCliente2);
    miCuenta.addClient(miCliente3);
    //Operating with the clients

    //Add Accounts in the bank
    bancoConavi.addAccount(miCuenta);
    bancoConavi.addAccount(miCuenta2);
    //Add clients on the bank
    bancoConavi.addClient(miCliente);
    bancoConavi.addClient(miCliente2);
    bancoConavi.addClient(miCliente3);
    // Print reports
    bancoConavi.printData();
    bancoConavi.calculateAverage();
}
