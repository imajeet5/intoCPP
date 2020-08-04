#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int num1{101};

        while (num1 >= 100)
    {
        cout << "Enter a greater than 100: " << endl;
        cin >> num1;
    }

    return 0;
}
