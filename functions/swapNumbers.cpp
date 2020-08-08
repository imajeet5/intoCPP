#include <iostream>

using namespace std;

void swap(int &a, int &b);

int main(int argc, char const *argv[])
{
    int x{}, y{};
    cout << "Enter two numbers " << endl;
    cin >> x >> y;
    swap(x, y);
    cout << "Number after swapping are: " << x << " " << y << endl;
    return 0;
}


void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}