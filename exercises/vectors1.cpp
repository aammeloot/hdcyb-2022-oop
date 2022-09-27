#include <iostream>
#include <vector>

using namespace std;

void displayNames(const vector<string> &snames)
{   // Roll on all the names and display
    cout << "===================\n";
    for (string name: snames)
    {
        cout << name << endl;
    }
    cout << "===================\n";
}

int searchName(const vector<string> &snames, const string &keyword)
{
    for(int index = 0; index < snames.size(); index++)
    {
        if(snames[index] == keyword)
        {
            return index;
        }
    }
    return NULL;
}


// Input the names
void inputName(vector<string> &snames)
{
    // Input 5 names
    for (int counter = 0; counter < 5; counter++)
    {
        cout << "Enter the name of a student:\n";
        string sname;
        cin >> sname;
        // Add to the vector
        snames.push_back(sname);
    }
}

// Main program
int main(int argc, char const *argv[])
{
    vector<string> studentNames;
    
    inputName(studentNames);
    displayNames(studentNames);
    
    // Define a search term
    string searchTerm;
    cout << "Enter a name: ";
    cin >> searchTerm;
    int result = searchName(studentNames, searchTerm);
    if(!result)
    {
        cout << "Name not found.\n";
    }
    else
    {
        cout << "Name found at index: " << result << endl;
    }

    return 0;
}
