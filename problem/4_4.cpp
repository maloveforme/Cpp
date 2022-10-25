#include <iostream>
using namespace std;

class Sample
{
	int* p;
	int size;

public:
	Sample(int n) { size = n; p = new int[n]; }
	void read(); // 정수 배열 p에 사용자로부터 정수를 입력받음
	void write(); // 정수 배열 화면에 출력
	int big(); // 정수 배열에서 가장 큰 수 리턴
	~Sample();
};

void Sample::read()
{
	for (int i = 0; i < size; i++)
	{
		cin >> p[i];
	}
}

void Sample::write()
{
	for (int i = 0; i < size; i++)
	{
		cout << p[i] << ' ';
	}

	cout << endl;
}

int Sample::big()
{
	int big = p[0];

	for (int i = 0; i < size; i++)
	{
		if (big < p[i])
		{
			big = p[i];
		}
	}

	return big;
}

Sample::~Sample()
{
	delete p;
}

int main()
{
	Sample s(10);
	s.read();
	s.write();
	cout << "가장 큰 수는 " << s.big() << endl;
}