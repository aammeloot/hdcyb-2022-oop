#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    // Creating values - keyword is new

    string *name;
    int *age; // single value
    int *scores; // array

    // Allocate the memory
    name = new string("Aurelien");
    age = new int(39);
    scores = new int[5];

    for(int index=0; index < 5; index++)
    {
        scores[index] = 10+index;
    }

    // To display the values, use *, other you get the address
    cout << "address: " << name << " value: " << *name << "\n";
    cout << "address: " << age << " value:" << *age << "\n";

    // To display the address of the first element of the array: use its name
    // To display the address at index i, displauy array + i
    // To display values, either use array syntax [] or use *(array+index)

    for(int index = 0; index < 5; index++)
    {

        cout << "address: " << scores + index << " value: " << scores[index] << "\n";
        // THIS IS THE SAME THING!
        cout << "address: " << scores + index << " value: " << *(scores+index) << "\n";
    }

    // Deallocate the memory
    delete name;
    delete age;
    delete[] scores; // Because array

    return 0;
}
