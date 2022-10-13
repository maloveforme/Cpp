#include <iostream>
using namespace std;

class PrivateAccessError
{
private:
	int a;
	void f();
	PrivateAccessError();
public:
	int b;
	PrivateAccessError(int x);
	void g();
};

PrivateAccessError::PrivateAccessError() : a(1), b(1) { }

PrivateAccessError::PrivateAccessError(int x)
{
	a = x; b = x;
}

void PrivateAccessError::f()
{
	a = 5; b = 5;
}

void PrivateAccessError::g()
{
	a = 6; b = 7;
}

int main()
{
	PrivateAccessError objA; 
	// error : �Ű� ���� ���� �����ڴ� private
	PrivateAccessError objB(100);

	objB.a = 10;
	// error : a�� private���� �����
	objB.b = 20;

	objB.f();
	// error: vod f�� private���� �����
	objB.g();
	
	return 0;
}