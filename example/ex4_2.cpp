﻿#include <iostream>
using namespace std;

class Circle
{
    int radius;

public:
    Circle();
    Circle(int r);
    void setRadius(int r);
    double getArea();
};

Circle::Circle() { radius = 1; }
Circle::Circle(int r) { radius = r; }
void Circle::setRadius(int r) { radius = r; }
double Circle::getArea() { return 3.14 * radius * radius; }

int main()
{
    Circle circleArray[3];

    for (int i = 0; i < 3; i++)
    {
        circleArray[i].setRadius(10 * (i + 1));
        cout << "Circle " << i << "의 면적은 " << circleArray[i].getArea() << endl;
    }

    Circle* p = circleArray;

    for (int i = 0; i < 3; i++)
    {
        cout << "Circle " << i << "의 면적은 " << p->getArea() << endl;
        p++;
    }
}