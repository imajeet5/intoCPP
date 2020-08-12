#include <iostream>
/*
It is common for students to ‘fix’ the linker errors by using #include “Account.cpp” from main.cpp
This is a bad idea and will lead to all sort of errors later as our projects become larger.
Command to include all the files
g++ -Wall –std=c++14 –g main.cpp Account.cpp
*/

#include "Account.cpp"

using namespace std;

int main(int argc, char const *argv[])
{
    Account ajeet_account;
    string x{};
    double amt{ 0.0 };
    cout << "Enter name" << endl;
    getline(cin, x);
    ajeet_account.set_name(x);
    cout << "Enter amount to deposite " << endl;
    cin >> amt;
    ajeet_account.deposit(amt);
    cout << "Enter amount to withdraw " << endl;
    cin >> amt;
    cout << "Hello " << ajeet_account.get_name() << endl;
    if (ajeet_account.withdraw(amt)) {
        cout << "Withdrawl Successful"<< endl;
    }
    else {
        cout << "Not enough funds"  << endl;
    }



    cout << "Balance is " << ajeet_account.getBalance() << endl;
    return 0;
}

