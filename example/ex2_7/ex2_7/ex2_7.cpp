#include <iostream>
#include <string>
using namespace std;

int main()
{
	string song("Falling in love with you");
	string elvis("Elvis Presley");
	string singer;

	cout << song << "�� �θ� ������? ";
	
	getline(cin, singer);

	if (singer == elvis)
	{
		cout << "�¾ҽ��ϴ�.\n";
	}

	else
	{
		cout << "Ʋ�Ƚ��ϴ�. " + elvis + "�Դϴ�. \n";
	}

	return 0;
}