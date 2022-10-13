// ���� 5���� �����Ͽ� �����ڸ� �̿��Ͽ� ¦�� Ȧ���� ������ �� �ֶǷ� SelecttableRandom Ŭ������ �ۼ��ϰ�
// ¦�� 10��, Ȧ�� 10���� �����ϰ� �߻���Ű�� ���α׷��� �ۼ��϶�.
// 0�� ¦���� ó���϶�
#include <iostream>
using namespace std;

class SelecttableRandom
{
	int select;
public:
	SelecttableRandom();
	int getSelect();
	int next();
	int nextInRange(int n1, int n2);
};

SelecttableRandom::SelecttableRandom()
{
	cout << "¦��0 Ȧ��1: ";
	cin >> select;
}

int SelecttableRandom::getSelect()
{
	return select;
}

int SelecttableRandom::next()
{
	return rand();
}

int SelecttableRandom::nextInRange(int n1, int n2)
{
	while (true)
	{
		int num = rand();

		if (num % 10 >= n1 && num % 10 <= n2)
		{
			return num % 10;
			break;
		}
	}
}

int main()
{
	srand(time(NULL));
	SelecttableRandom r;

	if (r.getSelect() == 0)
	{
		cout << "-- 0���� " << RAND_MAX << "������ " << "¦��" << " ���� ���� 10��--" << endl;
		
		for (int i = 0; i < 10; i++)
		{
			int n = r.next();

			if (r.next() % 2 == 0)
			{
				cout << n << ' ';
			}

			else

			{
				cout << --n << ' ';
			}
		}
	}

	else
	{
		cout << "-- 0���� " << RAND_MAX << "������ " << "Ȧ��" << " ���� ���� 10��--" << endl;

		for (int i = 0; i < 10; i++)
		{
			int n = r.next();

			if (r.next() % 2 == 1)
			{
				cout << n << ' ';
			}

			else

			{
				cout << ++n << ' ';
			}
		}
	}
	
	cout << endl << endl;

	SelecttableRandom str;

	if (str.getSelect() == 0)
	{
		cout << "-- 2���� " << "10 ������ ���� ¦�� ���� 10�� --" << endl;

		for (int i = 0; i < 10; i++)
		{
			int n = r.nextInRange(2, 10);

			if (n % 2 == 0)
			{
				cout << n << ' ';
			}

			else
			{
				cout << --n << ' ';
			}
		}
	}
	
	else
	{
		cout << "-- 2���� " << "10 ������ ���� Ȧ�� ���� 10�� --" << endl;

		for (int i = 0; i < 10; i++)
		{
			int n = r.nextInRange(2, 10);

			if (n % 2 == 1)
			{
				cout << n << ' ';
			}

			else
			{
				cout << ++n << ' ';
			}
		}
	}

	cout << endl;

	return 0;
}