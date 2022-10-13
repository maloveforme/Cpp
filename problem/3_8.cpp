// int Ÿ���� ������ ��üȭ�� Integer Ŭ������ �ۼ��϶�.
// Integer�� ��� ��� �Լ��� �ڵ� �ζ������� �ۼ��϶�.
// Integer Ŭ������ Ȱ���ϴ� �ڵ�� ������ ����.

#include <iostream>
#include <string>
using namespace std;

class Integer
{
	int num;
public:
	Integer(int n);
	Integer(string n);
	int get()
	{
		return num;
	}
	void set(int n)
	{
		num = n;
	}
	int isEven()
	{
		if (num % 2 == 0)
		{
			return 1;
		}

		else
		{
			return 0;
		}
	}
};

Integer::Integer(int n) { num = n; }

Integer::Integer(string n) { num = stoi(n); }

int main()
{
	Integer n(30);
	cout << n.get() << ' '; // 30 ���
	
	n.set(50);
	cout << n.get() << ' '; // 50 ���

	Integer m("300");
	cout << m.get() << ' '; // 300 ���
	cout << m.isEven(); // True(������ 1) ���
}