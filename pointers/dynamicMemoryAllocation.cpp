#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int *int_ptr{ nullptr };
    int_ptr = new int;
    cout << "Address int_ptr stores " << int_ptr << endl;
    cout << "Value int_prt pointing " << *int_ptr << endl;
    cout << "Enter a integer" << endl;
    cin >> *int_ptr;
    cout <<  endl;
    cout << "Address int_ptr stores " << int_ptr << endl;
    cout << "Value int_prt pointing " << *int_ptr << endl;

    cout <<  endl;

    delete int_ptr;
    cout << "Address int_ptr stores " << int_ptr << endl;
    cout << "Value int_prt pointing " << *int_ptr << endl;

    return 0;
}
