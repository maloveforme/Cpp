// 커피를 주문하는 간단한 c++ 프로그램을 작성해보자.
// 커피 종류는 에스프레소, 아메리카노, 카푸치노의 3가지다.
// 가격은 각각 2000, 2300, 2500원이다.
// 하루에 20000원 이상 벌게 되면 카페를 닫는다.
// 주문 >> 에스프레소 4
// 8000원입니다. 맛있게 드세요.
#include <iostream>
#include <string>
using namespace std;

int main()
{
	cout << "에스프레소 2000원, 아메리카노 2300원, 카푸치노 2500원입니다.\n";
	int sum = 0;

	while (true)
	{
		string coffee;
		int num, result = 0;
		cout << "주문>> ";
		cin >> coffee >> num;

		if (coffee == "에스프레소")
			result = num * 2000;
		else if (coffee == "아메리카노")
			result = num * 2300;
		if (coffee == "카푸치노")
			result = num * 2500;
		
		cout << result << "원입니다. 맛있게 드세요.\n";
		
		sum += result;

		if (sum >= 20000)
		{
			cout << "오늘 " << sum << "원을 판매하여 카페를 닫습니다. 내일 봐요 ~~~\n";
			break;
		}
	}

	return 0;
}