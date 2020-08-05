#include <iostream>
#include<string>

using namespace std;

int main(int argc, char const *argv[])
{
    /*
    Different ways to initlized a string
    */
    string s1;
    string s2{ "Ajeet" };
    string s3{ s2 };
    string s4{ "Ajeet", 3 };// Aje
    string s5{ s3, 0, 2 }; // Aj
    string s6(3, 'X'); // XXX; This is constructor syntax
    string s7;
    string sentence;

    s1 = "C++ Rocks!";
    s7 = s1; // s2 will have a copy of s1
    // sentence = "C++" + " is powerful"; not valid
    sentence = s2 + " HI " + s7;
    // two C style sting don't combine: "ajeet" + "singh" is wrong
    

    cout << s1 << " " << s2 << " " << s3 << " " << s4  << " " << s5 << " " << s6 << " " << s7 << " " << sentence<< endl;

    for (auto c: sentence) {
        cout << c;
    }

}
