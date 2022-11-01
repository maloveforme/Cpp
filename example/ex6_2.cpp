#include <iostream>
using namespace std;

int sum(int a)
{
	int result = 0;

	for (int i = 1; i <= a; i++)
	{
		result += i;
	}

	return result;
}

int sum(int a, int b)
{
	int result = 0;

	for (int i = a; i <= b; i++)
	{
		result += i;
	}

	return result;
}

int main()
{
	cout << "3에서 5까지의 합: " << sum(3, 5) << endl;
	cout << "0에서 3까지의 합: " << sum(3) << endl;
	cout << "0에서 100까지의 합: " << sum(100) << endl;
}