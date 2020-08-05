#include <iostream>
#include<string>

using namespace std;

int main(int argc, char const *argv[])
{
    // string s1;
    // string s2;
    // cout << "Enter the string " << endl;
    // Extraction operator stop when it sees white space 
    // cin >> s1;
    // getline(cin, s1);
    // cout << "You entered: " << s1 << endl;
    // cout << "Enter another string" << endl;
    // getline(cin, s2);
    // cout << "s1: ->" << s1 << endl;
    // cout << "s2: ->" << s2 << endl;

    string s3{ "The secret word is Boo" };
    string word{};
    cin >> word;
    size_t position = s3.find(word);
    cout << position  << endl;
    if (position != string::npos)
        cout << "word found at postion " << position << endl;
    else
        cout << "Sorry, " << "Not found" << endl;
    return 0;
}
