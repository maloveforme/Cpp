#include <iostream>
using namespace std;

class Rectangle
{
public:
	int width, height;
	int getArea();
};

int Rectangle::getArea()
{
	return width * height;
}

int main()
{
	Rectangle rect;
	rect.width = 3; rect.height = 5;

	cout << "�簢���� ������ " << rect.getArea() << "�Դϴ�.\n";

	return 0;
}