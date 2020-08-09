// Here we are creating array from the pointers
#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    double *temp_prt{};
    size_t size{ 0 };
    double x{ 100 };
    cout << "Enter a integer" << endl;
    cin >> size;
    temp_prt = new double[size];
    *temp_prt = x;
    *(temp_prt + 1) = 200;
    temp_prt[2] = 300;
    cout << "value of 0th element: " << *temp_prt << endl;
    cout << "value of 1st element: " << *(temp_prt + 1) << endl;
    cout << "value of 2nd element: " << temp_prt[2] << endl;
    cout << "Address of &temp_prt[0] pointing to: " << &temp_prt[0] << endl;
    cout << "Address of &*(temp_prt + 1) pointing to: " << &*(temp_prt + 1) << endl;
    cout << "Address of &*(temp_prt + 2) pointing to: " << &*(temp_prt + 2) << endl;
    cout << "Address of &*(temp_prt + 3) pointing to: " << &*(temp_prt + 3) << endl;
    cout << "Address of &*(temp_prt + 4) pointing to: " << &*(temp_prt + 4) << endl;
    cout << "Address of temp_prt pointing to: " << temp_prt << endl;

    for (int i{ 0 }; i < size; i++) {
        *(temp_prt + i) = i*10;
    }

      for (int i{ 0 }; i < size; i++) {
        cout << *(temp_prt + i) << endl;
    }
    
    cout << "Address of pointing to: " << *temp_prt << endl;
    return 0;
}


// Basically here temp_prt[n] == *(temp_prt + n)