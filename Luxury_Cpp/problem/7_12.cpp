#include <iostream>
using namespace std;

class SortedArray
{
    int size;
    int* p;
    void sort()
    {
        for (int i = 0; i < size; i++)
        {
            for (int j = i; j < size; j++)
            {
                if (p[i] > p[j])
                {
                    int temp = p[i];
                    p[i] = p[j];
                    p[j] = temp;
                }
            }
        }
    }

public:
    SortedArray()
    {
        p = nullptr;
        size = 0;
    }

    SortedArray(SortedArray& src)
    {
        this->size = src.size;
        this->p = new int[this->size];

        for (int i = 0; i < this->size; i++)
            this->p[i] = src.p[i];
    }

    SortedArray(int ary[], int size)
    {
        this->size = size;
        p = new int[size];

        for (int i = 0; i < size; i++)
            p[i] = ary[i];
    }

    ~SortedArray()
    {
        if (p)
            delete[] p;
    }

    SortedArray operator + (SortedArray& op2)
    {
        SortedArray tmp;

        tmp.size = this->size + op2.size;
        tmp.p = new int[tmp.size];

        for (int i = 0, j = 0; i < tmp.size; i++)
        {
            if (i < this->size)
                tmp.p[i] = this->p[i];

            else
            {
                tmp.p[i] = op2.p[j];
                j++;
            }
        }

        return tmp;
    }

    SortedArray& operator = (const SortedArray& op2)
    {

        this->size = op2.size;
        p = new int[this->size];

        for (int i = 0; i < this->size; i++)
            p[i] = op2.p[i];
        
        return *this;
    }

    void show()
    {
        sort();
        cout << "배열 출력 : ";

        for (int i = 0; i < size; i++)
        {
            cout << p[i] << ' ';
        }

        cout << endl;
    }
};

int main()
{
    int n[] = { 2, 20, 6 };
    int m[] = { 10, 7, 8, 30 };
    SortedArray a(n, 3), b(m, 4), c;

    c = a + b; 

    a.show();
    b.show();
    c.show();
}