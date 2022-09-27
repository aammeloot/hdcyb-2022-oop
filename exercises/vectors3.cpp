#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char const *argv[])
{
    vector<int> numbers { 1, 7, 9, 4, 2, 9, 12, 13, 17};

    // add them together
    int total = 0;
    for(int current: numbers)
    {
        total += current;
    }

    cout << total << endl;

    // average
    int length = numbers.size();
    double average = (double)total / (double)length;

    cout << average << endl;
    
    return 0;
}
