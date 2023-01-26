#include <iostream>
using namespace std;

class Circle
{
    int radius;

public:
    Circle() { radius = 1; }
    Circle(int radius);
    void setRadius(int radius);
    int getArea();
};

Circle::Circle(int radius)
{
    this->radius = radius;
}

void Circle::setRadius(int radius) { this->radius = radius; }
int Circle::getArea()
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
    int size = 0;
    cout << "원의 개수: ";
    cin >> size;
    
    Circle* pArray = new Circle[size];
    int radius = 0, count = 0;

    for (int i = 0; i < size; i++)
    {
        cout << "원" << i + 1 << "의 반지름: ";
        cin >> radius;
        pArray[i].setRadius(radius);
        count += pArray[i].getArea();
    }
    
    cout << "면적이 100보다 큰 원은 " << count << "개입니다." << endl;
    
    delete[] pArray;
}