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

    Power operator + (int op2)
    {
        Power tmp;

        tmp._kick = _kick + op2;
        tmp._punch = _punch + op2;

        return tmp;
    }
};

int main()
{
    Power a(3, 5), b;

    a.show(); b.show();

    b = a + 2;
    a.show();
    b.show();
}