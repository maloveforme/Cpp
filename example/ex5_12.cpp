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

    Person(Person& p) 
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

void f(Person person)
{
    person.changeName("dummy"); // 값에 의한 호출
}

Person g() {
    Person mother(2, "Jane");
    return mother; // 함수에서 객체 반환
}

int main()
{
    Person father(1, "Kitae");
    Person son = father; // 객체로 초기화.
    f(father); 
    g();
}