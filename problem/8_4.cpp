#include <iostream>
using namespace std;

class Point
{
    int x, y;

public:
    Point(int x = 0, int y = 0) : x(x), y(y)
    {

    }

    int getX()
    {
        return x;
    }

    int getY()
    {
        return y;
    }

    void setPoint(int x, int y)
    {
        this->x = x; this->y = y;
    }
};

class ColorPoint : public Point
{
    string color;

public:
    ColorPoint(int x = 0, int y = 0, string color = "BLACK") : color(color)
    {
        setPoint(x, y);
    }

    void show()
    {
        cout << color << "색으로 " << "(" << getX() << "," << getY() << ")에 위치한 점입니다." << endl;
    }

    void setColor(string color)
    {
        this->color = color;
    }
};

int main()
{
    ColorPoint zeroPoint;
    zeroPoint.show();

    ColorPoint cp(5, 5);
    cp.setPoint(10, 20);
    cp.setColor("BLUE");
    cp.show();
}