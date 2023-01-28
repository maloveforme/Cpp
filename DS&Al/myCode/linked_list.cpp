#include <iostream>
using namespace std;

template <class T>
class Node
{
public:
	Node* _next = nullptr; // 다음 주소
	Node* _prev = nullptr; // 이전 주소
	T _data;

public:
	Node()
	{

	}

	Node(const T& value) : _next(nullptr), _prev(nullptr), _data(value)
	{

	}
};

template <class T>
class Iterator
{
public:
	Node<T>* _node = nullptr;

public:
	Iterator()
	{

	}

	Iterator(Node<T>* node) : _node(node)
	{

	}

	Iterator<T>& operator ++ ()	// 전위 연산
	{
		_node = _node->_next;
		return *this;
	}

	Iterator<T> operator ++ (int n) // 후위 연산
	{
		Iterator<T> temp = *this;
		_node = _node->_next;
		return temp;
	}

	Iterator<T>& operator -- () // 전위 연산
	{
		_node = _node->_prev;
		return *this;
	}

	Iterator<T> operator -- (int n) // 후위 연산
	{
		Iterator<T> temp = *this;
		_node = _node->_prev;
		return temp;
	}

	T& operator * () // *it 
	{
		return _node->_data;
	}

	bool operator == (const Iterator& it)
	{
		return _node == it._node;
	}

	bool operator != (const Iterator& it)
	{
		return _node != it._node;
	}
};

template <class T>
class List
{
public:
	Node<T>* _header;
	int _size = 0;

public:
	List()
	{
		_header = new Node<T>();
		_header->_next = _header; // size = 0 일 때 next 주소가 본인을 가르키게
		_header->_prev = _header; // size = 0 일 때 prev 주소가 본인을 가르키게
	}

	void push_back(const T& value)
	{
		AddNode(_header, value);
	}

	void pop_back()
	{
		RemoveNode(_header->_prev); // header의 이전 노드 삭제
	}

	// [1] [2] [prev] [추가될 예정인 node] [before]
	Node<T>* AddNode(Node<T>* before, const T& value) // 이전 주소랑 값을 갖는 노드 추가
	{
		Node<T>* node = new Node<T>(value); // 새로운 [node] 생성
		Node<T>* prevNode = before->_prev; // 이전 노드의 값을 갖는 [prev] 노드

		prevNode->_next = node; // [prev] -> [node]
		node->_prev = prevNode; // [prev] <- [node]
		node->_next = before; // [node] -> [before]
		before->_prev = node; // [node] <- [before]

		_size++;

		return node;
	}

	// [1] [2] [prev] <-> [node] <-> [next]
	Node<T>* RemoveNode(Node<T>* node)
	{
		Node<T>* prevNode = node->_prev;
		Node<T>* nextNode = node->_next;

		prevNode->_next = nextNode; // [prev] -> [next]
		nextNode->_prev = prevNode; // [prev] <- [next]

		delete node; // [node] 삭제

		_size--;

		return nextNode;
	}

	int size()
	{
		return _size;
	}

	// List<int>::iteartor 구현
	typedef Iterator<T> iterator;

	iterator begin()
	{
		return iterator(_header->_next);
	}

	iterator end()
	{
		return iterator(_header);
	}

	iterator insert(iterator it, const T& value)
	{
		Node<T>* node = AddNode(it._node, value);
		return iterator(node);
	}

	iterator erase(iterator it)
	{
		Node<T>* node = RemoveNode(it._node);
		return iterator(node);
	}
};

int main()
{
	List<int> li;
	List<int>::iterator eraseIt;

	for (int i = 0; i < 10; i++)
	{
		if (i == 5)
			eraseIt = li.insert(li.end(), i); // 지울 위치 기억
		else
			li.push_back(i);
	}

	li.pop_back(); // 9 삭제
	li.erase(eraseIt); // 5 삭제

	for (auto it = li.begin(); it != li.end(); it++)
	{
		cout << *it << ' ';
	}
	cout << endl;
}