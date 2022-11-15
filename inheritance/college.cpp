#include <iostream>
#include <memory>
#include <vector>

using namespace std;

// That's person, age and name private
// Set at construction
// Read-only
class Person
{
// Visibility for inheritance
protected:
    string name;
    int age;
public:
    Person(const string& someName, int someAge): name{someName}, age{someAge} {/*empty*/}
    string getName()
    {
        return name;
    }
    int getAge()
    {
        return age;
    }

    void describe()
    {
        cout << "name: " << name << "\n";
        cout << "age: " << age << "\n";
    }
}; 

// Student inherits person
class Student: public Person
{
    string idNumber;
public:
    Student(const string &anID, const string &aName, int anAge): idNumber{anID}, Person(aName, anAge) {}
    string getIDNumber() {
        return idNumber;
    }
    // Overload the describe function
    void describe()
    {
        cout << "ID number: " << idNumber << "\n";
        Person::describe();
    }
};

class Lecturer: public Person
{
    string subject;
    int salary;
public:
    Lecturer(const string &aName, int anAge, const string &aSubject, int aSalary): subject{aSubject}, salary{aSalary}, Person(aName, anAge) { }

    string getSubject() {
        return subject;
    }
    int getSalary() {
        return salary;
    }
    void describe()
    {
        Person::describe();
        cout << "subject: " << subject << "\n";
        cout << "salary: " << salary << "\n";
    }
};

int main(int argc, char const *argv[])
{
    // Just for testing purposes
    auto p = make_shared<Person>("Bradley", 44);
    //p->describe();

    auto s = make_shared<Student>("123456", "Tom", 36);
    s->describe();


    auto l = make_shared<Lecturer>("Aurelien", 40, "Computer Stuff", 100);
    l-> describe();

    vector<shared_ptr<Person>> v;

    v.push_back(l);
    v.push_back(s);
    v.push_back(p);
    
    for(int i=0; i<v.size(); i++)
    {
        auto p = v[i];
        p->describe();
    }

    return 0;
}
