#include <iostream>
using namespace std;

class Circle
{
	static int numofCircles;
	int radius;

public:
	Circle(int r = 1)
	{
		radius = r;
		numofCircles++;
	}

	~Circle()
	{
		numofCircles--;
	}

	static int getnumofCircles()
	{
		return numofCircles;
	}
};

int Circle::numofCircles = 0;

int main()
{
	Circle* p = new Circle[10];
	cout << "현재 원의 개수: " << Circle::getnumofCircles() << endl;

	delete[] p;
	cout << "현재 원의 개수: " << Circle::getnumofCircles() << endl;

	Circle a;
	cout << "현재 원의 개수: " << Circle::getnumofCircles() << endl;

	Circle b;
	cout << "현재 원의 개수: " << Circle::getnumofCircles() << endl;
}