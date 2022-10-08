// 문자열을 하나 입력받고 문자열의 부분 문자열을 다음과 같이 출력하는 프로그램을 작성하라.
// 예시는 다음과 같다.
// 문자열 입력>> hello
// h
// he
// ...
// hello

#include <iostream>
#include <string>
using namespace std;

int main()
{
	string strings;

	cout << "문자열 입력>> ";
	getline(cin, strings);

	for (int i = 0; i < strings.length(); i++)
	{
		for (int j = 0; j <= i; j++)
		{
			cout << strings[j];
		}

		cout << endl;
	}

	return 0;
}