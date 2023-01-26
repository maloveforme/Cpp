#include <iostream>
#include <vector>
using namespace std;

int square(int x)
{
	return x * x;
}

int main()
{
	auto c = 'a'; // char
	auto pi = 3.14; // double
	auto ten = 10; // int
	auto* p = &ten; // int*
	cout << c << ' ' << pi << ' ' << ten << ' ' << *p << endl;

	auto ret = square(3);
	cout << *p << ' ' << ret << endl;

	vector<int> v = { 1,2,3,4,5 };
	auto it = v.begin();
	for (it = v.begin(); it != v.end(); ++it)
		cout << *it << ' ';
	cout << endl;
}