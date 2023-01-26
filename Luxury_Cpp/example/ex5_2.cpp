#include <iostream>
using namespace std;

class Circle
{
    int radius;

public:
    Circle() { radius = 1; }
    Circle(int radius) { this->radius = radius; }
    void setRadius(int radius);
    double getArea();
};

void Circle::setRadius(int radius) { this->radius = radius; }
double Circle::getArea() { return 3.14 * radius * radius; }

Circle getCircle()
{
    Circle tmp(30);
    return tmp;
}

int main()
{
    Circle c;
    cout << c.getArea() << endl;

    c = getCircle();
    cout << c.getArea() << endl;
}