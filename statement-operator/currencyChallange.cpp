#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int cents{}, dollers{}, quarter{}, dime{}, nickel{}, remaining_value{};
    cout << "Enter a number of cents" << endl;
    cin >> cents;

    dollers = cents / 100;
    remaining_value = cents % 100; // we will get the remaining value
    quarter = remaining_value / 25;
    remaining_value %= 25;
    dime = (remaining_value) / 10;
    remaining_value %= 10;
    nickel = remaining_value / 5;
    remaining_value %= 5;
    cout << "dollers: " << dollers << endl;
    cout << "quarter: " << quarter << endl;
    cout << "dime: " << dime << endl;
    cout << "nickel: " << nickel << endl;
    cout << "penny: " << remaining_value << endl;
    return 0;
}

/*
 dollers = cents / 100;
    remaining_value = cents - dollers * 100;
    quarter = remaining_value / 25;
    remaining_value -= quarter * 25;
    dime = (remaining_value) / 10;
    remaining_value -= dime * 10;
    nickel = remaining_value / 5;
    remaining_value -= nickel * 5;
    cout << "dollers: " << dollers << endl;
    cout << "quarter: " << quarter << endl;
    cout << "dime: " << dime << endl;
    cout << "nickel: " << nickel << endl;
    cout << "penny: " << remaining_value << endl;
*/