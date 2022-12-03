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

int main()
{
	MyStack<int> iStack;
	iStack.push(3);
	cout << iStack.pop() << endl;

	MyStack<double> dStack;
	dStack.push(3.5);
	cout << dStack.pop() << endl;

	MyStack<char>* p = new MyStack<char>();
	p->push('a');
	cout << p->pop() << endl;

	delete p;
}