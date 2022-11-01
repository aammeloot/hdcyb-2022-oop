// Class employee: 
// Someone with a name
// A base salary
// An overtime rate and amount

// It has two methods:
// Calculate the wages
// State its full (name and salary)

#include <iostream>

using namespace std;

class Employee
{
    // private data
    string name;
    int salary, overtime, rate;
    // public data/methods

public:
    int getWages() // Return the wages as an int
    {
        return salary + overtime * rate;
    }

    void displayID()
    {
        cout << "name: " << name << "wages: " << getWages() << endl; 
    }

    // To create an object we need a function to initialise it
    // This function is called a constructor
    // It simply takes the name of the class.
    Employee(const string& aName, int aSalary, int anOvertime, int aRate)
    {
        name = aName;
        salary = aSalary;
        overtime = anOvertime;
        rate = aRate;
    }
};


int main()
{
    return 0;
}