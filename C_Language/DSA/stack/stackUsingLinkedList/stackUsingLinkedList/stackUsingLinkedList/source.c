#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node* next;
};

struct node* createnode()
{
	int data;
	struct node* newnode = (struct node*) malloc(sizeof(struct node));
	if(newnode==NULL)
	{
		return NULL;
	}
	else
	{
		printf("Enter data\n");
		scanf("%d",&(newnode->data));
		newnode->next=NULL;
		return newnode;
	}
}
int isFull(struct node* newnode)
{
	if(newnode==NULL)
	{
		return 1;
	}
	else return 0;
}

int isEmpty(struct node* top)
{
	if(top==NULL)
	{
		return 1;
	}
	else return 0;
}
void push(struct node** top)
{
	struct node* newnode = NULL;
	newnode = createnode();
	if(isFull(newnode))
	{
		printf("Stack is full\n");
	}
	else
	{
		newnode->next = (*top);
		*top = newnode;
	}
}


void pop(struct node** top)
{
	struct node* temp = NULL;
	if(isEmpty(*top))
	{
		printf("Linked list is empy\n");
	}
	else
	{
		printf("Popped data is %d\n",(*top)->data);
	temp = (*top);
	*top = temp->next;
	free(temp);
	}
	

}

void peak(struct node* top)
{
	if(top==NULL)
	{
		printf("Linked list is empty\n");
	}
	else
	printf("The peak is %d\n",top->data);
}
void display(struct node* top)
{
	struct node* travnode = top;
	while(travnode!=NULL)
	{
		printf("%d->",travnode->data);
		travnode=travnode->next;
	}
	printf("\n");
}


void main()
{
	struct node* top = NULL;
	int ch;


	do
	{
		printf("********Enter your choice********\n");
		printf("1.push\n2.pop\n3.peak\n4.display\n");
		printf("Enter your choice\n");
		scanf("%d",&ch);

		switch(ch)
		{
		case 1: push(&top);
			break;
		case 2: pop(&top);
			break;
		case 3: peak(top);
			break;
		case 4: display(top);
			break;
		case 0: exit(0);
		default: printf("Enter valied choice\n");
		}
	}while(ch!=0);


	getch();
}