// main()�� ���� ����� ������ ������ TowerŬ������ �ۼ��϶�.
#include <iostream>
using namespace std;

class Tower
{
	int height;

public:
	Tower();
	Tower(int height);
	int getHeight();
};

Tower::Tower() : Tower(1) {}

Tower::Tower(int height)
{
	this->height = height;
}

int Tower::getHeight()
{
	return height;
}

int main()
{
	Tower myTower;
	Tower seoulTower(100);

	cout << "���̴� " << myTower.getHeight() << "����\n";
	cout << "���̴� " << seoulTower.getHeight() << "����\n";
}