// ���ڿ��� �ϳ� �Է¹ް� ���ڿ��� �κ� ���ڿ��� ������ ���� ����ϴ� ���α׷��� �ۼ��϶�.
// ���ô� ������ ����.
// ���ڿ� �Է�>> hello
// h
// he
// ...
// hello

#include <iostream>
#include <string>
using namespace std;

int main()
{
	string strings;

	cout << "���ڿ� �Է�>> ";
	getline(cin, strings);

	for (int i = 0; i < strings.length(); i++)
	{
		for (int j = 0; j <= i; j++)
		{
			cout << strings[j];
		}

		cout << endl;
	}

	return 0;
}