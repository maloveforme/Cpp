// 중식당의 주문 과정을 C++ 프로그램으로 작성해보자.
// 다음 실행 결과와 같이 메뉴와 사람 수를 입력받고 이를 출력하면 된다.
// 잘못된 입력을 가려내는 부분도 코드에 추가하라.
// ***** 승리장에 오신 것을 환영합니다. *****
// 짬뽕:1, 짜장:2, 군만두:3, 종료:4>> 1
// 몇인분? 4
// 짬뽕 4인분 나왔습니다.

#include <iostream>
using namespace std;

int main()
{
	cout << " ***** 승리장에 오신 것을 환영합니다. ***** " << endl;

	while (true)
	{
		int num1 = 0, num2 = 0;

		cout << "짬뽕:1, 짜장:2, 군만두:3, 종료:4>>";
		cin >> num1;

		if (num1 > 4 || num1 < 1)
		{
			cout << "메뉴에 없는 번호입니다." << endl;
			continue;
		}

		else if (num1 == 4)
		{
			cout << "오늘 영업은 끝났습니다.";
			break;
		}

		cout << "몇 인분? ";
		cin >> num2;

		switch (num1)
		{
			case 1: 
				cout << "짬뽕 " << num2 << "인분 나왔습니다." << endl;
				break;
			case 2: 
				cout << "짜장 " << num2 << "인분 나왔습니다." << endl;
				break;
			case 3: 
				cout << "군만두 " << num2 << "인분 나왔습니다." << endl;
				break;
			default:
				break;
		}
	}

	return 0;
}

