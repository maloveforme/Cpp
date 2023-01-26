#include <iostream>
using namespace std;

class Rect;

class RectManager
{
public:
    bool equals(Rect r, Rect s);
    void copy(Rect& dest, Rect& src);
};

class Rect
{
    int _width, _height;

public:
    Rect(int width, int height)
    {
        _width = width; _height = height;
    }

    friend RectManager;
};

bool RectManager::equals(Rect r, Rect s)
{
    if (r._width == s._width && r._height == s._height)
        return true;
    else
        return false;
}

void RectManager::copy(Rect& dest, Rect& src)
{
    dest._width = src._width; dest._height = src._height;
}

int main()
{
    Rect a(3, 4), b(4, 5);
    RectManager man;

    man.copy(b, a);

    if (man.equals(a, b))
        cout << "Equals" << endl;
    else
        cout << "Not equals" << endl;
}