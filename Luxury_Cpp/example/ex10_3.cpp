#include <iostream>
using namespace std;

template <typename T>
T add(T data[], int n)
{
	T sum = 0;

	for (int i = 0; i < n; i++)
		sum += data[i];

	return sum;
}

int main()
{
	int x[] = { 1,2,3,4,5 };
	double y[] = { 1.2, 2.3, 3.4, 4.5, 5.6, 6.7 };

	cout << "sum of x = " << add(x, sizeof(x) / sizeof(int)) << endl;
	cout << "sum of y = " << add(y, sizeof(y) / sizeof(double)) << endl;
}