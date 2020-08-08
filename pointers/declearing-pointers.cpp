#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int *p{ nullptr };
    int x{};
    double y{1000.12313};
    double *double_pointer{};
    double_pointer = &y;
    cout << "size of double_pointer " << sizeof(double_pointer) << endl;
    cout << "Size of y: " << sizeof(&y) << endl;
    cout << "Value of p is:" << p << endl;
    cout << "Size of p is: " << sizeof(p) << endl;
    cout << "Address of p is: " << &p << endl;
    cout << "Address of x is: " << &x << endl;
    cout << "Value of x is: " << x << endl;
    cout << "Size of x is: " << sizeof(&x) << endl;
    cout << "Enter a integer" << endl;
    cin >> x;
    p = &x;
    cout << "Address of p is: " << &p << endl;
    cout << "Value of p is:" << p << endl;
    cout << "Address of x is: " << &x << endl;
    cout << "Value of x is: " << x << endl;
    return 0;
}
