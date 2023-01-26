#include <iostream>
#include <string>
using namespace std;

class Point
{
    int x, y;

public:
    void set(int x, int y)
    {
        this->x = x; this->y = y;
    }

    void showPoint()
    {
        cout << "(" << x << "," << y << ")" << endl;
    }
};

class ColorPoint : public Point // Point를 상속받는 ColorPoint
{
    string color;

public:
    void setColor(string color)
    {
        this->color = color;
    }

    void showColorPoint()
    {
        cout << color << ": ";
        showPoint();
    }
};

int main()
{
    Point p;
    ColorPoint cp;

    cp.set(3, 4);
    cp.setColor("Red");
    cp.showColorPoint();
}