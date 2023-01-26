#include <iostream>
using namespace std;

class Circle
{
    int radius;

public:
    Circle(int radius = 1) : radius(radius)
    {

    }

    int getRadius()
    {
        return radius;
    }
};

template <typename T>
void mySwap(T& a, T& b)
{
    T tmp;
    tmp = a;
    a = b;
    b = tmp;
}

int main()
{
    int a = 4, b = 5;
    cout << "변경 전 a: " << a << ", b: " << b << endl;
    
    mySwap(a, b);
    cout << "변경 후 a: " << a << ", b: " << b << endl;

    double c = 0.3, d = 12.5;
    cout << "변경 전 c: " << c << ", d: " << d << endl;

    mySwap(c, d);
    cout << "변경 후 c: " << c << ", d: " << d << endl;

    Circle donut(5), pizza(20);
    cout << "변경 전 donut: " << donut.getRadius() << ", pizza: " << pizza.getRadius() << endl;
    
    mySwap(donut, pizza);
    cout << "변경 후 donut: " << donut.getRadius() << ", pizza: " << pizza.getRadius() << endl;
}
