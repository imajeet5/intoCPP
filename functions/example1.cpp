#include <iostream>

using namespace std;

void say_hello(string);

int main(int argc, char const *argv[])
{
    string last_name {"Singh"};
    say_hello("Ajeet");
    say_hello(last_name);
    return 0;
}


void say_hello(string name) {
    cout << "Hello " << name << endl;
}