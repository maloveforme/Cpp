#include <iostream>
using namespace std;

class MyIntStack
{
	int* p; // 스택 메모리로 사용할 포인터
	int size; // 스택의 최대 크기
	int tos; // 스택의 탑

public:
	MyIntStack()
	{
		tos = 0;
	}

	MyIntStack(int size)
	{
		this->size = size;
		p = new int[size];
		tos = 0;
	}

	MyIntStack(MyIntStack& s) // 복사 생성자
	{
		this->size = s.size;
		this->p = new int[size];
		this->tos = s.tos;
	}

	bool push(int n) // 정수 n 푸시
	{
		tos++;

		if (tos > n)
		{
			return false;
		}

		else
		{
			p[tos] = n;
			return true;
		}
	}

	bool pop(int& n) // 팝하여 n에 저장.
	{

		if (tos < 0)
		{
			return false;
		}

		else
		{
			n = p[tos];
			tos--;
			return true;
		}
	}
};
int main()
{
	MyIntStack a(10);
	a.push(10);
	a.push(20);
	
	MyIntStack b = a; // 복사 생성
	b.push(30);

	int n;
	a.pop(n); // 스택 a 팝
	cout << "스택 a에서 팝한 값 " << n << endl;

	b.pop(n); // 스택 b 팝
	cout << "스택 b에서 팝한 값 " << n << endl;
}