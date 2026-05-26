#ifndef BANKACCOUNT_H
#define BANKACCOUNT_H

#include <iostream>
#include <string>
using namespace std;

class BankAccount {
private:
    string name;
    double balance;

public:
    BankAccount(string n, double b);
    void deposit(double amount);
    void withdraw(double amount);
    void display() const;
    void checkBalance() const;
};

#endif