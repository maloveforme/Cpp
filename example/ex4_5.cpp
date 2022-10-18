#include <iostream>
using namespace std;

int main()
{
    int* p = new int;

    if (!p) // !p와 p == NULL은 같은 의미
    {
        cout << "메모리를 할당할 수 없습니다." << endl;
        return 0;
    }

    *p = 5; // 할당 받은 정수 공간에 5 기록
    int n = *p; // 할당 받은 정수 공간에서 값 읽기

    cout << "*p = " << *p << endl;
    cout << "n = " << n << endl;

    delete p;
}
