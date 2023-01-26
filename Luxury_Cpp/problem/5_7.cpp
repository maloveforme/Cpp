#include <iostream>
using namespace std;

class MyIntStack
{
	int p[10]; // 최대 10개의 정수 저장
	int tos; // stack의 꼭대기

public:
	MyIntStack() {}
	bool push(int n) // 정수 n 푸시
	{
		if (n > 9)
		{
			tos = n;
			return false;
		}

		else
		{
			p[n] = n;
			return true;
		}
	}
	bool pop(int& n) // 팝하여 n에 저장.
	{
		tos--;
		
		if (tos < 0)
			return false;
		else
		{
			n = tos;
			return true;
		}
	}
};
int main()
{
	MyIntStack a;

	for (int i = 0; i < 11; i++)
	{
		if (a.push(i))
			cout << i << ' ';
		else
			cout << endl << i + 1 << "번 째 stack full" << endl;
	}

	int n;
	
	for (int i = 0; i < 11; i++)
	{
		if (a.pop(n))
			cout << n << ' ';
		else
			cout << endl << i + 1 << "번 째 stack empty";
	}

	cout << endl;
}