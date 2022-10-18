// 크기가 5인 string 배열을 선언하고 getline() 전역 함수를 이용해
// 문자열을 입력받아 사전 순으로 가장 뒤에 나오는 문자열을 출력하라.
#include <iostream>
#include <string> // string 클래스 사용
using namespace std;

int main()
{
    const int size = 5;
    string name[size]; // string 배열 선언
    
    for (int i = 0; i < size; i++)
    {
        cout << "이름: ";
        getline(cin, name[i]); // 이름을 name[i]에 저장
    }

    string lastString = name[0];
    for (int i = 0; i < size; i++)
    {
        if (lastString < name[i]) // name[i]가 lastString보다 크다면
        {
            lastString = name[i]; // lastSTring = name[i]
        }
    }

    cout << "가장 마지막에 나오는 문자열은 " << lastString << "입니다." << endl;

}