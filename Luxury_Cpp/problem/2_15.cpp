// 덧셈, 뺄셈, 곱셈, 나눗셈, 나머지의 정수 5칙 연산을 할 수 있는 프로그램을 작성하라.
// 식은 다음과 같은 형식으로 입력된다.
// 정수와 연산자는 하나의 빈칸으로 분리된다.
// ex) ? 2 + 34
// 2 + 34 = 36
// ? -1 - 36
// -1 - 36 = -37

#include <iostream>
using namespace std;

int main()
{
	int num1 = 0; int num2 = 0;
	char Operator = NULL;

	cout << "? ";
	cin >> num1 >> Operator >> num2;

	if (Operator == '+')
	{
		cout << num1 << " + " << num2 << " = " << num1 + num2;
	}

	else if (Operator == '-')
	{
		cout << num1 << " - " << num2 << " = " << num1 - num2;
	}

	else if (Operator == '*')
	{
		cout << num1 << " * " << num2 << " = " << num1 * num2;
	}

	if (Operator == '/')
	{
		cout << num1 << " / " << num2 << " = " << num1 / num2;
	}

	if (Operator == '%')
	{
		cout << num1 << " % " << num2 << " = " << num1 % num2;
	}

	return 0;
}