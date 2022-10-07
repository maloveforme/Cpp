// Enter 키가 입력될 때까지 문자들을 읽고, 입력된 문자 'x'의 개수를 화면에 출력하라.

#include <iostream>
#include <string>
using namespace std;

int main()
{
	cout << "문자를 입력하라(100개 미만)" << endl;
	string strings;
	getline(cin, strings);
	int count = 0;

	for (int i = 0; i < strings.length(); i++)
	{
		if (strings[i] == 'x')
			count++;
	}

	cout << "x의 개수는 " << count << endl;

	return 0;
}