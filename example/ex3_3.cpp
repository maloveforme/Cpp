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

Circle::Circle() // �⺻ ������
{
	radius = 1;
	cout << "������ " << radius << " �� ���� \n";
}

Circle::Circle(int r) // ������
{
	radius = r;
	cout << "������ " << radius << " �� ����\n";
}

double Circle::getArea()
{
	return 3.14 * radius * radius;
}

int main()
{
	Circle circle; // �⺻ ������ ȣ��
	double area = circle.getArea();
	cout << "circle�� ������ " << area << "�Դϴ�.\n";

	Circle donut(30);
	area = donut.getArea();
	cout << "donut�� ������ " << area << "�Դϴ�.\n";

	return 0;
}