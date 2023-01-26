#include <iostream>
using namespace std;

char& find(char a[], char c, bool& success)
{
	for (int i = 0; i < strlen(a); i++)
	{
		if (a[i] == c)
		{
			success = true;
			return a[i];
		}
	}
} // 문자열 a에서 문자열 c를 찾아, 문자 c가 있는 공간에 대한 참조 리턴

int main()
{
	char s[] = "Mike";
	bool b = false;
	char& loc = find(s, 'M', b);

	if (b == false)
	{
		cout << "M을 발견할 수 없습니다." << endl;
		return 0;
	}

	loc = 'm';
	cout << s << endl;
}