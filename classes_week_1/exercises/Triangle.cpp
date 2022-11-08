#include <iostream>
#include <memory.h>

using namespace std;

class Triangle
{
    int angle1, angle2, angle3;
public:
    Triangle(int a1, int a2, int a3)
    {
        angle1 = a1;
        angle2 = a2;
        angle3 = a3;
    }

    bool isValid()
    {
        if(angle1 + angle2 + angle3 == 180) {
            return true;
        }
        else
        {
            return false;
        }
    }
};

int main(int argc, char const *argv[])
{
    auto t1 = make_unique<Triangle>(70, 70, 40);
    auto t2 = make_unique<Triangle>(100, 60, 60);

    cout << t1->isValid() << "\n";
    cout << t2->isValid() << "\n";
    
    return 0;
}
