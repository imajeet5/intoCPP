#include <iostream>
#include<vector>

using namespace std;

int scale_number(int &);
void add_one(vector<int> &v);
void printVector(const vector<int> &v);


int main(int argc, char const *argv[])
{
    int num{};
    vector<int> data{ 1, 2, 3, 4, 5 };
    cout << "Initial value " << endl;
    printVector(data);
    add_one(data);
    cout << "Final value " << endl;
    printVector(data);
    cout << "Enter a number " << endl;
    cin >> num;
    scale_number(num);
    cout << "Number is " << num << endl;



    return 0;
}

void printVector(const vector<int> &v) {
    for (auto num:v) {
        cout << num << " " << endl;
    }
    cout << endl;
}



int scale_number(int &num) {
    if (num > 100) {
        num = 100;
    }
}

void add_one(vector<int> &v) {
    // we can add const if we want function not to change the value
    for (int i{ 0 }; i < v.size(); i++) {
        v.at(i) += 1;
    }
    // for (auto num: v) {
    //     num += 1;
    // }
}