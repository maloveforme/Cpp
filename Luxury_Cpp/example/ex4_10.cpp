#include <iostream>
using namespace std;

class Circle
{
    int radius;

public:
    Circle(); 
    Circle(int r); 
    void setRadius(int r) { radius = r; } 
    double getArea() { return 3.14 * radius * radius; } 
};

Circle::Circle() : radius(1) {}
Circle::Circle(int r)
{
    radius = r;
    cout << "생성자 실행 radius = " << radius << endl;
}

int main()
{
    cout << "원의 개수를 입력하세요>> ";
    int arraySize = 0;
    cin >> arraySize;

    Circle* pArray = new Circle[arraySize]; 

    int radius = 0;

    for (int i = 0; i < arraySize; i++)
    {
        cout << i + 1 << "번째 원의 반지름을 입력하세요 >> ";
        cin >> radius;
        pArray[i].setRadius(radius);
    }

    Circle* p = pArray; 

    int count = 0;

    for (int i = 0; i < arraySize; i++)
    {
        if (p->getArea() >= 100 && p->getArea() <= 200)
        {
            cout << p->getArea() << ", ";
            count++;
        }
        p++;
    }

    cout << endl << "100에서 200 사이의 면적을 가진 원의 개수는 " << count << "개입니다." << endl;

    delete[] pArray; // 
}