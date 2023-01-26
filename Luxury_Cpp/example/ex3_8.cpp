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
	cout << "������ " << radius << "�� �� ����\n";
}

Circle::~Circle()
{
	cout << "������ " << radius << "�� �� �Ҹ�\n";
}

Circle globalDonut(1000); // ���� ��ü1
Circle globalPizza(2000); // ���� ��ü2

void f()
{
	Circle localDonut(100); // ���� ��ü1
	Circle localPizza(200); // ���� ��ü2
}

int main()
{
	Circle donut; // ���� ��ü3
	Circle pizza(30); // ���� ��ü4
	f();
}