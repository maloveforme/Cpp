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
// 멤버 변수 x, y 를 0으로 초기화
// x(0), y(0)으로 대체 가능

Point::Point(int x, int y) // : x(x), y(y) 가능
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