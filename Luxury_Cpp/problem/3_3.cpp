// 은행에서 사용하는 프로그램을 작성하기 위해, 은행 계좌 하나를 표현하는 클래스 Account가 필요하다.
// 계좌 정보는 주인, 계좌 번호, 잔액을 나타내는 3 멤버 변수로 이루어진다.
#include <iostream>
using namespace std;

class Account
{
	string name;
	int id, balance;

public:
	Account(string name, int id, int balance);
	string getOwner();
	int inquiry();
	void deposit(int money);
	int withdraw(int money);
};

Account::Account(string name, int id, int balance)
{
	this->name = name; this->id = id; this->balance = balance;
}

string Account::getOwner()
{
	return name;
}

int Account::inquiry()
{
	return balance;
}

void Account::deposit(int money)
{
	balance += money;
}

int Account::withdraw(int money)
{
	balance -= money;
	return balance;
}


int main()
{
	Account a("kitae", 1, 5000); 
	a.deposit(50000);
	cout << a.getOwner() << "의 잔액은 " << a.inquiry() << endl;

	int money = a.withdraw(20000);
	cout << a.getOwner() << "의 잔액은 " << a.inquiry() << endl;
}