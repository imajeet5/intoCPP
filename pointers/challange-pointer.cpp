#include <iostream>

using namespace std;

void print(const int array[], size_t size);
int *apply_all(int array1[], size_t size_array1, int array2[], size_t size_array2);


int main(int argc, char const *argv[])
{
    int array1[]{ 1, 2, 3, 4, 5 };
    int array2[]{ 10, 20, 30 };
    print(array1, 5);
    int *result{ nullptr };
    result = apply_all(array1, 5, array2, 3);
    print(result, 5*3);
    delete[] result;

    return 0;
}


int *apply_all(int array1[], size_t size_array1, int array2[], size_t size_array2) {
    int *result{ nullptr };
    // allocating memory
    result = new int[size_array1 * size_array2];
    int counter{ 0 };
    for (int i{ 0 }; i < size_array2; i++) {
        for (int j{ 0 }; j< size_array1; j++) {
            result[counter] = array2[i] * array1[j];
            counter++;
        }
    }
    return result;


}

void print(const int array[], size_t size) {
    for (int i{ 0 }; i< size; i++) {
        cout << array[i] << " ";
    }
    cout << endl;
}
