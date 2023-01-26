// 문제 5번을 참고하여 생성자를 이용하여 짝수 홀수를 선택할 수 있또록 SelecttableRandom 클래스를 작성하고
// 짝수 10개, 홀수 10개를 랜덤하게 발생시키는 프로그램을 작성하라.
// 0도 짝수로 처리하라
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
	cout << "짝수0 홀수1: ";
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
		cout << "-- 0에서 " << RAND_MAX << "까지의 " << "짝수" << " 랜덤 정수 10개--" << endl;
		
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
		cout << "-- 0에서 " << RAND_MAX << "까지의 " << "홀수" << " 랜덤 정수 10개--" << endl;

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
		cout << "-- 2에서 " << "10 까지의 랜덤 짝수 정수 10개 --" << endl;

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
		cout << "-- 2에서 " << "10 까지의 랜덤 홀수 정수 10개 --" << endl;

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