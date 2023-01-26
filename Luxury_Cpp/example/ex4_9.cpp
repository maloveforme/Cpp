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
Circle::~Circle() { cout << "소멸자 실행 radius = " << radius << endl; }

int main()
{
    int arraySize = 3;
    Circle* pArray = new Circle[arraySize]; // 객체 배열의 동적 생성

    for (int i = 0; i < arraySize; i++)
    {
        pArray[i].setRadius(10 * (i+1));
        cout << pArray[i].getArea() << endl;
    }

    Circle* p = pArray; // 포인터 p에 배열의 주소값 저장

    for (int i = 0; i < arraySize; i++)
    {
        cout << p->getArea() << endl;
        p++; // 다음 주소
    }

    delete[] pArray; // 객체 배열 반환
}