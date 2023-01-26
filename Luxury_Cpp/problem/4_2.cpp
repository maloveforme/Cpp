#include <iostream>
#include <string>
using namespace std;

int main()
{
    int* ary = new int[5];
    
    cout << "정수 5개 입력>> ";
    
    int sum = 0;
    for (int i = 0; i < 5; i++)
    {
        cin >> ary[i];
        sum += ary[i];
    }

    if (!ary)
    {
        return 0;
    }

    double avg = static_cast<double>(sum) / 5;
    cout << avg;

    delete[] ary;
}