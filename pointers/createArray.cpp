#include <iostream>

using namespace std;

int *create_array(size_t size, int init_value = 0);

int main(int argc, char const *argv[])
{
    int x{};
    int *arr = create_array(5, 100);
    arr[4] = 200;
    cout << "Result: " << arr[4] << endl;
    delete [] arr;
     cout << "Result: " << arr[4] << endl;
    return 0;
}


int *create_array(size_t size, int init_value) {
    int *new_storage{ nullptr };
    new_storage = new int[size];
    for (size_t i{ 0 }; i < size; i++) {
        *(new_storage + i) = init_value;
    }
    return new_storage;
}

/*
In this as the storage is on the heap we need to release it using delete [] arr;
*/