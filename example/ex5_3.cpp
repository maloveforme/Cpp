#include <iostream>
using namespace std;

int main()
{
    cout << "i" << '\t' << "n" << '\t' << "refn" << endl;
    int i = 1, n = 2;
    int& refn = n; 
    n = 4;
    refn++;
    cout << i << '\t' << n << '\t' << refn << endl;

    cout << "-----------------------------" << endl;
    refn = i;
    refn++;
    cout << i << '\t' << n << '\t' << refn << "\t // refn = i, refn++;" << endl;

    int* p = &refn;
    *p = 20;
    cout << "-----------------------------" << endl;
    cout << i << '\t' << n << '\t' << refn << "\t // *p = &refn, *p = 20" << endl;
}