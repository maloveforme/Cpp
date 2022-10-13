// 문제 5번을 참고하여 짝수 정수만 랜덤하게 발생시키는 EvenRandom 클래스를 작성하고
// EvenRandom 클래스를 이용하영 10개의 짝수를 랜덤하게 출력하는 프로그램을 완성하라.
// 0도 짝수로 처리하라
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

	cout << "-- 0에서 " << RAND_MAX << "까지의 랜덤 정수 10개--" << endl;

	for (int i = 0; i < 10; i++)
	{
		int n = r.next();
		cout << n << ' ';
	}

	cout << endl << endl << "-- 2에서 " << "10 까지의 랜덤 짝수 정수 10개 --" << endl;

	for (int i = 0; i < 10; i++)
	{
		int n = r.nextInRange(2, 10);
		cout << n << ' ';
	}

	cout << endl;

	return 0;
}