#include <iostream>
using namespace std;

int big(int num1, int num2, int max = 100)
{
    if (num1 > num2)
    {
        if (num1 > max)
        {
            return max;
        }
        else
        {
            return num1;
        }
    }

    else
    {
        if (num2 > max)
        {
            return max;
        }

        else
        {
            return num2;
        }
    }

}

int main()
{
    int x = big(3, 5);
    int y = big(300, 60);
    int z = big(30, 60, 50);

    cout << x << ' ' << y << ' ' << z << endl;
}