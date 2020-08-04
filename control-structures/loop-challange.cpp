#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char const *argv[])
{
    vector<int> vec{};
    char user_choice{'z'};

    do
    {
        cout << "Enter you choice from P (print), A (add), T (add multiple) M (mean), S (smallest), L(Largest), F (find) Q(quite)" << endl;
        cin >> user_choice;
        switch (user_choice)
        {
        case 'P':
        case 'p':
        {
            cout << "Printing " << endl;
            cout << "[ ";
            for (auto n : vec)
            {
                cout << n << " ";
            }
            cout << "]" << endl;
            break;
        }

        case 'A':
        case 'a':
        {
            int num{0};
            cout << "Add number to the list ";
            cin >> num;
            vec.push_back(num);
            break;
        }
        case 'T':
        case 't':
        {
            int numbersToInsert{0};
            cout << "How many number to insert: " << endl;
            cin >> numbersToInsert;
            cout << "Enter numbers: " << endl;
            for (int i{0}; i < numbersToInsert; i++)
            {
                int input;
                cin >> input;
                vec.push_back(input);
            }
            break;
        }
        case 'M':
        case 'm':
        {
            int sum{0};
            for (auto n : vec)
            {
                sum += n;
            }
            cout << "Mean is " << sum / vec.size() << endl;
            break;
        }
        case 'S':
        case 's':
        {
            if (vec.size() == 0)
            {
                cout << "List is empty" << endl;
                break;
            }
            int smallest = vec.at(0);
            for (auto n : vec)
            {
                if (n <= smallest)
                {
                    smallest = n;
                }
            }
            cout << "Smallest number in array is: " << smallest << endl;
            break;
        }
        case 'L':
        case 'l':
        {
            if (vec.size() == 0)
            {
                cout << "List is empty" << endl;
                break;
            }
            int lagest = vec.at(0);
            for (auto n : vec)
            {
                if (n >= lagest)
                {
                    lagest = n;
                }
            }
            cout << "Largest number in array is: " << lagest << endl;
            break;
        }
        case 'F':
        case 'f':
        {
            if (vec.size() == 0)
            {
                cout << "List is empty" << endl;
                break;
            }
            int searchNumber{0};
            int count{0};
            cout << "Enter number to search " << endl;
            cin >> searchNumber;
            for (auto n : vec)
            {
                if (n == searchNumber)
                {
                    count++;
                }
            }
            if (cout)
            {
                cout << "Number occurs: " << count << " times" << endl;
            }
            else
            {
                cout << "Number not found" << endl;
            }
            break;
        }

        default:
            cout << "Unknown Selection please try again" << endl;
            break;
        }
    } while (user_choice != 'q' && user_choice != 'Q');

    // int num{};
    // cout << "Enter a integer" << endl;
    // cin >> num;
    // vec.push_back(num);
    // for (auto n : vec)
    // {
    //     cout << "Result: " << n << endl;
    // }
    return 0;
}
