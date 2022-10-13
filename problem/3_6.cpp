// ���� 5���� �����Ͽ� ¦�� ������ �����ϰ� �߻���Ű�� EvenRandom Ŭ������ �ۼ��ϰ�
// EvenRandom Ŭ������ �̿��Ͽ� 10���� ¦���� �����ϰ� ����ϴ� ���α׷��� �ϼ��϶�.
// 0�� ¦���� ó���϶�
#include <iostream>
using namespace std;

class EvenRandom
{
public:
	EvenRandom();
	int next();
	int nextInRange(int n1, int n2);
};

EvenRandom::EvenRandom()
{

}

int EvenRandom::next()
{	
	int num = rand();

	if (num % 2 == 0)
		return num;
	else
		return --num;
}

int EvenRandom::nextInRange(int n1, int n2)
{
	while (true)
	{
		int num = rand();
		
		if (num % 10 >= n1 && num % 10 <= n2)
		{
			if ((num % 10) % 2 == 0)
			{
				return (num % 10);
				break;
			}
		}
	}
}

int main()
{
	srand(time(NULL));
	EvenRandom r;

	cout << "-- 0���� " << RAND_MAX << "������ ���� ���� 10��--" << endl;

	for (int i = 0; i < 10; i++)
	{
		int n = r.next();
		cout << n << ' ';
	}

	cout << endl << endl << "-- 2���� " << "10 ������ ���� ¦�� ���� 10�� --" << endl;

	for (int i = 0; i < 10; i++)
	{
		int n = r.nextInRange(2, 10);
		cout << n << ' ';
	}

	cout << endl;

	return 0;
}