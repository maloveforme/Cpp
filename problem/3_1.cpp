// main()의 실행 결과가 다음과 같도록 Tower클래스를 작성하라.
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

	cout << "높이는 " << myTower.getHeight() << "미터\n";
	cout << "높이는 " << seoulTower.getHeight() << "미터\n";
}