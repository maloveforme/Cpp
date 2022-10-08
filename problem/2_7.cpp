// 다음과 같이 "yes"가 입력될 때까지 종료하지 않는 프로그램을 작성하라.
// 사용자로부터 입력은 cin.getline(); 함수를 사용하라.

#include <iostream>
#include <string>
using namespace std;

int main()
{
	while (true)
	{
		string password;
		cout << "종료를 원하시면 yes를 입력하세요>>";
		getline(cin, password);
		
		if (password == "yes")
		{
			cout << "종료합니다.." << endl;
			break;
		}
	}

	return 0;
}