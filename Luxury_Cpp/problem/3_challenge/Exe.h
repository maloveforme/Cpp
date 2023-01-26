#ifndef EXE_H
#define EXE_H

#include <math.h>

class Exp
{
	int base, exp;

public:
	Exp() : Exp(1, 1) {}
	Exp(int base) : Exp(base, 1) {}
	Exp(int base, int exp);
	int getValue();
	int getBase();
	int getExp();
	bool equals(Exp b);
};

Exp::Exp(int base, int exp)
{
	this->base = base; this->exp = exp;
}

int Exp::getValue()
{
	return pow(base, exp);
}

int Exp::getBase()
{
	return base;
}

int Exp::getExp()
{
	return exp;
}

bool Exp::equals(Exp b)
{
	if (this->getValue() == b.getValue()) 
		return true;
	else
		return false;
}

#endif // !EXE_H
