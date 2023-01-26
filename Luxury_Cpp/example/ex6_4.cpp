#include <iostream>
using namespace std;

void f(char c = ' ', int line = 1)
{
	for (int i = 0; i < line; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			cout << c;
		}
		cout << endl;
	}
}

int main()
{
	f(); // Call f(' ', 1)
	f('%'); // Call f('%', 1)
	f('@', 5);
}
