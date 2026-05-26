#include "BankAccount.h"

int main(){
    BankAccount acc("Zin", 1000.0);

    acc.deposit(500.0);
    acc.withdraw(200.0);

    acc.display();

    acc.checkBalance();

    return 0;
}