#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v;

    for (int i = 0; i < 3; i++)
    {
        v.push_back(i + 1);
        cout << v[i] << ' ';
    }
    cout << endl;

    v[0] = 10;
    int m = v[2];
    v.at(2) = 5;

    for (int i = 0; i < v.size(); i++)
        cout << v[i] << ' ';
    cout << endl;
}