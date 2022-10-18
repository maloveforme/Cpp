#include <iostream>
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
    Circle* p, * q; // 포인터 객체 선언
    p = new Circle; q = new Circle(30); // 동적 할당

    cout << p->getArea() << endl << q->getArea() << endl;

    delete p; delete q; // 반환
}