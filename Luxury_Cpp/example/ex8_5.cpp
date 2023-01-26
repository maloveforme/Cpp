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
		setA(5);
		showA();
		cout << b << endl;
	}
};

class GrandDerived : private Derived
{
	int c;

protected:
	void setAB(int x)
	{
		setA(x); // private 속성으로 바뀌어 접근 불가
		showA(); // private 속성으로 바뀌어 접근 불가
		setB(x); 
	}
};