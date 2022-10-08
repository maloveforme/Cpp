#include <iostream>
using namespace std;

class Circle
{
public:
    int radius;
    double getArea();
};

double Circle::getArea()
{
    return 3.14 * radius * radius;
}

int main()
{
    Circle circle;

    circle.radius = 1;
    double area = circle.getArea();

    cout << "circle의 면적은 " << area << "입니다.\n";

    Circle donut;
    donut.radius = 30;
    area = donut.getArea();

    cout << "donut의 면적은 " << area << "입니다.\n";

    return 0;
}
