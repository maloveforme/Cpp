// 다음 C 프로그램을 C++ 프로그램으로 수정하여 실행해라.
// 이 프로그램의 실행 결과는 연습문제 11과 같다.
//#include <stdio.h>
//int sum();
//
//int main()
//{
//	int n = 0;
//
//	printf("끝 수를 입력하세요>>");
//	scanf("%d", &n);
//
//	printf("1에서 %d까지의 합은 %d입니다.\n", n, sum(1, n));
//
//}
//
//int sum(int a, int b)
//{
//	int k, res = 0;
//
//	for (k = a; k <= b; k++)
//		res += k;
//
//	return res;
//}

#include <iostream>
using namespace std;

int sum(int a, int b)
{
	int result = 0;

	for (int k = a; k <= b; k++)
		result += k;

	return result;
}

int main()
{
	int n = 0;

	cout << "끝 수를 입력하세요>> ";
	cin >> n;

	cout << "1에서 " << n << "까지의 합은 " << sum(1, n) << "입니다.";

	return 0;
}

