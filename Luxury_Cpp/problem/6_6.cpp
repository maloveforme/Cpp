#include <iostream>
using namespace std;

class ArrayUtility
{
public:
	static int* concat(int s1[], int s2[], int size)
	{
		int* s = new int[size];

		for (int i = 0, j = 0; i < size; i++)
		{
			if (i < 5)
			{
				s[i] = s1[i];
			}
			else
			{
				s[i] = s2[j];
				j++;
			}
		}
		
		return s;
	}

	static int* remove(int s1[], int s2[], int size, int& retSize)
	{
		int index = 0;
		int* s = new int[size];

		for (int i = 0; i < size; i++)
		{
			for (int j = 0; j < size; j++)
			{
				if (s1[i] == s2[j])
				{
					break;
				}

				else
				{
					s[i] = s1[i];
				}
			}
		}

		retSize = sizeof(s) / sizeof(int);

		if (retSize == 0)
			return NULL;

		else
			return s;
	}
};

int main()
{
	int x[5];
	cout << "정수 5개 입력하라. 배열 x에 삽입한다>>";
	for (int i = 0; i < 5; i++)
	{
		cin >> x[i];
	}

	int y[5];
	cout << "정수 5개 입력하라. 배열 y에 삽입한다>>";
	for (int i = 0; i < 5; i++)
	{
		cin >> y[i];
	}
	cout << "합친 정수 배열을 출력한다" << endl;
	int size = (sizeof(x) + sizeof(y)) / sizeof(int);

	int* z;

	z = ArrayUtility::concat(x, y, size);
	
	for (int i = 0; i < size; i++)
	{
		cout << z[i] << ' ';
	}
	
	cout << endl;

	int retsize = 0;

	z = ArrayUtility::remove(x, y, size, retsize);

	cout << "배열 x[]에서 y[]를 뺀 결과를 출력한다. 개수는 " << retsize << endl;

	for (int i = 0; i < retsize; i++)
	{
		cout << z[i] << ' ';
	}

	cout << endl;


}