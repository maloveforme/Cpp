#include <iostream>
using namespace std;

class Base
{
	int a;

protected:
	void setA(int a)
	{
		this->a = a;
	}

public:
	void showA()
	{
		cout << a << endl;
	}
};

class Derived : private Base
{
	int b;

protected:
	void setB(int b)
	{
		this->b = b;
	}

public:
	void showB()
	{
		cout << b << endl;
	}
};

int main()
{
	Derived x;

	x.a = 5; // 멤버가 private으로 되어 있음
	x.setA(10); // 상속되면서 멤버가 private으로 되어 있음
	x.showA(); // 상속되면서 멤버가 private으로 되어 있음
	x.b = 10; // 멤버가 private으로 되어 있음
	x.setB(10); // 멤버가 protected로 되어 있음
	x.showB();
}