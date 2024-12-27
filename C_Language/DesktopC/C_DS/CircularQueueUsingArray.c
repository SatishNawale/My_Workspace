#include<stdio.h>
#include<stdlib.h>

struct Que
{
	int capacity;
	int front;
	int rear;
	int* arr;
};

void create_que(struct Que** que)
{
	(*que) = (struct Que*)malloc(sizeof(struct Que));
	printf("Enter capacity\n");
	scanf("%d",&((*que)->capacity));

	(*que)->arr = (int*)malloc(((*que)->capacity)*sizeof(int));
	(*que)->front = 0;
	(*que)->rear = 0;
}

void insert(struct Que* que,int element)
{
	
}

void Delete(struct Que* que)
{
}

void display(struct Que* que)
{

}


void main()
{
	int ch,element;
	struct Que* que=NULL;
	create_que(&que);
	do
	{
		printf("*******Enter your choice*******\n");
		printf("1.Insert\n2.Delete\n3.Display\n4.front\n5.rear\n0.Exit\n");
		scanf("%d",&ch);

		switch(ch)
		{
		case 1: printf("Enter value to insert\n");
			scanf("%d",&element);
			insert(que,element);
			break;
		case 2: Delete(que);
			break;
		case 3: display(que);
			break;
		default: printf("Enter valied choice\n");
		}
	}while(ch!=0);
}