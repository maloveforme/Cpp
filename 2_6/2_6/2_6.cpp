// ���ڿ��� �� �� �Է¹ް� �� ���� ���ڿ��� ������ �˻��ϴ� ���α׷��� �ۼ��϶�.
// ���� ������ "�����ϴ�", �ƴϸ� "���� �ʽ��ϴ�"�� ����϶�.
#include <iostream>
#include <string>
using namespace std;

int main()
{
	cout << "�� ��ȣ�� �Է��ϼ���>>";
	string password1;
	cin >> password1;

	cout << "�� ��ȣ�� �ٽ� �� �� �Է��ϼ���>>";
	string password2;
	cin >> password2;

	if (password1 == password2)
		cout << "�����ϴ�." << endl;
	else
		cout << "�ٸ��ϴ�." << endl;

	return 0;
}