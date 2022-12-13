#include <iostream>
#include <memory>

using namespace std;

class Base {
   public:
    void print() {
        cout << "I am base\n";
    }
};

class Derived : public Base {
   public:
    void print() {
        cout << "I am derived\n";
    }
};


int main(int argc, char const *argv[])
{
    // Scenario 1: create a "hard" base object
    Base b;
    b.print();
    // I am base

    // Scenario 2: create a "hard" derived object
    Derived d;
    d.print();
    // I am derived

    // Scenario 3: create a base pointer, base object
    auto bptr = make_unique<Base>();
    bptr->print();
    // I am based

    // Scenario 4: create a derived pointer, derived object
    auto dptr = make_unique<Derived>();
    dptr->print();
    // I am derived

    // Scenario 5: transgression, create a pointer,
    // allocate a derived object to base pointer
    unique_ptr<Base> bptr2 = make_unique<Derived>();
    bptr2->print();
    // I am base

    return 0;
}
