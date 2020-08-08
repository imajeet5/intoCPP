#include <iostream>

using namespace std;

int add_numbers(int, int);
double add_numbers(double, double);

int main(int argc, char const *argv[])
{
    int num1{ 0 }, num2{ 0 };
    double num3{}, num4{};
    cout << "enter two integer numbers ";
    cin >> num1 >> num2;
    cout << "int sum is " << add_numbers(num1, num2) << endl;
    cout << "Enter two whole numbers ";
    cin >> num3 >> num4;
    cout << "double multiplication is " << add_numbers(num3, num4) << endl;


    return 0;
}

int add_numbers(int a, int b) {
    return a + b;
}
double add_numbers(double a, double b) {
    return a * b;
}