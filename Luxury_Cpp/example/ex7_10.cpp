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

    Power& operator ++ (int x)
    {
        Power tmp = *this;
        _kick++;
        _punch++;

        return tmp;
    }
};

int main()
{
    Power a(3, 5);

    a.show();

    a++;
    a.show();
}