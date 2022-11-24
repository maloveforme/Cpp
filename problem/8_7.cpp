#include <iostream>
using namespace std;

class BaseMemory
{
    char* mem;

protected:
    BaseMemory(int size)
    {
        mem = new char[size];
    }

    void set(char* mem)
    {
        this->mem = mem;
    }

    void put(int index, int val)
    {
        mem[index] = val;
    }

    char get(int index)
    {
        return mem[index];
    }
};

class ROM : public BaseMemory
{

public:
    ROM(int size, char* mem, int index) : BaseMemory(size)
    {
        set(mem);
    }

    char read(int index)
    {
        return get(index);
    }
};

class RAM : public BaseMemory
{

public:
    RAM(int size = 0) : BaseMemory(size)
    {
       
    }

    void write(int index, char mem)
    {
        put(index, mem);
    }

    char read(int index)
    {
        return get(index);
    }
};

int main()
{
    char x[5] = { 'h','e','l','l','o' };
    ROM biosROM(1024 * 10, x, 5);
    RAM mainMemory(1024 * 1024);

    for (int i = 0; i < 5; i++)
    {
        mainMemory.write(i, biosROM.read(i));
    }

    for (int i = 0; i < 5; i++)
    {
        cout << mainMemory.read(i);
    }
}