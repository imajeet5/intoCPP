#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main(int argc, char const *argv[])
{
    int room_width{0};
    int room_length{0};
    cout << "Enter the width of the room: ";
    cin >> room_width;

    cout << "Enter the length of the room: ";
    cin >> room_length;
    cout << "The area of room is " << room_width * room_length << " square feet" << endl;
    return 0;
}

// Type of initlization
/*
    int num1 = 21;
    int num2(21);
    int num3{21};
    int num4;

    cout << "num1: " << num1 << endl;
    cout << "num2: " << num2 << endl;
    cout << "num3: " << num3 << endl;
    cout << "num4: " << num4 << endl;
    return 0;
 
 */
