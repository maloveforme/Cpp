// ����, ����, ����, ������, �������� ���� 5Ģ ������ �� �� �ִ� ���α׷��� �ۼ��϶�.
// ���� ������ ���� �������� �Էµȴ�.
// ������ �����ڴ� �ϳ��� ��ĭ���� �и��ȴ�.
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