#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> v;

    cout << "5개의 정수를 입력: ";
    for (int i = 0; i < 5; i++)
    {
        int n;
        cin >> n;
        v.push_back(n);
    }

    sort(v.begin(), v.end()); // 소팅
    for (auto it = v.begin(); it != v.end(); it++)
        cout << *it << ' ';
    cout << endl;
}