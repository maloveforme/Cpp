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

class MyQueue : public BaseArray
{
    int index;
    int i;

public:
    MyQueue(int capacity) : BaseArray(capacity)
    {
        index = 0;
        i = 0;
    }

    void enqueue(int val)
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
        return index - i;
    }

    int dequeue()
    {
        int value = get(i);
        put(i, 0);
        i++;
        return value;
    }
};

int main()
{
    MyQueue mQ(100);
    int n;

    for (int i = 0; i < 5; i++)
    {
        cin >> n;
        mQ.enqueue(n);
    }

    cout << "큐의 용량: " << mQ.capacity() << ", 큐의 크기: " << mQ.length() << endl;
    cout << "큐의 원소를 순서대로 제거하여 출력한다>> ";

    while (mQ.length() != 0)
    {
        cout << mQ.dequeue() << ' ';
    }

    cout << endl << "큐의 현재 크기: " << mQ.length() << endl;
}