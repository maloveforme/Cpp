// ��¥�� �ٷ�� Date Ŭ������ �ۼ��ϰ��� �Ѵ�. Date�� �̿��ϴ� main()�� ���� ����� ������ ����.
// Ŭ���� Date�� �ۼ��Ͽ� �Ʒ� ���α׷��� �߰��϶�.

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
	cout << Year << "��" << Month << "��" << Day << "��\n";
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
	cout << "nnnn/yy/dd ���Ĵ�� �Է��Ͻÿ�: ";
	string temp;
	getline(cin, temp);

	Date birth(2014, 3, 20);
	Date independenceDay(temp);

	independenceDay.show();
	cout << birth.getYear() << ',' << birth.getMonth() << ',' << birth.getDay() << endl;
}

// �����ϰ� stoi(substr())�� �̿��� �ڸ� ���� ������, �ٸ� ��,�ϱ����� �ǰ� �غ����� ¥�ô�.