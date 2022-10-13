#include <iostream>
using namespace std;

class Ram // Ram.h
{
	char mem[100 * 1024]; 
	int size;

public:
	Ram();
	~Ram();
	char read(int address);
	void write(int address, char value);
};

Ram::Ram() // Ram.cpp
{
	size = 100 * 1024;
	for (int i = 0; i < size; i++)
	{
		mem[i] = 0;
	}
}

Ram::~Ram()
{
	cout << "메모리 제거됨\n";
}

char Ram::read(int address)
{
	return mem[address];
}

void Ram::write(int address, char value)
{
	mem[address] = value;
}

int main() // main.cpp
{
	Ram ram;
	ram.write(100, 20);
	ram.write(101, 30);
	char res = ram.read(100) + ram.read(101);
	ram.write(102, res);

	cout << "102 번지의 값 = " << (int)ram.read(102) << endl;

	return 0;
}