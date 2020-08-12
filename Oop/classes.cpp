// Section 13
// Declare Classes and Objects
#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Player {
public:
    // attributes
    string name{ "Player" };
    int health{ 100 };
    int xp{ 3 };

    // methods
    void talk(string text) {
        cout << name << " says " << text << endl;
    };
    bool is_dead();
};

class Account {
public:
    // attributes
private:
    string name{ "Account" };
    double balance{ 100.0 };

    // methods
public:
    bool deposit(double amountDeposited) {
        balance += amountDeposited;
    };
    bool withdraw(double amountWithdraw) {
        balance -= amountWithdraw;
    };

    int getBalance() {
        return balance;
    };

};


int main() {
    Account frank_account;
    Account jim_account;


    Player frank;
    Player hero;
    frank.name = "Frank";
    frank.talk("Hi! There ");


    Player players[]{ frank, hero };

    vector<Player> player_vec{ frank };
    player_vec.push_back(hero);

    Player *enemy{ nullptr };
    enemy = new Player;
    (*enemy).name = "Enemy";
    enemy->health = 5000;
    enemy->talk("I will destroy you");

    cout << "Name " << (*enemy).name << endl;
    cout << "Health " << enemy->health << endl;

    cout << "Initial balance " << frank_account.getBalance() << endl;
    frank_account.deposit(500);
    cout << "Deposited 500 " << frank_account.getBalance() << endl;
    frank_account.withdraw(100);
    cout << "Withdrawl 100 " << frank_account.getBalance() << endl;

    delete enemy;

    return 0;
}