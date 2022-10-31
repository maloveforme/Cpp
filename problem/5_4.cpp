#include <iostream>
using namespace std;

bool bigger(int a, int b, int& big)
{
    if (a > b)
    {
        big = a;
        return false;
    }

    else if (a < b)
    {
        big = b;
        return false;
    }

    else
    {
        return true;
    }
}

int main()
{
    int num1, num2;
    cout << "num1과 num2를 입력하시오:";
    cin >> num1 >> num2;

    int big;

    bool isBigger = bigger(num1, num2, big);
    
    if (isBigger == true)
    {
        cout << "두 수는 같습니다." << endl;
    }

    else
    {
        cout << "큰 수는 " << big << "입니다." << endl;
    }
}