// Ŀ�Ǹ� �ֹ��ϴ� ������ c++ ���α׷��� �ۼ��غ���.
// Ŀ�� ������ ����������, �Ƹ޸�ī��, īǪġ���� 3������.
// ������ ���� 2000, 2300, 2500���̴�.
// �Ϸ翡 20000�� �̻� ���� �Ǹ� ī�並 �ݴ´�.
// �ֹ� >> ���������� 4
// 8000���Դϴ�. ���ְ� �弼��.
#include <iostream>
#include <string>
using namespace std;

int main()
{
	cout << "���������� 2000��, �Ƹ޸�ī�� 2300��, īǪġ�� 2500���Դϴ�.\n";
	int sum = 0;

	while (true)
	{
		string coffee;
		int num, result = 0;
		cout << "�ֹ�>> ";
		cin >> coffee >> num;

		if (coffee == "����������")
			result = num * 2000;
		else if (coffee == "�Ƹ޸�ī��")
			result = num * 2300;
		if (coffee == "īǪġ��")
			result = num * 2500;
		
		cout << result << "���Դϴ�. ���ְ� �弼��.\n";
		
		sum += result;

		if (sum >= 20000)
		{
			cout << "���� " << sum << "���� �Ǹ��Ͽ� ī�並 �ݽ��ϴ�. ���� ���� ~~~\n";
			break;
		}
	}

	return 0;
}