#include <iostream>
#include <string> // string 클래스 사용
using namespace std;

int main()
{
    string str; // 스트링 객체 생성
    string address("서울시 성북구 삼선동 389");
    string copyAddress(address); // address를 복사한 스트링 객체 생성

    char text[] = { 'L', 'O', 'V', 'E', '\0' }; // c string
    string title(text); // 문자 배열을 가진 스트링 객체 생성

    cout << str << endl;
    cout << address << endl;
    cout << copyAddress << endl;
    cout << title << endl;

}