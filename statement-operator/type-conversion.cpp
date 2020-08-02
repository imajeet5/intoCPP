#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int num1{}, num2{}, num3{};
    int total{};
    const int count{3};

    cout << "Enter 3 integers" << endl;
    cin >> num1 >> num2 >> num3;
    total = num1 + num2 + num3;
    double average{0.0};

    average = static_cast<double>(total) / count;

    cout << "The 3 numbers were " << num1 << " " << num2 << " " << num3 << endl;
    cout << "The sum of the number is:  " << total << endl;
    cout << "The average of the numbers is: " << average << endl;
    return 0;
}
