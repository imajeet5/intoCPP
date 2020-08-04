#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    char selection{};

    do
    {
        double width{}, height{};
        cout << "Do while loop is running" << endl;
        cout << "Enter the width and heigth " << endl;
        cin >> width >> height;
        cout << "The area is " << (width * height) << endl;

        cout << "Calaulate another? (Y/N)" << endl;
        cin >> selection;
        /* code */
    } while (selection != 'Y' && selection != 'y');

    cout << "Thanks!" << endl;
    return 0;
}
