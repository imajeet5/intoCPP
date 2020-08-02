#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int number_rooms{0};
    const double price_per_room{30.0};
    const double sale_tax{0.06};
    const int estimate_expiry{30};
    cout << "Hello welcome to car cleaninng service" << endl;
    cout << "\nHow many rooms would you like cleaned?" << endl;
    cin >> number_rooms;
    cout << "\nEstimate for carpet cleaning service" << endl;
    cout << "Number of rooms: " << number_rooms << endl;
    cout << "Price per rooms: $" << price_per_room << endl;
    cout << "Cost: $" << price_per_room * number_rooms << endl;
    cout << "Tax: $" << price_per_room * number_rooms * sale_tax << endl;
    cout << "================================================" << endl;
    cout << "Total estimate: $" << (price_per_room * number_rooms) + (price_per_room * number_rooms * sale_tax) << endl;
    cout << "This estimate is valid for " << estimate_expiry << "days" << endl;

    cout << endl;

    return 0;
}
