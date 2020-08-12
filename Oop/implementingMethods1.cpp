#include <iostream>

using namespace std;

class Account {
public:
    // attributes
private:
    string name{ "Account" };
    double balance{ 100.0 };

    // methods
public:
    void set_name(string n);
    string get_name();
    bool deposit(double amountDeposited);
    bool withdraw(double amountWithdraw);
    int getBalance();
};

void Account::set_name(string n) {
    name = n;
}

string Account::get_name() {
    return name;
}

bool Account::deposit(double amount) {
    // verify amount
    balance += amount;
    return true;
}
bool Account::withdraw(double amount) {
    if (balance - amount >= 0) {
        balance -= amount;
        return true;
    }
    else {
        return false;
    }

}
int Account::getBalance() {
    return balance;
}

int main(int argc, char const *argv[])
{
    Account ajeet_account;
    string x{};
    cout << "Enter name" << endl;
    getline(cin, x);
    ajeet_account.set_name(x);
    ajeet_account.deposit(200.00);
    ajeet_account.withdraw(50.00);

    cout << "Name is : " << ajeet_account.getBalance() << endl;
    cout << "Balance is " << ajeet_account.getBalance() << endl;
    return 0;
}


