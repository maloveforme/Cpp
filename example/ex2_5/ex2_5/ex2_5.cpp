#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	char password[11];
	cout << "��ȣ�� �Է��ϼ���: \n";

	while (true)
	{
		cout << "��ȣ: ";
		cin >> password;

		if (strcmp(password,"C++") == 0)
		{
			cout << "�α��� �Ǿ����ϴ�. \n";
			break;
		}

		else
		{
			cout << "��ȣ�� Ʋ�Ƚ��ϴ�. \n";
		}
	}

	return 0;
}