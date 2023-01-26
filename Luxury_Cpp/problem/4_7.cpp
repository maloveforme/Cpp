#include <iostream>
using namespace std;

class Circle
{
    int radius;

public:
    void setRadius(int radius);
    double getArea();
};

void Circle::setRadius(int radius) { this->radius = radius; }
double Circle::getArea()
{
    if (3.14 * radius * radius > 100)
    {
        return 1;
    }

    else
        return 0;
}

int main()
{
    Circle circle1; Circle circle2; Circle circle3;
    int radius[3];
    cout << "원1의 반지름: ";
    cin >> radius[0];

    cout << "원2의 반지름: ";
    cin >> radius[1];

    cout << "원3의 반지름: ";
    cin >> radius[2];

    circle1.setRadius(radius[0]);
    circle2.setRadius(radius[1]);
    circle3.setRadius(radius[2]);

    int count = circle1.getArea() + circle2.getArea() + circle3.getArea();

    cout << "면적이 100보다 큰 원은 " << count << "개입니다." << endl;
}