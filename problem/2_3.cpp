// 키보드로부터 두 개의 정수를 읽어 큰 수를 화면에 출력하라.

#include <iostream>
using namespace std;

int main()
{
	cout << "두 수를 입력하라>>";
	int num1, num2;
	cin >> num1 >> num2;

	if (num1 > num2)
	{
		cout << "큰 수 = " << num1 << endl;
	}

	else
	{
		cout << "큰 수 = " << num2 << endl;
	}

	return 0;
}