// 소수점을 가지는 5개의 실수를 입력 받아 제일 큰 수를 화면에 출력하라.
#include <iostream>
using namespace std;

int main()
{
	cout << "5개의 실수를 입력하라.>> ";
	double num[5];
	
	for (int i = 0; i < 5; i++)
		cin >> num[i];

	double max = num[0];

	for (int j = 1; j < 5; j++)
	{
		if (max < num[j])
			max = num[j];
	}

	cout << "제일 큰 수 = " << max << endl;

	return 0;
}