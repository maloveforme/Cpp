#include <iostream>
using namespace std;

int main()
{
    double pi = 3.14;

    auto calc = [pi](double r) { return pi * r * r; };

    cout << "면적: " << calc(3);
}