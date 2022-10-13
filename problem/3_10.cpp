#include <iostream>
using namespace std;

class Add
{
	int a, b;

public:
	void setValue(int num1, int num2);
	void calculate();
};

void Add::setValue(int num1, int num2)
{
	a = num1; b = num2;
}

void Add::calculate()
{
	cout << a + b << endl;
}

class Sub
{
	int a, b;

public:
	void setValue(int num1, int num2);
	void calculate();
};

void Sub::setValue(int num1, int num2)
{
	a = num1; b = num2;
}

void Sub::calculate()
{
	cout << a - b << endl;
}

class Mul
{
	int a, b;

public:
	void setValue(int num1, int num2);
	void calculate();
};

void Mul::setValue(int num1, int num2)
{
	a = num1; b = num2;
}

void Mul::calculate()
{
	cout << a * b << endl;
}

class Div
{
	int a, b;

public:
	void setValue(int num1, int num2);
	void calculate();
};

void Div::setValue(int num1, int num2)
{
	a = num1; b = num2;
}

void Div::calculate()
{
	cout << a / b << endl;
}

int main()
{
	Add a;
	Sub s;
	Mul m;
	Div d;

	while (true)
	{
		cout << "두 정수와 연산자를 입력하세요>> ";
		int num1, num2;
		char op;
		cin >> num1 >> num2 >> op;

		if (op == '+')
		{
			a.setValue(num1, num2);
			a.calculate();
		}

		else if (op == '-')
		{
			s.setValue(num1, num2);
			s.calculate();
		}

		else if (op == '*')
		{
			m.setValue(num1, num2);
			m.calculate();
		}

		else if (op == '/')
		{
			d.setValue(num1, num2);
			d.calculate();
		}
	}
	return 0;
}