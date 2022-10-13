#include "Calculator.h"
#include "Adder.h"
#include <iostream>
using namespace std;

void Calculator::run()
{
	cout << "두 개의 수를 입력하세요>> ";
	int a, b;
	cin >> a >> b;

	Adder adder(a, b);
	cout << adder.process();
}
