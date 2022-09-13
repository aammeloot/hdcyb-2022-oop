// Write a program that asks the user for their firstname and
// secondname in separate inputs – then concatenate both strings
// in an output saying “Hello <firsname> <secondname>”.

#include <iostream>

using namespace std;

int main()
{
    int age;
    cout << "How old are you?\n";

    cin >> age;
    cout << age;

    if(age >= 18) 
    {
        cout << "let's go dancing\n";
    }
    else
    {
        cout << "go home!\n";
    }

    return 0;
}
