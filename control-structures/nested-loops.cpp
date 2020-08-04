#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char const *argv[])
{
    /*
    with the vector of vector we can allow each vector within the vector 2d to be of different size. 
    */
    vector<vector<int>> vector_2d{
        {1, 2, 3},
        {10, 20, 30, 40},
        {100, 200, 300, 400, 500}};
    for (auto vec : vector_2d)
    {
        for (auto val : vec)
        {
            cout << "Value is: " << val << endl;
        }
    }

    return 0;
}
