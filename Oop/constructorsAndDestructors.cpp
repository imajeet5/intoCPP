#include <iostream>
#include<string>

using namespace std;

class Player
{
private:
    std::string name;
    int health;
    int xp;
public:
    void set_name(std::string name_val) {
        name = name_val;
    }
    // Overloaded Constructor
    Player() {
        cout << "No args constructor is called" << endl;
    };
    Player(std::string name) {
        cout << "String args constructor is called " <<  endl;
    };
    Player(std::string name, int health, int xp) {
        cout << "Three args constructor is called " << name << endl;
    };
    ~Player() {
        cout << "Destructor is called for " << name << endl;
    };


};

int main(int argc, char const *argv[])
{
    {
        Player slayer;
        slayer.set_name("Slayer");
    }

    {
        Player frank;
        frank.set_name("Frank");
        Player hero{ "Hero" };
        hero.set_name("Hero");
        Player villan("Villan", 100, 12);
        villan.set_name("Villan");
    }

    Player *enemy = new Player;
    enemy->set_name("Enemy");

    Player *level_boss = new Player("Level Boss", 1000, 300);
    level_boss->set_name("Level Boss");

    delete enemy;
    delete level_boss;



    // cin >> x;
    // cout << "Result: " << x << endl;
    return 0;
}
