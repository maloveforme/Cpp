#include <iostream>
using namespace std;

class Container
{
    int size;

public:
    Container() { size = 10; }
    void fill();
    void consume();
    int getSize();
};

void Container::fill()
{
    size = 10;
}

void Container::consume()
{
    size--;
}

int Container::getSize()
{
    return size;
}

class CoffeeMachine
{
    Container tong[3];
    void fill();
    void selectEspresso();
    void selectAmericano();
    void selectSugarCoffee();
    void show();

public:
    void run();
};

void CoffeeMachine::fill()
{
    for (int i = 0; i < 3; i++)
    {
        tong[i].fill();
    }
}

void CoffeeMachine::selectEspresso()
{
    tong[0].consume();
    tong[1].consume();
    cout << "에스프레소 드세요" << endl;
}

void CoffeeMachine::selectAmericano()
{
    tong[0].consume();
    tong[1].consume();
    tong[1].consume();
    cout << "아메리카노 드세요" << endl;
}

void CoffeeMachine::selectSugarCoffee()
{
    tong[0].consume();
    tong[1].consume();
    tong[1].consume();
    tong[2].consume();
    cout << "설탕커피 드세요" << endl;
}

void CoffeeMachine::show()
{
    cout << "커피: " << tong[0].getSize() << ", 물: " << tong[1].getSize() << ", 설탕: " << tong[2].getSize() << endl;
}

void CoffeeMachine::run()
{
    cout << "***** 커피자판기를 작동합니다. *****" << endl;
    
    while (true)
    {
        int num = 0;
        cout << "메뉴를 눌러주세요(1: 에스프레소, 2: 아메리카노, 3: 설탕커피, 4: 잔량보기, 5: 채우기) >>";
        cin >> num;

        switch (num)
        {
            case 1:
                selectEspresso();
                break;
            case 2:
                selectAmericano();
                break;
            case 3:
                selectSugarCoffee();
                break;
            case 4:
                show();
            case 5:
                fill();
            default:
                break;
        }
    }
}

int main()
{
    CoffeeMachine coffee;
    coffee.run();
}