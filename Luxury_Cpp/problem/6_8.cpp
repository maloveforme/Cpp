#include <iostream>
using namespace std;

class Trace
{
    static string Tag[100];
    static string Info[100];
    static int size;
public:

    static void put(string tag, string info)
    {
        Tag[size] += tag; Info[size] += info;
        ++size;
    }

    static void print(string str = " ")
    {
        if (str == " ")
        {
            cout << "----- 모든 Trace 정보를 출력합니다. -----" << endl;
            for (int i = 0; i < size; i++)
            {
                cout << Tag[i] << ": " << Info[i] << endl;
            }
        }

        else
        {
            cout << "----- " << str << "태그의 정보를 출력합니다. -----" << endl;
            for (int i = 0; i < size; i++)
            {
                if (str == Tag[i])
                {
                    cout << Tag[i] << ": " << Info[i] << endl;
                }
            }
        }
    }

};

int Trace::size = 0;
string Trace::Tag[100];
string Trace::Info[100];

void f()
{
    int a, b, c;

    cout << "두 개의 정수를 입력하세요>> ";
    cin >> a >> b;

    Trace::put("f()", "정수를 입력받았음");
    c = a + b;

    Trace::put("f()", "합 계산");
    cout << "합은 " << c << endl;
}

int main()
{
    Trace::put("main()", "프로그램 시작합니다");
    f();
    Trace::put("main()", "종료");

    Trace::print("f()");
    Trace::print();
}