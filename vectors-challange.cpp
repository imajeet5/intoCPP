#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char const *argv[])
{
    vector<int> vector1;
    vector<int> vector2;
    vector1.push_back(10);
    vector1.push_back(20);
    cout << "Element at 0 in vector1 " << vector1.at(0) << endl;
    cout << "Element at 1 in vector1 " << vector1.at(1) << endl;
    vector2.push_back(100);
    vector2.push_back(200);
    cout << "Element at 0 in vector2 " << vector2.at(0) << endl;
    cout << "Element at 1 in vector2 " << vector2.at(1) << endl;
    cout << "Size of vector2 " << vector2.size() << endl;

    vector<vector<int>> vector_2d;
    vector_2d.push_back(vector1);
    vector_2d.push_back(vector2);
    cout << "\nElement at 0 0 in vector_2d " << vector_2d.at(0).at(0) << endl;
    cout << "Element at 0 1 in vector_2d " << vector_2d.at(0).at(1) << endl;
    cout << "Element at 1 0 in vector_2d " << vector_2d.at(1).at(0) << endl;
    cout << "Element at 1 1 in vector_2d " << vector_2d.at(1).at(1) << endl;

    vector1.at(0) = 1000;
    cout << "\nElement at 0 in vector1 " << vector1.at(0) << endl;
    cout << "\nElement at 0 0 in vector_2d " << vector_2d.at(0).at(0) << endl;
    cout << "Element at 0 1 in vector_2d " << vector_2d.at(0).at(1) << endl;
    cout << "Element at 1 0 in vector_2d " << vector_2d.at(1).at(0) << endl;
    cout << "Element at 1 1 in vector_2d " << vector_2d.at(1).at(1) << endl;
    // cin >> num1;
    // cout << "You Entered: " << num1 << endl;
    return 0;
}
