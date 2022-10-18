#include <iostream>
using namespace std;

class Circle
{
    int radius;

public:
    Circle();
    Circle(int r);
    double getArea();
};

Circle::Circle() { radius = 1; }
Circle::Circle(int r) { radius = r; }
double Circle::getArea() { return 3.14 * radius * radius; }



int main()
{
    Circle donut;
    Circle pizza(30);

    cout << donut.getArea() << endl;

    Circle* p1 = &donut;
    cout << p1->getArea() << endl;
    cout << (*p1).getArea() << endl;

    Circle* p2 = &pizza;
    cout << p2->getArea() << endl;
    cout << (*p2).getArea() << endl;
}