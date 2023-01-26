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

void readRadius(Circle& c)
{
    cout << "정수 값으로 반지름을입력하세요>> ";
    int r;
    cin >> r;

    c.setRadius(r);
}

int main()
{
    Circle donut;
    readRadius(donut);

    cout << "donut의 면적 = " << donut.getArea() << endl;
}