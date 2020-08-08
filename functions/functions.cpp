#include <iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

int main(int argc, char const *argv[])
{
    int randome_number{};
    size_t count{ 100 };
    int min{ 1 }; // lower bpund
    int max{ 6 }; // upper bound

    cout << "RAND_MAX value is " << RAND_MAX << endl;
    cout << "Time is " << time(nullptr) << endl;
    srand(time(nullptr));

    for (size_t i{ 1 }; i <=count; i++) {
        randome_number = rand() % max + min;
        // for (int i=0; i<randome_number; i++) {
        //     cout << "*";
        // }
        cout << randome_number << " ";
    }


    // cout << "Enter a integer" << endl;
    // cin >> num1;
    // cout << "Result: " << num1 << endl;
    return 0;
}
