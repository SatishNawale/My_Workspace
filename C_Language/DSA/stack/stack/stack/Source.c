#include <stdio.h>
#include<stdlib.h>

/*struct Stack
{
	int capacity;
	int* arr;
	int top;
};*/

struct Stack
{
	int capacity;
	char* arr;
	int top;
};

void create_stack(struct Stack** stack)
{
	(*stack) = (struct Stack*) malloc(sizeof(struct Stack));
	printf("Enter capacity of stack\n");
	scanf("%d",&((*stack)->capacity));

	
	(*stack)->arr=(char*)malloc(((*stack)->capacity)*sizeof(char));
	(*stack)->top = -1;
}
int isFull(struct Stack* stack)
{
	if((stack->top)==(stack->capacity)-1)
	{
		return 1;
	}
	else return 0;
}

void push(struct Stack* stack,char element)
{
	if(isFull(stack))
	{
		printf("Stack is Full\n");
	}
	else
	{
		(stack->top)++;
		stack->arr[stack->top]=element;
	}
}

int isEmpty(struct Stack* stack)
{
	if((stack->top) == -1)
	{
		return 1;
	}
	else return 0;
}

void pop(struct Stack* stack)
{
	if(isEmpty)
	{
		printf("Stack is empty\n");
	}
	else
	{
		printf("Popped element is %d\n",stack->arr[stack->top]);
		(stack->top)--;
	}
}

void peak(struct Stack* stack)
{
	printf("Peacked Element is %d\n",(stack->arr[stack->top]));
}

void display(struct Stack* stack)
{
	int i=0;
	printf("Elements of stack are\n");
	for(i=0; i<=stack->top; i++)
	{
		printf("%d\t",stack->arr[i]);
	}
}

void reverse(struct Stack* stack)
{
	int i;
	for(i=0; i<(stack->top); i++)
	{
		printf("%c",(stack->arr[i]));
	}
}
void main()
{
	struct Stack* stack = NULL;
	int ch;
	char element;
	create_stack(&stack);
	
	do
	{
		printf("Enter your choice:\n1.Push\n2.Pop\n3.Peak\n4.Display\n0.Exit\n");
		scanf("%d",&ch);
	switch(ch)
	{
	case 1: printf("Enter value to push\n");
		scanf("%c",&element);
		push(stack,element);
		break;
	case 2: pop(stack);
		break;
	case 3: peak(stack);
		break;
	case 4: display(stack);
		break;
	case 5: reverse(stack);
		break;
	case 0: exit(0);
		break;
	default: printf("Please enter valied choice\n");

	}
	}while(ch!=0);
	
}