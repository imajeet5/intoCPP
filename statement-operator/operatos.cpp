// initilizaiton happen when the variables are decleared and gets the value for the very first time
// assignment is when we change the value that is already exists.

#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int num1{10};
    int num2{20};
    num1 = num2; // we are taking the r-value of the num2 and assigning to the l-value of the num1
    // cout << "Enter a integer" << endl;
    // cin >> num1;
    num2 = num1++;
    cout << "You Entered: " << num2 << endl;
    return 0;
}
