#include <iostream>
using namespace std;

class Circle
{
public:
	int radius;
	Circle(); // 생성자
	Circle(int r);
	~Circle(); // 소멸자
	double getArea();
};

Circle::Circle() : Circle(1) { }

Circle::Circle(int r)
{
	radius = r;
	cout << "반지름 " << radius << "인 원 생성\n";
}

Circle::~Circle()
{
	cout << "반지름 " << radius << "인 원 소멸\n";
}

double Circle::getArea()
{
	return 3.14 * radius * radius;
}

int main()
{
	Circle circle;
	Circle donut(30);

	return 0;
}