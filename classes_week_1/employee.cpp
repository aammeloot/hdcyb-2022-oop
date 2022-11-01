// Class employee: 
// Someone with a name
// A base salary
// An overtime rate and amount

// It has two methods:
// Calculate the wages
// State its full (name and salary)

#include <iostream>
#include <memory>

using namespace std;

class Employee
{
    // private data
    string name;
    int salary, overtime, rate;
    // public data/methods

public:

    void setSalary(int newSalary)
    {
        salary = newSalary;
    }

    int getWages() // Return the wages as an int
    {
        return salary + overtime * rate;
    }

    void displayID()
    {
        cout << "name: " << name << " wages: " << getWages() << endl; 
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
    // Create a couple of employees (in Stack)
    Employee m("Mikey", 40000, 5, 70);
    Employee t("Tom", 41500, 4, 70);

    m.displayID();
    t.displayID();

    // Same this time with modern pointers :) 
    auto a = make_unique<Employee>("Aurelien", 42000, 0, 0);
    a->displayID();  // note the difference it uses -> instead of .
    a->setSalary(50000);
    a->displayID();

    // Same this time with old skool pointers
    Employee *b = new Employee("Bryon", 45000, 10, 50);
    b->displayID();
    // Remember to clean up after yourself when using pointers
    delete b;

    return 0;
}