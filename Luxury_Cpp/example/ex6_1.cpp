#include <iostream>
using namespace std;

int big(int a, int b) // a와 b 중 큰 수 반환
{
    if (a > b)
        return a;
    else
        return b;
}

int big(int a[], int size) // 배열 내 가장 큰 수 반환
{
    int max = a[0];

    for (int i = 1; i < size; i++)
    {
        if (max < a[i])
        {
            max = a[i];
        }
    }

    return max;
}

int main()
{
    cout << "2와 3중에 큰 수는 " << big(2, 3) << "입니다." << endl;

    int size = 5;
    int* array = new int[size];
    
    for (int i = 0; i < size; i++)
    {
        cout << "array[" << i << "]: ";
        cin >> array[i];
    }

    cout << "array의 원소 중 가장 큰 수는 " << big(array, size) << "입니다. " << endl;
}