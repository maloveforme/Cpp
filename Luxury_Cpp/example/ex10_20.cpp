#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	vector<int> v;
	
	for (int i = 0; i < 5; i++)
		v.push_back(i + 1);

	for_each(v.begin(), v.end(), [](int n) { cout << n << ' '; });
}