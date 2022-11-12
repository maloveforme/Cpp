#include <iostream>
using namespace std;

class Matrix
{
    int num1, num2, num3, num4;

public:
    Matrix(int num1 = 0, int num2 = 0, int num3 = 0, int num4 = 0)
    {
        this->num1 = num1; this->num2 = num2; this->num3 = num3; this->num4 = num4;
    }

    void show()
    {
        cout << "Matrix = { " << num1 << ' ' << num2 << ' ' << num3 << ' ' << num4 << " }" << endl;
    }

    Matrix& operator += (Matrix matrix)
    {
        this->num1 += matrix.num1;
        this->num2 += matrix.num2;
        this->num3 += matrix.num3;
        this->num4 += matrix.num4;

        return *this;
    }

    Matrix& operator + (Matrix matrix)
    {
        Matrix tmp;

        tmp.num1 = this->num1 + matrix.num1;
        tmp.num2 = this->num2 + matrix.num2;
        tmp.num3 = this->num3 + matrix.num3;
        tmp.num4 = this->num4 + matrix.num4;

        return tmp;
    }

    bool operator == (Matrix matrix)
    {
        if (this->num1 == matrix.num1 && this->num2 == matrix.num2 && this->num3 == matrix.num3 && this->num4 == matrix.num4)
            return true;
        else
            false;
    }
};

int main()
{
    Matrix a(1, 2, 3, 4), b(2, 3, 4, 5), c;
    c = a + b;
    a += b;

    a.show(); b.show(); c.show();

    if (a == c)
        cout << "a and c are the same" << endl;
}