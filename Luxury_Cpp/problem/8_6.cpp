#include <iostream>
using namespace std;

class BaseArray
{
    int capacity;
    int* mem;

protected:
    BaseArray(int capacity = 100) : capacity(capacity)
    {
        mem = new int[capacity];
    }

    ~BaseArray()
    {
        delete[] mem;
    }

    void put(int index, int val)
    {
        mem[index] = val;
    }

    int get(int index)
    {
        return mem[index];
    }

    int getCapacity()
    {
        return capacity;
    }
};

class MyStack : public BaseArray
{
    int index;

public:
    MyStack(int capacity) : BaseArray(capacity)
    {
        index = 0;
    }

    void push(int val)
    {
        put(index, val);
        index++;
    }

    int capacity()
    {
        return getCapacity();
    }

    int length()
    {
        return index;
    }

    int pop()
    {
        index--;
        int value = get(index);
        put(index, 0);
        return value;
    }
};

int main()
{
    MyStack mStack(100);
    int n;
    cout << "스택에 삽입할 정수 5개를 입력하라>> ";
    for (int i = 0; i < 5; i++)
    {
        cin >> n;
        mStack.push(n);
    }

    cout << "스택 용량: " << mStack.capacity() << ", 스택크기: " << mStack.length() << endl;
    cout << "스택의 모든 원소를 팝하여 출력한다>> ";

    while (mStack.length() != 0)
    {
        cout << mStack.pop() << ' ';
    }

    cout << endl << "스택의 현재 크기: " << mStack.length() << endl;
}