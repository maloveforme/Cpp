#include <iostream>
using namespace std;

template<class T1, class T2>
class GClass
{
    T1 data1;
    T2 data2;

public:
    GClass() : data1(0), data2(0)
    {

    }

    void set(T1 a, T2 b)
    {
        data1 = a; data2 = b;
    }

    void get(T1& a, T2& b)
    {
        a = data1; b = data2;
    }
};

int main()
{
    int a; double b;
    GClass<int, double> x;
    x.set(2, 0.5);
    x.get(a, b);
    cout << "a = " << a << '\t' << "b = " << b << endl;

    char c; float d;
    GClass<char, float> y;
    y.set('m', 12.5);
    y.get(c, d);
    cout << "c = " << c << '\t' << "d = " << d << endl;
}