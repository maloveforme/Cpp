// CoffeeMachine 클래스를 만들어보자.
// main() 함수와 실행 결과가 다음과 같도록 CoffeeMachine 클래스를 작성하라.
// 에스프레소 한 잔에는 커피와 물이 각각 1씩 소비되고, 
// 아메리카노의 경우 커피는 1, 물은 2가 소비되고, 설탕 커피는 커피 1, 물 2, 설탕 1이 소비된다.
// CoffeeMachine 클래스에는 어떤 멤버 변수와 어떤 멤버 함수가 필요한지 잘 판단하여 작성하라.
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
	cout << "커피 머신 상태, 커피: " << coffee << " 물: " << water << " 설탕: " << sugar << endl;
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