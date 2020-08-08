#include <iostream>
#include<vector>

using namespace std;

// Function prototypes
void say_world();

double calc_area(int);



void say_hello() {
    cout << "Hello ";
    say_world();
}

int main(int argc, char const *argv[])
{
    say_hello();
    int radius;
    cout << "Enter the radius of circle ";
    cin >> radius;
    cout << "Area of the circle is " << calc_area(radius) << endl;

    return 0;
}


void say_world() {
    cout << "World :)" << endl;
}


double calc_area(int r) {
    return 3.141 * r * r;
}