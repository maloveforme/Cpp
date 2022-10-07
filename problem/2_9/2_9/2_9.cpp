// 이름, 주소, 나이를 입력받아 다시 출력하는 프로그램을 작성하라.
// 실행 예시는 다음과 같다.
// 이름은? 황 기 태
// 주소는? 서울시 안녕구 사랑동 해피아파트
// 나이는?
// 황 기 태, 서울시 안녕구 사랑동 해피아파트, 21세

#include <iostream>
#include <string>
using namespace std;

int main()
{
	string name, address, age;

	cout << "이름은? ";
	getline(cin, name);

	cout << "주소는? ";
	getline(cin, address);

	cout << "나이는? ";
	getline(cin, age);

	cout << name << ", " << address << ", " << age << "세";

	return 0;
}