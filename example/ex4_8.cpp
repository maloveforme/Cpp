﻿#include <iostream>
using namespace std;

class Circle
{
    int radius;

public:
    Circle(); // default constructor
    Circle(int r); // constructor
    ~Circle(); // destructor
    void setRadius(int r) { radius = r; } // Inline function
    double getArea() { return 3.14 * radius * radius; } // Inline function
};

Circle::Circle() : radius(1) {}
Circle::Circle(int r)
{
    radius = r;
    cout << "생성자 실행 radius = " << radius << endl;
}
Circle::~Circle() { cout << "소멸자 실행" << endl; }

int main()
{
    int radius;

    while (true)
    {
        cout << "정수 반지름 입력(음수면 종료)>> ";
        cin >> radius;

        if (radius < 0)
            break;

        Circle* p = new Circle(radius);

        cout << "원의 면적은 " << p->getArea() << endl;
        
        delete p;
    }
}