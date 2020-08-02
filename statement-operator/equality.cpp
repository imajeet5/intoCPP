#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{

    bool equal_result{false};
    bool not_equal_result{false};
    double num1{}, num2{};
    cout << "Enter two integers ";
    cin >> num1 >> num2;
    //12.0 == 11.99999999999999999999999 -> true
    equal_result = (num1 == num2);
    not_equal_result = (num1 != num2);

    cout << boolalpha;
    cout << "equal_result: " << equal_result << endl;
    cout << "not_equal_result: " << not_equal_result << endl;

    return 0;
}
