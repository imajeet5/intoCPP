#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char const *argv[])
{
    vector<char> vowels{'a', 'e', 'i', 'o', 'u'};
    vector<int> num1;         // empty vector
    vector<int> num2(5);      // vector of 5 element each is initilize to 0
    vector<int> num3(3, 100); // 3 element all initialized to 100
    num1.push_back(2);

    // cout << "Enter a integer" << endl;
    // cin >> num1;
    vowels.push_back('z'); // we can increase the size of vector by this method.
    vowels.push_back('x');
    vowels.push_back('y');

    cout << "vowels[8]: " << vowels[8] << endl;       // no bound checking will be done
    cout << "vowels.at(7): " << vowels.at(7) << endl; // no bound checking will be done

    cout << "num1.at(0) " << num1.at(0) << endl;
    cout << "num3[0] " << num3[0] << endl;
    cout << "num2[1] " << num2.at(1) << endl;
    cout << "length " << vowels.size() << endl;

    cout << "====================================" << endl;

    vector<vector<int>> movie_rating{
        {1, 2, 3, 4},
        {2, 4, 2, 5},
        {5, 2, 3, 1}};
        
    cout << movie_rating.at(0).at(1) << endl;    
    cout << movie_rating.at(1).at(1) << endl;    
    cout << movie_rating.at(2).at(1) << endl;    

    return 0;
}
