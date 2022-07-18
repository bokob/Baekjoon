#include <iostream>

#define MAX_DEQUE_SIZE 10001

using namespace std;

class Deque
{
private:
	int front;
	int rear;
	int deque[MAX_DEQUE_SIZE];

public:
	Deque(): front(0), rear(0)
	{

	}
	void push_front(int x);
	void push_back(int x);
	void pop_front();
	void pop_back();
	void size();
	void empty();
	void ffront();
	void back();
};

void::Deque::push_front(int x)
{
	deque[front] = x;
	front = (front - 1 + MAX_DEQUE_SIZE) % MAX_DEQUE_SIZE;
}

void::Deque::push_back(int x)
{
	rear = (rear + 1) % MAX_DEQUE_SIZE;
	deque[rear] = x;
}

void::Deque::pop_front()
{
	if (front == rear)
	{
		cout << -1 << "\n";
		return ;
	}
	cout << deque[(front + 1) % MAX_DEQUE_SIZE] << "\n";
	front = (front + 1) % MAX_DEQUE_SIZE;
}

void::Deque::pop_back()
{
	if (front == rear)
	{
		cout << -1 << "\n";
		return;
	}
	cout << deque[rear] << "\n";
	rear = (rear - 1 + MAX_DEQUE_SIZE) % MAX_DEQUE_SIZE;
}

void::Deque::size()
{
	cout << (rear + MAX_DEQUE_SIZE - front) % MAX_DEQUE_SIZE << "\n";
}

void::Deque::empty()
{
	if (front == rear)
		cout << 1 << "\n";
	else
		cout << 0 << "\n";
}

void::Deque::ffront()
{
	if (front == rear)
		cout << -1 << "\n";
	else
		cout << deque[(front + 1) % MAX_DEQUE_SIZE] << "\n";
}

void::Deque::back()
{
	if (front == rear)
		cout << -1 << "\n";
	else
		cout << deque[rear] << "\n";
}

int main()
{
	int N;
	cin >> N;

	Deque d;

	string command;
	int temp;

	for (int i = 0; i < N; i++)
	{
		cin >> command;

		if (command.compare("push_front") == 0)
		{
			cin >> temp;
			d.push_front(temp);
		}
		else if (command.compare("push_back") == 0)
		{
			cin >> temp;
			d.push_back(temp);
		}
		else if (command.compare("pop_front") == 0)
			d.pop_front();
		else if (command.compare("pop_back") == 0)
			d.pop_back();
		else if (command.compare("size") == 0)
			d.size();
		else if (command.compare("empty") == 0)
			d.empty();
		else if (command.compare("front") == 0)
			d.ffront();
		else if (command.compare("back") == 0)
			d.back();
	}
	return 0;
}
