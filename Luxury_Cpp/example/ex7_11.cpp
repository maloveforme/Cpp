#include <iostream>
using namespace std;

class Power
{
    int kick, punch;

public:
    Power(int kick = 0, int punch = 0)
    {
        this->kick = kick; this->punch = punch;
    }

    void show()
    {
        cout << "kick = " << kick << ", " << "punch = " << punch << endl;
    }

    friend Power operator + (int op1, Power op2);
};

Power operator + (int op1, Power op2)
{
    Power tmp;

    tmp.kick = op2.kick + op1;
    tmp.punch = op2.punch + op1;

    return tmp;
}

int main()
{
    Power a(3, 5);

    a.show();

    a = 2 + a;
    a.show();
}