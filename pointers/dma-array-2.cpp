#include <iostream>

using namespace std;

void printArrays(int array_pointer[], int arr[]) {
    for (int i = 0; i < 5; i++)
    {
        cout << "Value of array_pointer[" << i << "]: "  << array_pointer[i] << endl;
        cout << "Value of arr[" << i << "]:           "  << arr[i] << endl;
    }
    cout <<  endl;
}

void updateArray(int array_pointer[]) {
    for (int i = 0; i < 5; i++)
    {
        array_pointer[i] *= 10;
    }
    cout <<  endl;
}

int main(int argc, char const *argv[])
{
    int *array_pointer{};
    int arr[]{ 10, 20, 30, 40, 50 };

    // as the first element of the array is the location in the memory
    array_pointer = arr;

    cout << "Address array_pointer pointing to: " << array_pointer << endl;
    cout << "Address array_pointer[0] pointing to: " << &array_pointer[0] << endl;
    cout << "Address of arr to: " << arr << endl;
    cout << "Value of *arr to: " << *arr << endl;
    cout << "Value of *array_pointer to: " << *array_pointer << endl;
    cout << "Value of *(array_pointer + 1) to: " << *(array_pointer + 1) << endl;
    cout <<  endl;
    printArrays(array_pointer, arr);

    cout <<  endl;
    cout << "Updating array_pointer:"  << endl;
    updateArray(array_pointer);
    printArrays(array_pointer, arr);


    return 0;
}


// Basically here temp_prt[0] == *temp_prt[0]