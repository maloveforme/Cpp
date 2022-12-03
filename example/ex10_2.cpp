#include <iostream>
using namespace std;

template <typename T>
T bigger(T a, T b)
{
	return (a > b) ? a : b;
}

int main()
{
	int a = 20, b = 50;
	char c = 'a', d = 'z';

	cout << "bigger(20,50) = " << bigger(a, b) << endl;
	cout << "bigger('a', 'z') = " << bigger(c, d) << endl;
}