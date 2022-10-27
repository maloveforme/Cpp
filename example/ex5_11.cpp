#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
using namespace std;

class Person
{
    char* name;
    int id;

public:
    Person(int id, const char* name)
    {
        this->id = id;
        int len = strlen(name); 
        this->name = new char[len + 1]; 
        strcpy(this->name, name); 
    }

    Person(Person& p) // 복사 생성자
    {
        this->id = p.id;
        int len = strlen(p.name);
        this->name = new char[len + 1];
        strcpy(this->name, p.name);
        strcpy(this->name, p.name);

        cout << "복사 생성자 실행. 원본 객체 이름: " << this->name << endl;
    }

    ~Person()
    {
        if (name)
            delete[] name;
    }

    void changeName(const char* name)
    {
        if (strlen(name) > strlen(this->name))
            return;
        strcpy(this->name, name);
    }

    void show()
    {
        cout << id << ',' << name << endl;
    }
};

int main()
{
    Person father(1, "kitae");
    Person daughter(father);

    cout << "------daughter 객체 생성 직후------" << endl;
    father.show();
    daughter.show();

    daughter.changeName("Grace");
    cout << "------daughter 이름 변경 직후------" << endl;
    father.show();
    daughter.show();

    return 0;
}