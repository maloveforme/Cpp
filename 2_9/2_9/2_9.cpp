// �̸�, �ּ�, ���̸� �Է¹޾� �ٽ� ����ϴ� ���α׷��� �ۼ��϶�.
// ���� ���ô� ������ ����.
// �̸���? Ȳ �� ��
// �ּҴ�? ����� �ȳ籸 ����� ���Ǿ���Ʈ
// ���̴�?
// Ȳ �� ��, ����� �ȳ籸 ����� ���Ǿ���Ʈ, 21��

#include <iostream>
#include <string>
using namespace std;

int main()
{
	string name, address, age;

	cout << "�̸���? ";
	getline(cin, name);

	cout << "�ּҴ�? ";
	getline(cin, address);

	cout << "���̴�? ";
	getline(cin, age);

	cout << name << ", " << address << ", " << age << "��";

	return 0;
}