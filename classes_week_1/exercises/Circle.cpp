#include <iostream>
#include <memory>

#define PI 3.1415926535897

using namespace std;

class Circle
{
    float radius;
    string colour;
public:
    Circle(float aRadius = 1.0)
    {
        radius = aRadius;
        colour = "red";
    }

    float getRadius()
    {
        return radius;
    }

    float getArea()
    {
        return PI * (radius*radius);
    }
};


int main(int argc, char const *argv[])
{
    auto c = make_unique<Circle>(2.0);

    cout << "radius: " << c->getRadius() << endl;
    cout << "area: " << c->getArea() << endl;
    
    return 0;
}
