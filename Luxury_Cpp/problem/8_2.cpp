#include <iostream>
using namespace std;

class Circle
{
    int radius;

public:
    Circle(int radius = 0) : radius(radius)
    {

    }

    int getRadius()
    {
        return radius;
    }

    void setRadius(int radius)
    {
        this->radius = radius;
    }

    double getArea()
    {
        return 3.14 * radius * radius;
    }
};

class NameCircle : public Circle
{
    string name;

public:
    NameCircle(int radius = 0, string name = " ") : name(name)
    {
        setRadius(radius);
    }

    void setName(string name)
    {
        this->name = name;
    }

    string getName()
    {
        return name;
    }
};

int main()
{
    NameCircle pizza[5];

    cout << "5개의 정수 반지름과 원의 이름을 입력하세요" << endl;

    string maxName = pizza[0].getName();
    int max = pizza[0].getArea();

    for (int i = 0; i < 5; i++)
    {
        cout << i + 1 << ">> ";
        int r;
        string n;
        cin >> r >> n;
        pizza[i].setName(n);
        pizza[i].setRadius(r);

        if (max < pizza[i].getArea())
        {
            max = pizza[i].getArea();
            maxName = pizza[i].getName();
        }
    }

    cout << "가장 면적이 큰 피자는 " << maxName << "입니다" << endl;
}