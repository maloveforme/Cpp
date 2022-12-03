#include <iostream>
using namespace std;

template <class T>
class MyStack
{
	int tos;
	T data[100];

public:
	MyStack()
	{
		tos = -1;
	}

	void push(T element)
	{
		if (tos == 99)
		{
			cout << "stack full";
			return;
		}

		tos++;
		data[tos] = element;
	}

	T pop()
	{
		T retData;

		if (tos == -1)
		{
			cout << "stack empty";
			return 0;
		}

		retData = data[tos--];
		return retData;
	}
};

class Point
{
	int x, y;

public:
	Point(int x = 0, int y = 0) : x(x), y(y)
	{

	}

	void show()
	{
		cout << "(" << x << "," << y << ")" << endl;
	}
};
int main()
{
	MyStack<int*> ipStack;

	int* p = new int[3];
	for (int i = 0; i < 3; i++)
		p[i] = i * 10;
	ipStack.push(p); // 포인터 푸시

	int* q = ipStack.pop(); // 포인터 팝
	for (int i = 0; i < 3; i++)
		cout << q[i] << ' ';
	cout << endl;
	delete[] p;

	MyStack<Point> pointStack;
	Point a(2, 3), b;
	pointStack.push(a);
	b = pointStack.pop();
	b.show();

	MyStack<Point*> pStack;
	pStack.push(new Point(10, 20));
	Point* pPoint = pStack.pop();
	pPoint->show();

	MyStack<string> stringStack;
	stringStack.push("C++");
	stringStack.push("Java");

	cout << stringStack.pop() << ' ' << stringStack.pop() << endl;

}