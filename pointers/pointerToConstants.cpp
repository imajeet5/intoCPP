#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int high_score{ 100 };
    int low_score{ 65 };
    const int *score_ptr{ &high_score };
    // *score_ptr = 86; Error
    score_ptr = &low_score; 
    return 0;
}
