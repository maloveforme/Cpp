#include <iostream>
using namespace std;

class Circle
{
    int radius;

public:
    Circle(int radius = 0) : radius(radius)
    {

    }

    int getRadius() 
    {
        return radius; 
    }

    void setRadius(int radius)
    {
        this->radius = radius;
    }

    double getArea()
    {
        return 3.14 * radius * radius;
    }
};

class NameCircle : public Circle
{
    string name;

public:
    NameCircle(int radius = 0, string name = " ") : name(name)
    {
        setRadius(radius);
    }

    string getName()
    {
        return name;
    }

    void show()
    {
        cout << "반지름이 " << getRadius() << "인 " << getName() << endl;
    }
};

int main()
{
    NameCircle waffle(3, "waffle");
    waffle.show();
}