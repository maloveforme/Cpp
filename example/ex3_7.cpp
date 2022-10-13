#include <iostream>
using namespace std;

class Circle
{
public:
	int radius;
	Circle(); // ������
	Circle(int r);
	~Circle(); // �Ҹ���
	double getArea();
};

Circle::Circle() : Circle(1) { }

Circle::Circle(int r)
{
	radius = r;
	cout << "������ " << radius << "�� �� ����\n";
}

Circle::~Circle()
{
	cout << "������ " << radius << "�� �� �Ҹ�\n";
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