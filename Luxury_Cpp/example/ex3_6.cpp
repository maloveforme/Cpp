#include <iostream>
using namespace std;

class Rectangle
{
public:
	int width, height;
	Rectangle();
	Rectangle(int length);
	Rectangle(int width, int height);
	void isSquare();
};

Rectangle::Rectangle() : width(1), height(1)
{

}

Rectangle::Rectangle(int length)
{
	width = length; height = length;
}

Rectangle::Rectangle(int l, int h) : width(l), height(h)
{

}

void Rectangle::isSquare()
{
	if (width == height)
		cout << "TRUE\n";
	else
		cout << "FALSE\n";
}

int main()
{
	Rectangle rect1;
	Rectangle rect2(3, 5);
	Rectangle rect3(3);

	rect1.isSquare();
	rect2.isSquare();
	rect3.isSquare();
}