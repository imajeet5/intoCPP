#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int movie_rating[3][4]{
        {0, 4, 3, 5},
        {2, 3, 3, 5},
        {1, 4, 4, 5}};
    cout << movie_rating[1][1] << endl;

    return 0;
}

/*
 char vowels[]{'a', 'e', 'i', 'o', 'u'};
    cout << "\nThe first vowel is: " << vowels << endl;
    vowels[2] = 'p';
    cout << "The last vowel is " << vowels[2] << endl;
    // cin >> vowels[5]; out of bounds

*/