#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main(int argc, char const *argv[])
{
    int num1;
    int num2;
    double num3;

    cout << "Enter a integer" << endl;
    cin >> num1 >> num2;
    // cin >> num2;
    cout << "You Entered: " << num1 << " and " << num2 << endl;
    cout << "Enter a double" << endl;
    cin >> num3;
    cout << "You entered: " << num3 << endl;

    return 0;
}
