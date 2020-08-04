#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char const *argv[])
{
    int num1{};
    // cout << "Enter a integer" << endl;
    // cin >> num1;
    for (num1 = 0; num1 <= 10; num1++)
    {
        cout << num1 << " is ";
        num1 % 2 == 0 ? (cout << "Even" << endl) : (cout << "Odd" << endl);
    }

    cout << "Result: " << num1 << endl;

    vector<int> nums{10, 20, 30, 40, 50};
    for (unsigned i{0}; i < nums.size(); i++)
    {
        cout << nums[i] << endl;
    }

    // ranged based for loop
    int scores[]{100, 90, 97};
    for (auto score : scores)
    {
        cout << "Using rangebase for loop -> " << score << endl;
    }

    return 0;
}
