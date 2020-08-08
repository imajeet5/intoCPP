#include <iostream>

using namespace std;

unsigned long long factorial(unsigned long long n);

unsigned long long factorial(unsigned long long n) {
    if (n == 0) {
        return 1;
    }
    return n * factorial(n - 1);
}


int main(int argc, char const *argv[])
{
    unsigned long long int x{};
    cout << "Enter a integer" << endl;
    cin >> x;
    cout << "Result: " << factorial(x) << endl;
    return 0;
}
