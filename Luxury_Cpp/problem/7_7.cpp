#include <iostream>
using namespace std;

class Matrix
{
    int ary[4];

public:
    Matrix(int a = 0, int b = 0, int c = 0, int d = 0)
    {
        ary[0] = a; ary[1] = b; ary[2] = c; ary[3] = d;
    }
    
    void show()
    {
        cout << "Matrix = { " << ary[0] << ' ' << ary[1] << ' ' << ary[2] << ' ' << ary[3] << " }" << endl;
    }

    void operator >> (int ary[])
    {
        for (int i = 0; i < 4; i++)
        {
            ary[i] = this->ary[i];
        }
    }

    friend void operator << (Matrix& matrix, int ary[])
    {
        for (int i = 0; i < 4; i++)
        {
            matrix.ary[i] = ary[i];
        }
    }
};

int main()
{
    Matrix a(4, 3, 2, 1), b;
    int x[4], y[4] = { 1,2,3,4 };

    a >> x; 
    b << y; 

    for (int i = 0; i < 4; i++)
        cout << x[i] << ' ';
    cout << endl;

    b.show();
}
