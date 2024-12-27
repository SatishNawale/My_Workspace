#include <stdio.h>
#include<stdlib.h>

struct Que
{
	int capacity;
	int* arr;
	int front;
	int rear;
};

void create_que(struct Que** que)
{
	(*que) = (struct Que*) malloc(sizeof(struct Que));
	printf("Enter capacity of Qeue\n");

	scanf("%d",&((*que)->capacity));

	
	(*que)->arr=(int*)malloc(((*que)->capacity)*sizeof(int));
	(*que)->front = -1;
	(*que)->rear = -1;
}
int isFull(struct Que* que)
{
	if((que->rear)==(que->capacity)-1)
	{
		return 1;
	}
	else return 0;
}

void insert(struct Que* que,int element)
{
	if(isFull(que))
	{
		printf("Que is Full\n");
	}
	else
	{
		(que->rear)++;
		que->arr[que->rear]=element;
	}
}

int isEmpty(struct Que* que)
{
	if((que->rear) ==(que->front) == -1 || (que->front==(que->capacity-1)))
	{
		return 1;
	}
	else return 0;
}

void Delete(struct Que* que)
{
	if(isEmpty)
	{
		printf("Que is empty\n");
		que->rear = -1;
		que->front = -1;
	}
	else
	{
		(que->front)++;
		printf("Deleted element is %d\n",que->arr[que->front]);
	}
}

void front(struct Que* que)
{
	printf("Front Element is %d\n",(que->arr[(que->front)+1]));
}

void rear(struct Que* que)
{
	printf("Rear element is %d\n",(que->arr[(que->rear)]));
}

void display(struct Que* que)
{
	int i=0;
	printf("Elements of Que are\n");
	for(i=(que->front)+1; i<=que->rear; i++)
	{
		printf("%d\t",que->arr[i]);
	}
	printf("\n");
}


void main()
{
	struct Que* que = NULL;
	int ch;
	int element;
	create_que(&que);
	
	do
	{
		printf("Enter your choice:\n1.insert\n2.Pop\n3.Peak\n4.Rear\n5.Display\n0.Exit\n");
		scanf("%d",&ch);
	switch(ch)
	{
	case 1: 
		printf("Enter value to insert\n");
		scanf("%d",&element);
		insert(que,element);
		break;
	case 2: Delete(que);
		break;
	case 3: front(que);
		break;
	case 4: rear(que);
		break;
	case 5: display(que);
		break;
	case 0: exit(0);
		break;
	default: printf("Please enter valied choice\n");

	}
	}while(ch!=0);
	
}
