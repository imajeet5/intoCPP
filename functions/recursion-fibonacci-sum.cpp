#include <iostream>

using namespace std;

unsigned long long fibonacci(unsigned long long n) {
    if (n <= 1) {
        return n;
    }

    return fibonacci(n - 1) + fibonacci(n - 2);

}

int main(int argc, char const *argv[])
{
    unsigned int x{};

    cout << "Enter a integer" << endl;
    cin >> x;
    cout << "Result: " << fibonacci(x) << endl;
    return 0;
}
