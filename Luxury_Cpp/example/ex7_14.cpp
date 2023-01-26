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

    Power& operator << (int n)
    {
        kick += n;
        punch += n;

        return *this;
    }
};


int main()
{
    Power a(3, 5);

    a << 3 << 5 << 6;

    a.show();
}