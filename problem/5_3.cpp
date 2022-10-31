#include <iostream>
#include <string>
using namespace std;

void combine(string t1, string t2, string& t3)
{
    t3 = t1 + " " + t2;
}

int main()
{
    string text1("I love you"), text2("very much");
    string text3;

    combine(text1, text2, text3);
    cout << text3;
}