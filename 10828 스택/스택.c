#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_STACKS_SIZE 10000

typedef struct stack
{
	int stack[MAX_STACKS_SIZE];
	int top;
}StackType;

void initialize(StackType* s)
{
	s->top = -1;
}

void push(StackType* s, int data)
{
	s->stack[++(s->top)] = data;
}

void pop(StackType* s)
{
	if (s->top == -1)
		printf("-1\n");
	else
		printf("%d\n", s->stack[s->top--]);
}

void size(StackType* s)
{
	if (s->top == -1)
		printf("0\n");
	if (s->top >= 0)
		printf("%d\n", s->top + 1);
}

void empty(StackType* s)
{
	if (s->top == -1)
		printf("1\n");
	else
		printf("0\n");
}

void top(StackType* s)
{
	if (s->top == -1)
		printf("-1\n");
	else
		printf("%d\n", s->stack[s->top]);
}

int main()
{
	StackType* s = (StackType*)malloc(sizeof(StackType));
	initialize(s);

	int N;
	scanf("%d", &N);

	char command[6];
	int temp;

	for (int i = 0; i < N; i++)
	{
		scanf("%s", command);

		if (strcmp("push", command) == 0)
		{
			scanf("%d", &temp);
			push(s, temp);
		}
		else if (strcmp("pop", command) == 0)
			pop(s);
		else if (strcmp("size", command) == 0)
			size(s);
		else if (strcmp("empty", command) == 0)
			empty(s);
		else if (strcmp("top", command) == 0)
			top(s);
	}
	return 0;
}
