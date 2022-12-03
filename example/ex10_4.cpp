#include <iostream>
using namespace std;

template<typename T1, typename T2>
void mcopy(T1 src[], T2 dest[], int size)
{
	for (int i = 0; i < size; i++)
		dest[i] = src[i];
}

int main()
{
	int x[] = { 1,2,3,4,5 };
	double y[5];
	char a[5] = { 'H', 'e', 'l', 'l', 'o' };
	char b[5];

	mcopy(x, y, 5);
	mcopy(a, b, 5);

	for (int i = 0; i < 5; i++)
		cout << y[i] << ' ';
	cout << endl;

	for (int i = 0; i < 5; i++)
		cout << b[i] << ' ';
	cout << endl;

}