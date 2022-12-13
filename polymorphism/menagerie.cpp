#include <iostream>
#include <memory>
#include <vector>

using namespace std;

// Class animal - abstract
class Animal
{
protected:
    string type;
public:
    Animal() { type = "Animal";}
    virtual void print()=0;
};

class Dog: public Animal
{
public:
    Dog() { type = "Dog"; }
    void print() override { cout << type << "\n"; }
};

class Cat: public Animal
{
public:
    Cat() { type = "Cat"; }
    void print() override { cout << type << "\n"; }
};

int main(int argc, char const *argv[])
{
    // Create a list of animals
    vector<shared_ptr<Animal>> animalList;

    for(int i=0; i<10; i++)
    {
        shared_ptr<Animal> a;
        if(i%2==0) {
            // If even number create a cat
            a = make_shared<Cat>();
        }
        else
        {
            // Odd numbers: dogs
            a = make_shared<Dog>();
        }
        animalList.push_back(a);
    }

    // See content of list
    for (auto a: animalList)
    {
        a->print();
    }

    return 0;
}
