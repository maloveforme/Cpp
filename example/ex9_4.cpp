#include <iostream>
using namespace std;

class Shape
{
public:
	virtual void draw()
	{
		cout << "--shape--";
	}
};

class Circle : public Shape
{
public:
	int x;
	virtual void draw()
	{
		Shape::draw();
		cout << "Circle" << endl;
	}
};

int main()
{
	Circle circle;
	Shape* pShape = &circle;

	pShape->draw(); // 동적 바인딩
	pShape->Shape::draw(); // 정적 바인딩
}