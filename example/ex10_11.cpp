#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v;

    for (int i = 0; i < 3; i++)
        v.push_back(i + 1);

    vector<int>::iterator it;

    for (it = v.begin(); it != v.end(); it++)
    {
        *it *= 2;
        cout << *it << ' ';
    }
    cout << endl;
}