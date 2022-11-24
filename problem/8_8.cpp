#include <iostream>
using namespace std;

class Printer
{
    string model, manufacter;
    int printedCount, availableCount;

public:
    Printer(string model = " ", string manufacter = " ", int printedCount = 0, int availableCount = 0)
        : model(model), manufacter(manufacter), printedCount(printedCount), availableCount(availableCount)
    {

    }

    void print(int pages)
    {
        availableCount -= pages;
    }

    void set(string model, string manufacter, int availableCount)
    {
        this->model = model; this->manufacter = manufacter; this->availableCount = availableCount;
    }

    void getInfo()
    {
        cout << model << ", " << manufacter << ", " << "남은 종이 " << availableCount << "장, ";
    }

    int getCount()
    {
        return availableCount;
    }
};

class InkPrinter : public Printer
{
    int ink;

public:
    InkPrinter(string model = " ", string manufacter = " ", int availableCount = 0, int ink = 0)
    {
        set(model, manufacter, availableCount);
        this->ink = ink;
    }

    int availableInk()
    {
        return ink;
    }

    void printInkJet(int pages)
    {
        getInfo();
        cout << "남은 잉크 " << availableInk() << endl;
    }

    void use(int count)
    {
        ink -= count;
        print(count);
    }
};

class LaiserPrinter : public Printer
{
    int toner;

public:
    LaiserPrinter(string model = " ", string manufacter = " ", int availableCount = 0, int toner = 0)
    {
        set(model, manufacter, availableCount);
        this->toner = toner;
    }

    int availableToner()
    {
        return toner;
    }

    void printLaser(int pages)
    {
        getInfo();
        cout << "남은 토너 " << availableToner() << endl;
    }

    void use(int count)
    {
        toner -= count;
        print(count);
    }
};

int main()
{
    InkPrinter IP("Officejet V40", "HP", 5, 10);
    LaiserPrinter LP("SCX-6x45", "삼성전자", 3, 20);

    cout << "현재 작동중인 2대의 프린터는 아래와 같다." << endl;

    cout << "잉크젯: ";
    IP.printInkJet(5);
    cout << "레이저: ";
    LP.printLaser(3);

    char ch ='y';
    int count = 0;

    while (ch != 'n')
    {
        int num1, num2;
        cout << "프린터(1:잉크젯, 2:레이저)와 매수 입력>> ";
        cin >> num1 >> num2;

        if (num1 == 1)
        {
            if (IP.availableInk() < num2 || IP.getCount() < num2)
            {
                cout << "용지가 부족하여 프린트할 수 없습니다." << endl;
            }

            else
            {
                cout << "프린트하였습니다." << endl;
                IP.use(num2);
            }
        }

        else if (num1 == 2)
        {
            if (LP.availableToner() < num2 || LP.getCount() < num2)
            {
                cout << "용지가 부족하여 프린트할 수 없습니다." << endl;
            }

            else
            {
                cout << "프린트하였습니다." << endl;
                LP.use(num2);
            }
        }

        IP.printInkJet(IP.availableInk());
        LP.printLaser(LP.availableToner());
        cout << "계속 프린트 하시겠습니까(y/n)>> ";
        cin >> ch;
        cout << endl;
    }
}