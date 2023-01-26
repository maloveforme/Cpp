#include <iostream> 
#include <sstream>
#include <algorithm>
using namespace std;

template <class T>
class Dynamic_Array
{
	T* data; // 정보
	size_t n; // 사이즈, 문자열이나 메모리의 사이즈를 나타낼 때 사용하는 unsigned int
	// typedef unsigend int size_t

public:
	Dynamic_Array(int n) // 배열 크기를 인자로 받는 생성자
	{
		this->n = n;
		data = new T[n]; // 동적 할당
	}

	Dynamic_Array(const Dynamic_Array<T>& other) // 복사 생성자
	{
		n = other.n;
		data = new T[n];

		for (int i = 0; i < n; i++)
			data[i] = other[i];
	}

	T& operator [] (int index) // [] 연산자 오버로딩
	{
		return data[index];
	}

	const T& operator [] (int index) const
	{
		return data[index];
	}

	T& at(int index) // at() 함수 구현
	{
		if (index < n) 
			return data[index];
		 
		throw "Index is out of range"; // 범위를 벗어나는 접근일 경우 예외 처리
	}

	size_t size() const // 배열 크기 반환
	{
		return n;
	}

	~Dynamic_Array()
	{
		delete[] data; // 동적 배열 할당 해제
	}

	T* begin()
	{
		return data; // 시작 위치 반환
	}

	const T* begin() const
	{
		return data;
	}

	T* end()
	{
		return data + n; // 종료 위치 반환
	}

	const T* end() const
	{
		return data + n;
	}

	friend Dynamic_Array<T> operator + (const Dynamic_Array<T>& ary1,
		Dynamic_Array<T>& ary2) // 두 배열을 하나로 합치는 연산자 오버로딩
	{
		Dynamic_Array<T> result(ary1.size() + ary2.size());
		
		copy(ary1.begin(), ary1.end(), result.begin());
		copy(ary2.begin(), ary2.end(), result.begin() + ary1.size());

		return result;
	} // ary1 + ary2 처럼 구현되기 때문에 friend로 구현해야함

	string to_string(const string& std = ", ")
	{
		if (n == 0) // 비어 있을 때
			return "";

		ostringstream os;
		os << data[0];

		for (int i = 1; i < n; i++)
			os << std << data[i];

		return os.str();
	}
};

struct Student
{
	string Name;
	int Standard;
};

ostream& operator << (ostream& os, const Student& s) // 학생의 이름과 정보를 출력하는 연산자 오버로딩
{
	return (os << "[" << s.Name << ", " << s.Standard << "]");
}

int main()
{
	int num;
	cout << "1반 학생수: ";
	cin >> num;

	Dynamic_Array<Student> class1(num);

	for (int i = 0; i < num; i++)
	{
		string name;
		int standard;
		cout << i + 1 << "번째 학생 이름과 나이 입력: ";
		cin >> name >> standard;
		class1[i] = Student{ name, standard };
	}

	try
	{
		class1.at(num) = Student{ "John", 8 }; // 예외 발생
	}

	catch (...)
	{
		cout << "예외 발생" << '\n';
	}

	auto class2 = class1; // 깊은 복사
	cout << "1반을 복사하여 2반을 생성: " << class2.to_string() << '\n';

	auto class3 = class1 + class2; // 두 학급을 합침
	cout << "1반 + 2반 = 3반: " << class3.to_string() << '\n';
}