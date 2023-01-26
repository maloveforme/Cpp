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

int main()
{
    Circle circle;
    Circle& refc = circle; 
    refc.setRadius(10);
    
    cout << "refc.getArea() = " << refc.getArea() << endl;
    cout << "circle.getArea() = " << circle.getArea() << endl;
}