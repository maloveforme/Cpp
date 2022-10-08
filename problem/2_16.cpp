// 영문 텍스트를 입력받아 알파벳 히스토그램을 그리는 프로그램을 작성하라.
// 대문자는 모두 소문자로 집계하며, 텍스트 입력의 끝은 ';' 문자로 한다.
// 문자를 소문자로 바꿔야 하므로 tolower() 함수를 이용하고, 알파벳인지 검사하기 위해 isalpha()를 이용하라.

#include <iostream>
#include <string>
using namespace std;

string histogram(int strings)
{
	string histograms;
	
	for (int i = 0; i < strings; i++)
		histograms += '*';

	return histograms;
}

int main()
{
	cout << "영문 텍스트를 입력하세요. 히스토그램을 그립니다.\n";
	cout << "텍스트의 끝은 ; 입니다. 10000개까지 가능합니다.\n";

	string text;
	getline(cin, text, ';');
	int alphacount[26] = {0};
	int count = 0;

	for (int i = 0; i < text.length(); i++)
	{
		if (text[i] >= 'A' && text[i] <= 'Z') // 만약 대문자면
		{
			text[i] = tolower(text[i]); // 소문자로 변경
			count++; // 알파벳 총 개수 카운트
		}

		else if (text[i] >= 'a' && text[i] <= 'z') // 만약 소문자면
		{
			count++; // 알파벳 총 개수 카운트
		}

		alphacount[text[i] - 'a']++; // a ~ z의 알파벳 개수 카운트
	}

	cout << endl << "총 알파벳 수 " << count << endl;

	for (int i = 0; i < 26; i++)
	{
		cout << char(i + 97) << ":" << "(" << alphacount[i] << ") " << ": " << histogram(alphacount[i]) << endl;
	}

	return 0;
}

