#include <iostream>
using namespace std;

class Statistics
{
    int* data;
    int size = 0;
    int index = 0;

public:
    Statistics()
    {
        size = 8;
        data = new int[size];
    }

    bool operator ! ()
    {
        if (!data)
            return false;
        else return true;
    }

    Statistics& operator << (int value)
    {
        this->data[index] = value;
        index++;
        return *this;
    }

    void operator ~ ()
    {
        for (int i = 0; i < index; i++)
        {
            cout << data[i] << ' ';
        }
        cout << endl;
    }

    void operator >> (int& value)
    {
        value = 0;

        for (int i = 0; i < index; i++)
            value += data[i];

        value /= index;
    }
};

int main()
{
    Statistics stat;
    int x[5];

    if (!stat) cout << "현재 통계 데이터가 없습니다." << endl;

    cout << "5개의 정수를 입력하라>> ";
    for (int i = 0; i < 5; i++)
        cin >> x[i];

    for (int i = 0; i < 5; i++)
    {
        stat << x[i];
    }

    stat << 100 << 200;
    ~stat;

    int avg;
    stat >> avg;
    cout << "avg = " << avg << endl;

}