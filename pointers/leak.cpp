#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int tracker = 0;

    string s;
    cin >> s;

    while(true)
    {
        int *blob = new int[131072]; // Allocate 1MB of memory
        tracker ++;
        cout << "Allocated " << tracker << "MB\n";
    }

    return 0;
}
