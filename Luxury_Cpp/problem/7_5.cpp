#include <iostream>
using namespace std;

class Color
{
    int red, green, blue;

public:
    Color(int r = 0, int g = 0, int b = 0)
    {
        red = r; green = g; blue = b;
    }

    void setColor(int r, int g, int b) 
    {
        red = r; green = g; blue = b; 
    }

    void show() 
    {
        cout << red << ' ' << green << ' ' << blue << endl;
    }

    Color operator + (Color& c)
    {
        Color tmp;
        tmp.red = this->red + c.red;
        tmp.blue = this->blue + c.blue;
        tmp.green = this->green + c.green;
        
        return tmp;
    }

    bool operator == (Color& c)
    {
        if (this->green == c.green && this->blue == c.blue && this->red == c.red)
            return true;
        else
            false;
    }
};

int main()
{
    Color red(255, 0, 0), blue(0, 0, 255), c;
    c = red + blue;
    c.show();

    Color fuchsia(255, 0, 255);

    if (c == fuchsia)
        cout << "보라색 맞음" << endl;
    else
        cout << "보라색 아님" << endl;
}