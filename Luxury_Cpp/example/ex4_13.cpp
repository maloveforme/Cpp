// 빈칸을 포함하는 문자열을 입력 받고,
// 한 문자씩 왼쪽으로 회전하도록 문자열을 변경하고 출력하라.
#include <iostream>
#include <string> // string 클래스 사용
using namespace std;

int main()
{
    string str;
    cout << "문자열 입력>> ";
    getline(cin, str);
    int count = 0;

    for(int i = 0; i < str.size(); i++)
    {
        for (int j = 0; j < str.size() - 1; j++)
        {
            swap(str[j], str[j + 1]);
        }
        cout << str << endl;
    }
}
