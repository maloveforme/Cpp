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

    Power operator+ (Power op2)
    {
        Power tmp;
        tmp._kick = _kick + op2._kick;
        tmp._punch = _punch + op2._punch;
        
        return tmp;
    }
};

int main()
{
    Power a(3, 5), b(4, 6), c;
    c = a + b;

    a.show();
    b.show();
    c.show();
}