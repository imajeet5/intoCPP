#include <iostream>

using namespace std;

void number_double_ref(int &num);
void number_double_prt(int *num);

int main(int argc, char const *argv[])
{
    int x{};
    cout << "Enter a integer" << endl;
    cin >> x;
    cout << "Before: " << x << endl;
    number_double_ref(x);
    cout << "After ref: " << x << endl;
    number_double_prt(&x);
    cout << "After ptr: " << x << endl;
    return 0;
}

// Here num is alias to the parameter passed. We cannot point it to null or some other location.
void number_double_ref(int &num) {
    cout << "inside ref: " << num << endl;
    num = num * 2;
}

// Here num is a new variable in which the address of the variable is copied. num is pointing to the address of the varaible. We can assign num to nullptr or some other address.  
void number_double_prt(int *num) {
    *num = *num * 2;
    num = nullptr;
    cout << "Inside ptr " << num << endl;
}