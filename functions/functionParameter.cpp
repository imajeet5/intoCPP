#include <iostream>
#include<string>
#include<vector>

using namespace std;

void pass_by_value1(int);
void pass_by_value2(string);
void pass_by_value3(vector<string>);
void print_vector(vector<string>);

void pass_by_value1(int num) {
    num = 1000;
}
void pass_by_value2(string s) {
    s = "Changed";
}
void pass_by_value3(vector<string> v) {
    v.clear();
    cout << "Printing inside pass_by_value3" << endl;
    print_vector(v);    
}
void print_vector(vector<string> v) {
    for (auto s:v) {
        cout << s << " " << endl;
    }
    cout << endl;
}




int main(int argc, char const *argv[])
{
    string name{ "Ajeet" };
    vector<string> stringVec{ "Hello ", "My ", "Name ", "is ", "Ajeet " };
    int another_num{ 10 };
    cout << "string before function call "<< endl;
    print_vector(stringVec);
    pass_by_value3(stringVec);
    cout << "string after function call " << endl;
    print_vector(stringVec);
    // cout << "Result: " << num1 << endl;
    return 0;
}
