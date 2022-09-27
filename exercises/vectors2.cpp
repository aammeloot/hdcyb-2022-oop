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


int main(int argc, char const *argv[])
{
    vector<string> thisnames { "sarah", "james", "michael", "susan", "gerry" };
    displayNames(thisnames);

    // 2.	Add the name ‘jimmy’ to the end of the vector
    thisnames.push_back("Jimmy");
    displayNames(thisnames);

    // 3.	Add the name ‘abigail’ to the third item of the vector 
    // Using an iterator in this case thisnames.begin() + 2
    thisnames.insert(thisnames.begin() + 2, "abigail");
    displayNames(thisnames);

    // 4.	Remove ‘gerry’ from the vector
    int gerryIndex = searchName(thisnames, "gerry");
    if(gerryIndex != NULL)
    {
        thisnames.erase(thisnames.begin() + gerryIndex);
    }
    displayNames(thisnames);


    return 0;
}
