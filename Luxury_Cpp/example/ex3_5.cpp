#include <iostream>
using namespace std;

class Point
{
	int x, y;
	
public:
	Point();
	Point(int x, int y);
	void Show();
};

Point::Point() : Point(0, 0) {}
// ��� ���� x, y �� 0���� �ʱ�ȭ
// x(0), y(0)���� ��ü ����

Point::Point(int x, int y) // : x(x), y(y) ����
{
	this->x = x; this->y = y;
}

void Point::Show()
{
	cout << "(" << x << "," << y << ")\n";
}

int main()
{
	Point Origin;
	Point target(10, 20);

	Origin.Show(); target.Show();

	return 0;
}