#include <iostream>
using namespace std;

class Rect;

class RectManager
{
public:
    bool equals(Rect r, Rect s);
};

class Rect
{
    int _width, _height;

public:
    Rect(int width, int height)
    {
        _width = width; _height = height;
    }

    friend bool RectManager::equals(Rect r, Rect s);
};

bool RectManager::equals(Rect r, Rect s)
{
    if (r._width == s._width && r._height == s._height)
        return true;
    else
        return false;
}

int main()
{
    Rect a(3, 4), b(4, 5);
    RectManager man;

    if (man.equals(a, b))
        cout << "Equals" << endl;
    else
        cout << "Not equals" << endl;
}