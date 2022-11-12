#include <iostream>
using namespace std;

class Stack
{
    int data[3];
    int index;

public:
    Stack()
    {
        index = 0;
    }

    Stack& operator << (int num)
    {
        data[index] = num;
        index++;
        return *this;
    }

    bool operator ! ()
    {
        if (index == 0)
            return true;
        else return false;
    }

    Stack& operator >> (int& num)
    {
        index--;
        num = data[index];
        data[index] = 0;
        return *this;
    }
};

int main()
{
    Stack stack;
    stack << 3 << 5 << 10;

    while (true)
    {
        if (!stack)
            break;
        int x;
        stack >> x;
        cout << x << ' ';
    }

    cout << endl;
}