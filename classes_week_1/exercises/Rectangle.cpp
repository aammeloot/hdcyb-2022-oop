#include <iostream>
#include <memory>
#include <vector>

using namespace std;

class Rectangle
{
    float length, height;
public:
    Rectangle(float someLength, float someHeight)
    {
        length = someLength;
        height = someHeight;
    }

    float getLength()
    {
        return length;
    }

    float getHeight()
    {
        return height;
    }

    float getArea()
    {
        return length * height;
    }
};

int main(int argc, char const *argv[])
{
    // We use that only in this sco
    auto r = make_unique<Rectangle>(5.0, 4.0);

    cout << r->getHeight() << "\n";
    cout << r->getArea() << "\n";
    cout << r->getLength() << "\n";

    // Examples with shared pointers
    vector<shared_ptr<Rectangle>> rectangles;

    auto r1 = make_shared<Rectangle>(6.0, 3.0);
    auto r2 = make_shared<Rectangle>(5.0, 8.0);
    auto r3 = make_shared<Rectangle>(7.0, 4.0);

    rectangles.push_back(r1);
    rectangles.push_back(r2);
    rectangles.push_back(r3);

    for(auto rect: rectangles)
    {
        cout << rect->getArea() << "\n";
    } 

    return 0;
}
