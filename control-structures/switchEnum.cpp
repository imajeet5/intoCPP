#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    enum Directions
    {
        left,
        right,
        up,
        down
    };
    Directions heading{left};

    switch (heading)
    {
    case left:
        cout << "Going left " << left << endl;
        break;
    case right:
        cout << "Going Right" << right << endl;

    default:
        break;
    }

    // int num1{};
    // cout << "Enter a integer" << endl;
    // cin >> num1;
    cout << "Result: " << heading << endl;
    return 0;
}
