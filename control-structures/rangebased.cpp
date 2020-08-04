#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

int main(int argc, char const *argv[])
{
    vector<double> temps{87.2, 44.6, 77.8, 36.7};
    double average_temp{};
    double running_sum{};
    for (auto temp : temps)
    {
        running_sum += temp;
    }
    average_temp = running_sum / temps.size();

    cout << fixed << setprecision(1);
    cout << "Average temprature is: " << average_temp << endl;

    cout << "Can also be use to iterate over string" << endl;
    for (auto c : "Ajeet")
        cout << c << endl;

    // We can also initilize in for loop
    cout << "We can also initilize in for loop" << endl;
    for (auto val : {9, 8, 7, 6, 5})
        cout << val << endl;

    return 0;
}
