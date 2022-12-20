#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int choice;

    cout << "Welcome to the zoo\n";
    cout << "1. See the lions\n";
    cout << "2. See the tigers\n";
    cout << "3. See the penguins\n";
    cout << "4. See the platypuses\n";
    cout << "5. See the rats\n";

    cout << "Enter your choice:";
    cin >> choice;

    switch (choice) 
    {
        case 1:
            cout << "Rrrrrrrrrr\n";
            break;
        case 2:
            cout << "Grrrroooarrr\n";
            break;
        case 3:
            cout << "Heeee heeeee\n";
            break;
        default:
            cout << "No idea what you're talking about\n";
    }

    return 0;
}
