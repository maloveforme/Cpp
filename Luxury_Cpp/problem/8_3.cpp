#include <iostream>
using namespace std;

class Point
{
    int x, y;

public:
    Point(int x = 0, int y = 0) : x(x), y(y)
    {

    }

    void setPoint(int x, int y)
    {
        this->x = x; this->y = y;
    }

    int getX()
    {
        return x;
    }

    int getY()
    {
        return y;
    }
};

class ColorPoint : public Point
{
    string color;

public:
    ColorPoint(int x = 0, int y = 0, string color = " ") : color(color)
    {
        setPoint(x, y);
    }

    void setColor(string color)
    {
        this->color = color;
    }

    void show()
    {
        cout << color << "색으로 " << "(" << getX() << "," << getY() << ")에 위치한 점입니다." << endl;
    }
};

int main()
{
    ColorPoint cp(5, 5, "RED");
    cp.setPoint(10, 20);
    cp.setColor("BLUE");
    cp.show();
}