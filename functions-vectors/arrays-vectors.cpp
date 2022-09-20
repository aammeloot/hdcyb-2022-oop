#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char const *argv[])
{
    
    // Traditional arrays in c/c++
    string names[5];
    names[0] = "Brad";
    names[1] = "Alistair";
    cout << names[1] << endl;
    //etc //etc

    // They're static and quite difficult to use

    // Instead use vectors.
    vector<string> students;

    // Add students to vector
    students.push_back("Alistair");
    students.push_back("Bryon");
    students.push_back("Mikey");

    // How long is the vector?
    cout << students.size() << endl;

    cout << students[1] << endl;

    // Roll on the whole list
    for(int index=0; index < students.size(); index++)
    {
        cout << students[index] << endl;
    }

    students.pop_back();

    // Roll on the whole list with an index
    for(int index=0; index < students.size(); index++)
    {
        cout << students[index] << endl;
    }

    // You can elect to go without an index (for-each)
    for(string name: students)
    {
        cout << name << endl;
    }


    return 0;
}