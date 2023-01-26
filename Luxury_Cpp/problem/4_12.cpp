#include <iostream>
using namespace std;

class Circle
{
    int radius;
    string name;

public:
    void setCircle(string name, int radius);
    double getArea();
    string getName();
};

class CircleManager
{
    Circle* p;
    int size;

public:
    CircleManager() {}
    CircleManager(int size);
    ~CircleManager() { delete [] p; }
    void serachByName();
    void searchByArea();
};

void Circle::setCircle(string name, int radius)
{
    this->name = name; this->radius = radius;
}

double Circle::getArea() { return 3.14 * radius * radius; }

string Circle::getName() { return name; }

CircleManager::CircleManager (int size)
{
    this->size = size;
    p = new Circle[size];

    for (int i = 0; i < size; i++)
    {
        int radius;
        string name;
        cout << "원1의 이름과 반지름: ";
        cin >> name >> radius;
        p[i].setCircle(name, radius);
    }
}

void CircleManager::serachByName()
{
    cout << "검색하고자 하는 원의 이름: ";
    string name;
    cin >> name;

    for (int i = 0; i < size; i++)
    {
        if (p[i].getName() == name)
            cout << name << "의 면적은 " << p[i].getArea() << endl;
    }
}

void CircleManager::searchByArea()
{
    cout << "최소 면적을 정수로 입력하세요: ";
    int Area;
    cin >> Area;

    for (int i = 0; i < size; i++)
    {
        if (p[i].getArea() > Area)
            cout << p[i].getName() << "의 면적은 " << p[i].getArea() << ", ";
    }
    cout << endl;
}

int main()
{
    int size;
    cout << "원의 개수 >> ";
    cin >> size;
   
    CircleManager cm(size);
    cm.serachByName();
    cm.searchByArea();

}