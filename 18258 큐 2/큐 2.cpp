#include <iostream>

using namespace std;

class Queue
{
public:
	int front;
	int rear;
	int* qptr;

	void init();
	void push(int x);
	void pop();
	void size();
	void empty();
	void ffront();
	void back();
};

void Queue::init()
{
	front = -1;
	rear = -1;
	qptr = new int[2000000];
}

void Queue::push(int x)
{
	qptr[++rear] = x;
}

void Queue::pop()
{
	if (front == rear)
		cout << -1 << "\n";
	else
		cout << qptr[++front] << "\n";
}

void Queue::size()
{
	cout << rear - front << "\n";
}

void Queue::empty()
{
	if (front == rear)
		cout << 1 << "\n";
	else
		cout << 0 << "\n";
}

void Queue::ffront()
{
	if (front == rear)
		cout << -1 << "\n";
	else
		cout << qptr[front + 1] << "\n";
}

void Queue::back()
{
	if (front == rear)
		cout << -1 << "\n";
	else
		cout << qptr[rear] << "\n";
}

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	Queue q;
	q.init();

	int N;
	cin >> N;

	string command;
	int temp;

	for (int i = 0; i < N; i++)
	{
		cin >> command;

		if (command.compare("push") == 0)
		{
			cin >> temp;
			q.push(temp);
		}
		else if (command.compare("pop") == 0)
			q.pop();
		else if (command.compare("size") == 0)
			q.size();
		else if (command.compare("empty") == 0)
			q.empty();
		else if (command.compare("front") == 0)
			q.ffront();
		else if (command.compare("back") == 0)
			q.back();
	}
	return 0;
}
