#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_QUEUE_SIZE 10000

typedef struct QueueType
{
	int queue[10000];
	int front;
	int rear;
}QueueType;

void initialize(QueueType* q)
{
	q->front = q->rear = -1;
}

void push(QueueType* q, int data)
{
	q->queue[++(q->rear)] = data;
}

void pop(QueueType* q)
{
	if (q->front == q->rear)
		printf("-1\n");
	else
	{
		printf("%d\n", q->queue[++(q->front)]);
		q->queue[q->front] = 0;
	}
}

void size(QueueType* q)
{
	printf("%d\n", q->rear - q->front);
}

void empty(QueueType* q)
{
	if (q->front == q->rear)
		printf("1\n");
	else
		printf("0\n");
}

void ffront(QueueType* q)
{
	if (q->front == q->rear)
		printf("-1\n");
	else
		printf("%d\n", q->queue[q->front + 1]);
}

void back(QueueType* q)
{
	if (q->front == q->rear)
		printf("-1\n");
	else
		printf("%d\n", q->queue[q->rear]);
}

int main()
{
	int N;
	scanf("%d", &N);

	QueueType* q = (QueueType*)malloc(sizeof(QueueType));
	initialize(q);

	char command[6];
	int temp;

	for (int i = 0; i < N; i++)
	{
		scanf("%s", command);
		if (!strcmp("push", command))
		{
			scanf("%d", &temp);
			push(q, temp);
		}
		else if (!strcmp("pop", command))
			pop(q);
		else if (!strcmp("size", command))
			size(q);
		else if (!strcmp("empty", command))
			empty(q);
		else if (!strcmp("front", command))
			ffront(q);
		else if (!strcmp("back", command))
			back(q);
	}
	return 0;
}
