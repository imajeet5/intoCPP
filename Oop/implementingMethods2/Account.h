#ifndef _ACCOUNT_H_
#define _ACCOUNT_H_

#include<string>

class Account {
private:
    std::string name{ "Account" };
    double balance{ 0.0 };

    // methods
public:
    void set_name(std::string n);
    std::string get_name();
    bool deposit(double amountDeposited);
    bool withdraw(double amountWithdraw);
    int getBalance();
};

#endif 