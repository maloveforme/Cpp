// CoffeeMachine Ŭ������ ������.
// main() �Լ��� ���� ����� ������ ������ CoffeeMachine Ŭ������ �ۼ��϶�.
// ���������� �� �ܿ��� Ŀ�ǿ� ���� ���� 1�� �Һ�ǰ�, 
// �Ƹ޸�ī���� ��� Ŀ�Ǵ� 1, ���� 2�� �Һ�ǰ�, ���� Ŀ�Ǵ� Ŀ�� 1, �� 2, ���� 1�� �Һ�ȴ�.
// CoffeeMachine Ŭ�������� � ��� ������ � ��� �Լ��� �ʿ����� �� �Ǵ��Ͽ� �ۼ��϶�.
#include <iostream>
using namespace std;

class CoffeeMachine
{
	int coffee, water, sugar;

public:
	CoffeeMachine(int c, int w, int s);
	void drinkEspresso();
	void drinkAmericano();
	void drinkSugarCoffee();
	void show();
	void fill();
};

CoffeeMachine::CoffeeMachine(int c, int w, int s)
{
	coffee = c; water = w; sugar = s;
}

void CoffeeMachine::drinkEspresso()
{
	coffee--;
	water--;
}

void CoffeeMachine::drinkAmericano()
{
	coffee--;
	water -= 2;
}

void CoffeeMachine::drinkSugarCoffee()
{
	coffee--;
	water -= 2;
	sugar--;
}

void CoffeeMachine::show()
{
	cout << "Ŀ�� �ӽ� ����, Ŀ��: " << coffee << " ��: " << water << " ����: " << sugar << endl;
}

void CoffeeMachine::fill()
{
	coffee = 10;
	water = 10;
	sugar = 10;
}

int main()
{
	CoffeeMachine java(5, 10, 3);
	java.drinkEspresso();
	java.show();

	java.drinkAmericano();
	java.show();

	java.drinkSugarCoffee();
	java.show();

	java.fill();
	java.show();
}