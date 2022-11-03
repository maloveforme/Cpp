#include <iostream>
using namespace std;

int add(int ary[], int num = 5)
{
    int sum = 0;

    for (int i = 0; i < num; i++)
    {
        sum += ary[i];
    }

    return sum;
}

int add(int ary1[], int num, int ary2[])
{
    int sum = 0;

    for (int i = 0; i < num; i++)
    {
        sum += (ary1[i] + ary2[i]);
    }

    return sum;
}

int main()
{
    int a[] = { 1,2,3,4,5 };
    int b[] = { 6,7,8,9,10 };
    int c = add(a, 5);
    int d = add(a, 5, b);

    cout << c << endl;
    cout << d << endl;
}