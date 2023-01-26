// 날짜를 다루는 Date 클래스를 작성하고자 한다. Date를 이용하는 main()과 실행 결과가 다음과 같다.
// 클래스 Date를 작성하여 아래 프로그램에 추가하라.

#include <iostream>
#include <string>
using namespace std;

class Date
{
	int Year, Month, Day;

public:
	Date(string s);
	Date(int Y, int M, int D);
	void show();
	int getYear();
	int getMonth();
	int getDay();
};

Date::Date(string s)
{
	int index1 = s.find('/');
	int index2 = s.rfind('/');

	string temp;

	for (int i = 0; i < index1; i++)
	{
		temp += s[i];
	}
	
	Year = stoi(temp); temp.clear();

	for (int i = index1 + 1; i < index2; i++)
	{
		temp += s[i];
	}

	Month = stoi(temp); temp.clear();

	for (int i = index2 + 1; i <= s.length(); i++)
	{
		temp += s[i];
	}

	Day = stoi(temp);
}

Date::Date(int Y, int M, int D)
{
	Year = Y; Month = M; Day = M;
}

void Date::show()
{
	cout << Year << "년" << Month << "월" << Day << "일\n";
}

int Date::getYear()
{
	return Year;
}

int Date::getMonth()
{
	return Month;
}

int Date::getDay()
{
	return Day;
}

int main()
{
	cout << "nnnn/yy/dd 형식대로 입력하시오: ";
	string temp;
	getline(cin, temp);

	Date birth(2014, 3, 20);
	Date independenceDay(temp);

	independenceDay.show();
	cout << birth.getYear() << ',' << birth.getMonth() << ',' << birth.getDay() << endl;
}

// 간단하게 stoi(substr())을 이용해 자를 수도 있지만, 다른 월,일까지도 되게 해보려고 짜봤다.