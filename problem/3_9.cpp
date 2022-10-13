// Oval Ŭ������ �־��� �簢���� �����ϴ� Ÿ���� �߻�ȭ�� Ŭ������.
// Oval Ŭ������ ����� ��� ������ ����.
// OVal Ŭ������ ����ο� �����η� ������ �ۼ��϶�.
// �������� �簢�� �ʺ�� ���̸� ������ width, height ���� ���
// �ʺ�� ���� ���� �Ű� ������ �޴� ������
// �ʺ�� ���̸� 1�� �ʱ�ȭ�ϴ� �Ű� ���� ���� ������
// width�� height�� ����ϴ� �Ҹ���
// Ÿ���� �ʺ� �����ϴ� getWidth() �Լ� ���
// Ÿ���� ���̸� �����ϴ� getHeight() �Լ� ���
// Ÿ���� �ʺ�� ���̸� �����ϴ� set(int w, int h) �Լ� ���
// Ÿ���� �ʺ�� ���̸� ȭ�鿡 ����ϴ� show() �Լ� ���
#include <iostream>
using namespace std;

class Oval
{
	int width, height;

public:
	Oval();
	Oval(int w, int h);
	~Oval();
	int getWidth();
	int getHeight();
	void set(int w, int h);
	void show();
};

Oval::Oval() : width(1), height(1) {}

Oval::Oval(int w, int h) : width(w), height(h) {}

Oval::~Oval()
{
	cout << "Oval �Ҹ� : " << "width = " << width << ", height = " << height << endl;
}

int Oval::getHeight()
{
	return height;
}

int Oval::getWidth()
{
	return width;
}

void Oval::set(int w, int h)
{
	width = w; height = h;
}

void Oval::show()
{
	cout << "width = " << width << ", height = " << height << endl;
}

int main()
{
	Oval a, b(3, 4);
	a.set(10, 20);
	a.show();

	cout << b.getWidth() << "," << b.getHeight() << endl;
}