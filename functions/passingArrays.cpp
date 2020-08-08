#include <iostream>

using namespace std;

void print_array(int[], size_t);
void zero_array(int[], size_t);

int main(int argc, char const *argv[])
{
    int num_arr[]{ 1, 2, 3, 4, 5 };
    zero_array(num_arr, 5);
    print_array(num_arr, 5);
    return 0;
}

void print_array(int numbers[], size_t size) {
    for (size_t i{ 0 }; i< size; i++) {
        cout << numbers[i] << endl;
    }
}

// using const we cannot modify that paseed array
// void zero_array(const int numbers[], size_t size) {
//     for (size_t i{ 0 }; i< size; i++) {
//         numbers[i] = 0;
//     }
void zero_array(int numbers[], size_t size) {
    for (size_t i{ 0 }; i< size; i++) {
        numbers[i] = 0;
    }
}
