// Write a program that asks the user for their firstname and secondname in separate inputs
// then concatenate both strings in an output saying “Hello <firsname> <secondname>”. 

#include <iostream>
#include <string>

using namespace std;

int main()
{
    string first, last;

    cout << "Enter your first name: ";
    cin >> first;

    cout << "Enter your last name: ";
    cin >> last;

    // Method 1
    string result = first + " " + last;
    cout << result << "\n";

    // Method 2
    cout << first << " " << last << "\n";

    return 0;
}

