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

    bool operator ! ()
    {
        if (_kick == 0 && _punch == 0)
            return true;
        else
            return false;
    }
};

int main()
{
    Power a(3, 5), b(0, 0);

    if (!a)
        cout << "a의 파워가 0이다." << endl;
    else
        cout << "a의 파워가 0이 아니다." << endl;

    if (!b)
        cout << "b의 파워가 0이다." << endl;
    else
        cout << "b의 파워가 0이 아니다." << endl;
}