// ���࿡�� ����ϴ� ���α׷��� �ۼ��ϱ� ����, ���� ���� �ϳ��� ǥ���ϴ� Ŭ���� Account�� �ʿ��ϴ�.
// ���� ������ ����, ���� ��ȣ, �ܾ��� ��Ÿ���� 3 ��� ������ �̷������.
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
	cout << a.getOwner() << "�� �ܾ��� " << a.inquiry() << endl;

	int money = a.withdraw(20000);
	cout << a.getOwner() << "�� �ܾ��� " << a.inquiry() << endl;
}