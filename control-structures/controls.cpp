#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int num1{};
    const int min{10};
    const int max{100};
    cout << "Enter a integer between 10 and 100" << endl;
    cin >> num1;
    cout << "result: " << num1 << endl;

    return 0;
}

/*
Testing alternate to if else condition using &&

  int num1{};
    cout << "Enter a integer" << endl;
    cin >> num1;
    num1 && cout << "Result: " << num1 << endl;
    !num1 && cout << "You have entered 0" << endl;
    return 0;


*/