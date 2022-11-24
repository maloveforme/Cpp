﻿#include <iostream>
using namespace std;

class Base
{
public:
    void f()
    {
        cout << "Base::f() called" << endl;
    }
};

class Derived : public Base
{
public:
    void f()
    {
        cout << "Derived::f() called" << endl;
    }
};

int main()
{
    Derived d, * pDer;
    pDer = &d; // pDer -> 객체 d
    pDer->f();

    Base* pBase;
    pBase = pDer; // 업캐스팅
    pBase->f();
}