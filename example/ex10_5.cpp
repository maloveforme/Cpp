#include <iostream>
using namespace std;

template <typename T>
void print(T ary[], int size)
{
	for (int i = 0; i < size; i++)
		cout << ary[i] << ' ';
	cout << endl;
}

void print(char ary[], int size)
{
	for (int i = 0; i < size; i++)
		cout << (int)ary[i] << ' ';
	cout << endl;
}

int main()
{
	int x[] = { 1,2,3,4,5 };
	double d[] = { 1.1,2.2,3.3,4.4,5.5 };

	print(x, 5);
	print(d, 5);

	char c[5] = { 1,2,3,4,5 };
	print(c, 5);
}