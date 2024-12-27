#include <stdio.h>
#include<stdlib.h>

struct Deque
{
	int capacity;
	int* arr;
	int front;
	int size;
};

void create_deque(struct Deque** que)
{
	(*que) = (struct Deque*) malloc(sizeof(struct Deque));
	printf("Enter capacity of Qeue\n");

	scanf("%d",&((*que)->capacity));

	
	(*que)->arr=(int*)malloc(((*que)->capacity)*sizeof(int));
	(*que)->front = 0;
	(*que)->size = 0;
}
int isFull(struct Deque* que)
{
	if((que->capacity)==(que->size))
	{
		return 1;
	}
	else return 0;
}

int isEmpty(struct Deque* que)
{
	if((que->size)==0)
	{
		return 1;
	}
	else return 0;
}

void insert_first(struct Deque* que,int element)
{
	int i;
	if(isFull(que))
	{
		printf("Que is Full\n");
	}
	else
	{
		que->front = ((que->front)+ (que->capacity)-1) % (que->capacity);
		que->arr[que->front] = element;
		(que->size)=(que->size)+1;
		printf("inserted %d at front\n",que->arr[que->front]);
	}
}



void delete_first(struct Deque* que)
{
	if(isEmpty(que))
	{
		printf("Que is empty\n");
	}
	else
	{
		printf("Deleted %d from front side\n",que->arr[que->front]);
		(que->front) = ((que->front)+1) % (que->capacity);
		(que->size)--;
	}
}

 void insert_last(struct Deque* que,int element)
{
	if(isFull(que))
	{
		printf("Deque is Full\n");
	}
	else
	{
		que->arr[((que->front)+(que->size))%(que->capacity)]=element;
		printf("inserted %d at rear\n",que->arr[((que->front) + (que->size)) % (que->capacity)]);
		(que->size)++;
	}
	
}

void delete_last(struct Deque* que)
{
	if(isEmpty(que))
	{
		printf("Deque is empty\n");
	}
	else
	{
		printf("Deleted %d from rear side\n",que->arr[((que->front)+(que->size))%(que->capacity)]);
		(que->size)--;
	}
}

void display(struct Deque* que)
{
	int i,m;

	if(isEmpty(que))
	{
		printf("Deque is empty\n");
	}
	else
	{
		m = que->front;
		for(i=1; i<=que->size; i++)
		{
			printf("%d->",(que->arr[m]));
			m = (m+1)%(que->capacity);
		}
		printf("\n");
	}
	

}

/*void reverse(struct Stack* stack)
{
	int i;
	for(i=0; i<(stack->top); i++)
	{
		printf("%c",(stack->arr[i]));
	}
}*/
void main()
{
	struct Deque* que = NULL;
	int ch;
	int element;
	create_deque(&que);
	
	do
	{
		printf("Enter your choice:\n1.insert_first\n2.delete_first\n3.insert_last\n4.delete_last\n5.Display0.Exit\n");
		scanf("%d",&ch);
	switch(ch)
	{
	case 1: printf("Enter value to insert\n");
		scanf("%d",&element);
		insert_first(que,element);
		break;
	case 2: delete_first(que);
		break;
	case 3: printf("Enter element to insert at last\n");
		scanf("%d",&element);
		insert_last(que,element);
		break;
	case 4: delete_last(que);
		break;
	case 5: display(que);
		break;
	case 0: exit(0);
		break;
	default: printf("Please enter valied choice\n");

	}
	}while(ch!=0);
	
}