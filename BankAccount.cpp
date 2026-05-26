#include "BankAccount.h"

BankAccount::BankAccount(string n, double b) {
    name = n;
    balance = b;
}

void BankAccount::deposit(double amount) {
    balance += amount;
}

void BankAccount::withdraw(double amount) {

    if(amount > balance) {
        cout << "Insufficient Balance!" << endl;
    }
    else {
        balance -= amount;
    }
}

void BankAccount::display() const {
    cout << "Account Holder: " << name << endl;
    cout << "Balance: " << balance << endl;
}

void BankAccount::checkBalance() const {
    cout << "Current Balance: " << balance << endl;
}