#include <iostream>
#include <string>
using namespace std;

int main()
{
	srand(static_cast<unsigned>(time(NULL)));

	cout << "아래에 한 줄을 입력하세요. (exit를 입력하면 종료합니다)" << endl;

	string str;
	
	while (true)
	{
		cout << ">> ";
		getline(cin, str);

		if (str == "exit")
			break;

		int randindex = rand() % str.length() + 1; // random index
		int randChar = 97 + rand() % 25;

		str[randindex] = randChar;
		cout << str << endl;
	}
}