#include <iostream>
#include <cstring>
#include <cctype>

#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    char first_name[20];
    char last_name[20];
    char full_name[50];
    char temp[50];
    // cout << "Please enter first name ";
    // cin >> first_name;
    // cout << "Please enter last name ";
    // cin >> last_name;
    // cout << "-------------------------------------"<<endl;
    // cout << "Hello, " << first_name << " your first name has " << strlen(first_name) << " characters" << endl;
    // cout << "and your last name , " << last_name << " has " << strlen(last_name) << " characters" << endl;
    // strcpy(full_name, first_name);
    // strcat(full_name, " ");
    // strcat(full_name, last_name);
    // cout << "Your full name is " << full_name << endl;
    cout << "Enter Your full name " <<  endl;
    cin.getline(full_name, 50);
    strcpy(temp, full_name);
    cout << "Your full name is " << temp << endl;
    cout << "____________________________________"  << endl;
    cout << strcmp(temp, full_name) << endl;

    for (size_t i{ 0 }; i<strlen(full_name); i++) {
        if (isalnum(full_name[i])) {
            full_name[i] = toupper(full_name[i]);
        }
    }
    cout << "Your full name in CAPS is " << full_name << endl;
    return 0;
}
