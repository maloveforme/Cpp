#include <iostream>
using namespace std;

class Circle
{
	int radius;
	
public:
	Circle(int r) { radius = r; }
	int getRadius() { return radius; }
	void setRadius(int r) { radius = r; }
	void show() { cout << "반지름이 " << radius << "인 원" << endl; }
};

void increaseBy(Circle& a, Circle& b) // 여기서 참조 연산자를 붙이지 않으면 새 인스턴스가 생성되므로 안 됨.
{
	int r = a.getRadius() + b.getRadius();
	a.setRadius(r);
}

int main()
{
	Circle x(10), y(5);
	increaseBy(x, y);
	x.show();
}