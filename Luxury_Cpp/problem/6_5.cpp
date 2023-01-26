#include <iostream>
using namespace std;

class ArrayUtility
{
public:
	static void intToDouble(int source[], double dest[], int size)
	{
		int temp = 0;
		
		for (int i = 0; i < size; i++)
		{
			temp = source[i];
			source[i] = dest[i];
			dest[i] = temp;
		}
	}

	static void doubleToInt(double dest[], int source[], int size)
	{
		int temp = 0;

		for (int i = 0; i < size; i++)
		{
			temp = source[i];
			source[i] = dest[i];
			dest[i] = temp;
		}
	}
};

int main()
{
	int x[] = { 1,2,3,4,5 };
	double y[5];
	double z[] = { 9.9,8.8,7.7,6.6,5.6 };

	ArrayUtility::intToDouble(x, y, 5);

	for (int i = 0; i < 5; i++)
	{
		cout << y[i] << ' ';
	}
	cout << endl;

	ArrayUtility::doubleToInt(z, x, 5);
	for (int i = 0; i < 5; i++)
	{
		cout << x[i] << ' ';
	}
	cout << endl;
}