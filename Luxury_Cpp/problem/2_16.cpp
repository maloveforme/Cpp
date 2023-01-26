// ���� �ؽ�Ʈ�� �Է¹޾� ���ĺ� ������׷��� �׸��� ���α׷��� �ۼ��϶�.
// �빮�ڴ� ��� �ҹ��ڷ� �����ϸ�, �ؽ�Ʈ �Է��� ���� ';' ���ڷ� �Ѵ�.
// ���ڸ� �ҹ��ڷ� �ٲ�� �ϹǷ� tolower() �Լ��� �̿��ϰ�, ���ĺ����� �˻��ϱ� ���� isalpha()�� �̿��϶�.

#include <iostream>
#include <string>
using namespace std;

string histogram(int strings)
{
	string histograms;
	
	for (int i = 0; i < strings; i++)
		histograms += '*';

	return histograms;
}

int main()
{
	cout << "���� �ؽ�Ʈ�� �Է��ϼ���. ������׷��� �׸��ϴ�.\n";
	cout << "�ؽ�Ʈ�� ���� ; �Դϴ�. 10000������ �����մϴ�.\n";

	string text;
	getline(cin, text, ';');
	int alphacount[26] = {0};
	int count = 0;

	for (int i = 0; i < text.length(); i++)
	{
		if (text[i] >= 'A' && text[i] <= 'Z') // ���� �빮�ڸ�
		{
			text[i] = tolower(text[i]); // �ҹ��ڷ� ����
			count++; // ���ĺ� �� ���� ī��Ʈ
		}

		else if (text[i] >= 'a' && text[i] <= 'z') // ���� �ҹ��ڸ�
		{
			count++; // ���ĺ� �� ���� ī��Ʈ
		}

		alphacount[text[i] - 'a']++; // a ~ z�� ���ĺ� ���� ī��Ʈ
	}

	cout << endl << "�� ���ĺ� �� " << count << endl;

	for (int i = 0; i < 26; i++)
	{
		cout << char(i + 97) << ":" << "(" << alphacount[i] << ") " << ": " << histogram(alphacount[i]) << endl;
	}

	return 0;
}

