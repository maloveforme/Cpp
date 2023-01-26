#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	char password[11];
	cout << "암호를 입력하세요: \n";

	while (true)
	{
		cout << "암호: ";
		cin >> password;

		if (strcmp(password,"C++") == 0)
		{
			cout << "로그인 되었습니다. \n";
			break;
		}

		else
		{
			cout << "암호가 틀렸습니다. \n";
		}
	}

	return 0;
}