// ������ ���� "yes"�� �Էµ� ������ �������� �ʴ� ���α׷��� �ۼ��϶�.
// ����ڷκ��� �Է��� cin.getline(); �Լ��� ����϶�.

#include <iostream>
#include <string>
using namespace std;

int main()
{
	while (true)
	{
		string password;
		cout << "���Ḧ ���Ͻø� yes�� �Է��ϼ���>>";
		getline(cin, password);
		
		if (password == "yes")
		{
			cout << "�����մϴ�.." << endl;
			break;
		}
	}

	return 0;
}