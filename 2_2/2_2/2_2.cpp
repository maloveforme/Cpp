// cout�� << �����ڸ� �̿��Ͽ� ������ ���� �������� ����ϴ� ���α׷��� �ۼ��ض�.

#include <iostream>
using namespace std;

int main()
{
	for (int i = 1; i <= 9; i++)
	{
		for (int j = 1; j <= 9; j++)
		{
			cout << i << "x" << j << "=" << i * j << " ";
		}

		cout << endl;
	}

	return 0;
}