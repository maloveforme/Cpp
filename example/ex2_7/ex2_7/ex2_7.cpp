#include <iostream>
#include <string>
using namespace std;

int main()
{
	string song("Falling in love with you");
	string elvis("Elvis Presley");
	string singer;

	cout << song << "을 부른 가수는? ";
	
	getline(cin, singer);

	if (singer == elvis)
	{
		cout << "맞았습니다.\n";
	}

	else
	{
		cout << "틀렸습니다. " + elvis + "입니다. \n";
	}

	return 0;
}