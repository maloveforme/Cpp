// 한 라인에 ';' 으로 5개의 이름을 구분하여 입력받아, 각 이름을 끊어내어 화면에 출력하고 가장 긴 이름을 판별하라.

#include <iostream>
#include <string>
using namespace std;

int main()
{
	cout << "5명의 이름을 ';'으로 구분하여 입력하세요\n" << ">>";
	string names[5];

	for (int i = 0; i < 5; i++)
	{
		getline(cin, names[i], ';');
	}

	int max = 0;

	for (int i = 0; i < 5; i++)
	{
		cout << i << " : " << names[i] << endl;

		if (names[max].length() < names[i].length())
			max = i;
	}

	cout << "가장 긴 이름은 " << names[max] << endl;

	return 0;
}