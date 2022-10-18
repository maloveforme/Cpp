// 덧셈 식을 문자열로 입력받아 계산하는 프로그램을 작성하라.
#include <iostream>
#include <string> 
using namespace std;

int main()
{
	string str, sum, strNum; 
	cout << "식을 입력하세요>> "; 
	getline(cin, str); // 식을 담을 객체 문자열 str 

	int result = 0;

	for (int i = 0; i < str.size(); i++)
	{
		if (str[i] != '+' ) // str[i]의 문자가 +가 아니라면
		{
			cout << str[i]; // 출력하고
			strNum = str[i]; // 문자열을 자른다
			sum.append(strNum); // sum이라는 문자열에 숫자를 합친다.
		}

		else if (str[i] == '+') // str[i]의 문자가 +라면
		{
			result += stoi(sum); // 지금까지 합친 숫자 sum을 result에 합치고
			cout << endl; 
			sum.clear(); // sum을 비운다
		}
	}
	
	result += stoi(sum); // 마지막 숫자를 합쳐준다

	cout << endl << result << endl;
}