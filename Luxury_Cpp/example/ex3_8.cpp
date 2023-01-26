#include <iostream>
using namespace std;

class Circle
{
public:
	int radius;
	Circle();
	Circle(int r);
	~Circle();
	double getArea();
};

Circle::Circle() : Circle(1) {}

Circle::Circle(int r)
{
	radius = r;
	cout << "반지름 " << radius << "인 원 생성\n";
}

Circle::~Circle()
{
	cout << "반지름 " << radius << "인 원 소멸\n";
}

Circle globalDonut(1000); // 전역 객체1
Circle globalPizza(2000); // 전역 객체2

void f()
{
	Circle localDonut(100); // 지역 객체1
	Circle localPizza(200); // 지역 객체2
}

int main()
{
	Circle donut; // 지역 객체3
	Circle pizza(30); // 지역 객체4
	f();
}