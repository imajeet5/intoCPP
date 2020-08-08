#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int *p{ nullptr };
    int x{};
    double y{ 1000.12313 };
    double *double_pointer{};
    double_pointer = &y;
    cout << "Address of p is: " << &p << endl;
    cout << "Value of p is:" << p << endl;
    // cout << "Value at address p hold is: " << *p << endl;
    cout << "Enter an integer " << endl;
    cin >> x;
    p = &x;
    cout << "Address of p is: " << &p << endl;
    cout << "Value of p is:" << p << endl;
    cout << "Value at address p hold is: " << *p << endl;
    cout << "Address of x is: " << &x << endl;
    cout << "Value of x is: " << x << endl;
    x = 200;
    cout <<  endl;
    cout << "Address of p is: " << &p << endl;
    cout << "Value of p is:" << p << endl;
    cout << "Value at address p hold is: " << *p << endl;
    cout << "Address of x is: " << &x << endl;
    cout << "Value of x is: " << x << endl;
    return 0;
}
