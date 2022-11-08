#include <iostream>
using namespace std;

class Rect
{
    int _width, _height;

public:
    Rect(int width, int height)
    {
        _width = width; _height = height;
    }

    friend bool equals(Rect r, Rect s);
};

bool equals(Rect r, Rect s)
{
    if (r._width == s._width && r._height == s._height)
        return true;
    else
        return false;
}

int main()
{
    Rect a(3, 4), b(4, 5);

    if (equals(a, b))
        cout << "Equals" << endl;
    else
        cout << "Not equals" << endl;
}