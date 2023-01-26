// ���� ���� �߻���Ű�� Random Ŭ������ ������.
// Random Ŭ������ �̿��Ͽ� ������ ������ 10�� ����ϴ� ��ʴ� ������ ����.
// Random Ŭ������ ������, next(), nextInRange()�� 3�� �Լ��� �������� �ۼ��ϰ�
// main() �Լ��� ���� �ϳ��� cpp ���Ͽ� �����϶�.
#include <iostream>
using namespace std;

class Random
{
public:
	Random();
	int next();
	int nextInRange(int n1, int n2);
};

Random::Random()
{

}

int Random::next()
{
	return rand();
}

int Random::nextInRange(int n1, int n2)
{
	int i = 0;

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
	Random r;

	cout << "-- 0���� " << RAND_MAX << "������ ���� ���� 10��--" << endl;

	for (int i = 0; i < 10; i++)
	{
		int n = r.next();
		cout << n << ' ';
	}

	cout << endl << endl << "-- 2���� " << "4 ������ ���� ���� 10�� --" << endl;

	for (int i = 0; i < 10; i++)
	{
		int n = r.nextInRange(2, 4);
		cout << n << ' ';
	}

	cout << endl;

	return 0;
}