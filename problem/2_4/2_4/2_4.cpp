// �Ҽ����� ������ 5���� �Ǽ��� �Է� �޾� ���� ū ���� ȭ�鿡 ����϶�.
#include <iostream>
using namespace std;

int main()
{
	cout << "5���� �Ǽ��� �Է��϶�.>> ";
	double num[5];
	
	for (int i = 0; i < 5; i++)
		cin >> num[i];

	double max = num[0];

	for (int j = 1; j < 5; j++)
	{
		if (max < num[j])
			max = num[j];
	}

	cout << "���� ū �� = " << max << endl;

	return 0;
}