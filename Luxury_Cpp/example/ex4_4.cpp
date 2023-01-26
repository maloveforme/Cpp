#include <iostream>
using namespace std;

class Circle
{
    int radius;

public:
    Circle();
    Circle(int r);
    void setRadius(int r);
    double getArea();
};

Circle::Circle() { radius = 1; }
Circle::Circle(int r) { radius = r; }
void Circle::setRadius(int r) { radius = r; }
double Circle::getArea() { return 3.14 * radius * radius; }

int main()
{
    Circle circles[2][3];
    int p = 1;

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            circles[i][j].setRadius(p);
            cout << "Circle [" << i << "," << j << "]의 면적은 " << circles[i][j].getArea() << endl;
            p++;
        }
    }
}