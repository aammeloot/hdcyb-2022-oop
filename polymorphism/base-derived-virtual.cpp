#include <iostream>
#include <memory>

using namespace std;

class Base {
   public:
    virtual void print() {
        cout << "I am base\n";
    }
};

class Derived : public Base {
   public:
    void print() override {
        cout << "I am derived\n";
    }
};


int main(int argc, char const *argv[])
{
    unique_ptr<Base> b = make_unique<Derived>();
    b->print();
    
    return 0;
}
