#include <iostream>

using namespace std;

int *largest_number(int *num1_ptr, int *num2_ptr);

int main(int argc, char const *argv[])
{
    int x{ 100 }, y{ 200 };
    int *largest_ptr{ nullptr };
    cout << "Address of x " << &x << endl;
    cout << "Address of y " << &y << endl;
    largest_ptr = largest_number(&x, &y);

    cout << "Enter a integer" << endl;
    cout << "Address of largest interger " << largest_ptr << endl;
    cout << "Value of largest number " << *largest_ptr << endl;
    *largest_ptr = 500;
    cout << "new value of y " << y << endl;

    return 0;
}

int *largest_number(int *num1_ptr, int *num2_ptr) {
    if (*num1_ptr > *num2_ptr) {
        return num1_ptr;
    }
    return num2_ptr;
}