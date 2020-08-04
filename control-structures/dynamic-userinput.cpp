#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char const *argv[])
{
    vector<int> vec{};
    int num{};
    cout << "How many data items do you want?" << endl;
    cin >> num;

    for (int i{0}; i < num; i++)
    {
        int data_item;
        cout << "Enter data item " << i << ": ";
        cin >> data_item;
        vec.push_back(data_item);
    }
    for (auto n : vec)
    {
        for (int i{0}; i < n; i++)
        {

            cout << "*";
        }
        cout << endl;
    }
    return 0;
}
