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

	while (sum < 20000)
	{
		string coffee;
		int num;
		cout << "주문>> ";
		cin >> coffee >> num;

	}

	return 0;
}