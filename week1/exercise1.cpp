//  Write a program that asks the user to enter their name 
//– then output a message on to the screen saying “Hello <name>”.

#include <iostream>

using namespace std;

int main()
{
    string name;
    
    cout << "Please enter your name: ";
    cin >> name;
    cout << "Hello " << name << "\n";

    return 0;
}
