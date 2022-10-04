#include <iostream>
#include <memory>
#include <vector>

using namespace std;

class Student
{
    int age;
    string name;
public:
    Student(const string& aName, int anAge)
    {
        age = anAge;
        name = aName;
    }
    void study() {
        cout << name << " is studying.\n";
    }
};

int main(int argc, char const *argv[])
{
    // I strongly recommend to use pointers whenever you allocate
    // Class instances (aka objects)
    // To simplify we will use modern pointers.
    
    // The vector is only present in this scope
    // So we can use unique_ptr
    auto v = make_unique<vector<shared_ptr<Student>>>();

    for (int index = 0; index < 5; index ++)
    {
        string n;
        int a;
        cout << "enter the name, then enter the age\n";
        cin >> n;
        cin >> a;
        // In C++ post-2011 you can you the keyword auto
        // In this situation we change owner of the data
        // (from s to the vector) so we need to use
        // shared_ptr
        // shared_ptr<Student> s = make_shared<Student>(n, a);
        auto s = make_shared<Student>(n, a);
        // Add the student to the vector
        v->push_back(s);
    }

    for (auto student: *v) // don't forget to dereference
    {
        student->study();
    }

    return 0;
}
