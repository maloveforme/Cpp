#include <iostream>
using namespace std;

class Power
{
    int _kick, _punch;

public:
    Power(int kick = 0, int punch = 0)
    {
        _kick = kick; _punch = punch;
    }

    void show()
    {
        cout << "kick = " << _kick << ", " << "punch = " << _punch << endl;
    }

    bool operator == (Power op2)
    {
        if (_kick == op2._kick && _punch == op2._punch)
            return true;
        else
            return false;
    }
};

int main()
{
    Power a(3, 5), b(4, 6);
    Power c(3, 3), d(3, 3);
    
    a.show();
    b.show();
    c.show();
    d.show();

    if (a == b)
        cout << "a와 b는 같다" << endl;
    else
        cout << "a와 b는 다르다" << endl;

    if (c == d)
        cout << "a와 b는 같다" << endl;
    else
        cout << "a와 b는 다르다" << endl;
}