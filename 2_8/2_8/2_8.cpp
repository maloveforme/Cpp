// �� ���ο� ';' ���� 5���� �̸��� �����Ͽ� �Է¹޾�, �� �̸��� ����� ȭ�鿡 ����ϰ� ���� �� �̸��� �Ǻ��϶�.

#include <iostream>
#include <string>
using namespace std;

int main()
{
	cout << "5���� �̸��� ';'���� �����Ͽ� �Է��ϼ���\n" << ">>";
	string names[5];

	for (int i = 0; i < 5; i++)
	{
		getline(cin, names[i], ';');
	}

	int max = 0;

	for (int i = 0; i < 5; i++)
	{
		cout << i << " : " << names[i] << endl;

		if (names[max].length() < names[i].length())
			max = i;
	}

	cout << "���� �� �̸��� " << names[max] << endl;

	return 0;
}