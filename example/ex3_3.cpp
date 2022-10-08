#include <iostream>
using namespace std;

class Circle
{
public:
	int radius;
	Circle();
	Circle(int r);
	double getArea();
};

Circle::Circle() // 기본 생성자
{
	radius = 1;
	cout << "반지름 " << radius << " 원 생성 \n";
}

Circle::Circle(int r) // 생성자
{
	radius = r;
	cout << "반지름 " << radius << " 원 생성\n";
}

double Circle::getArea()
{
	return 3.14 * radius * radius;
}

int main()
{
	Circle circle; // 기본 생성자 호출
	double area = circle.getArea();
	cout << "circle의 면적은 " << area << "입니다.\n";

	Circle donut(30);
	area = donut.getArea();
	cout << "donut의 면적은 " << area << "입니다.\n";

	return 0;
}