#include <iostream>
#include<string>
#include<vector>

using namespace std;

int main(int argc, char const *argv[])
{
    int x{};
    cout << "Enter a integer" << endl;
    cin >> x;
    cout << "Result: " << x << endl;
    return 0;
}

class Player {

    string name;
    int health;
    int xp;

    void talk(string text_to_say) {
        bool is_dead();
    }
};