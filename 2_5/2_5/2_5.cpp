// Enter Ű�� �Էµ� ������ ���ڵ��� �а�, �Էµ� ���� 'x'�� ������ ȭ�鿡 ����϶�.

#include <iostream>
#include <string>
using namespace std;

int main()
{
	cout << "���ڸ� �Է��϶�(100�� �̸�)" << endl;
	string strings;
	getline(cin, strings);
	int count = 0;

	for (int i = 0; i < strings.length(); i++)
	{
		if (strings[i] == 'x')
			count++;
	}

	cout << "x�� ������ " << count << endl;

	return 0;
}