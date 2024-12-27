#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#define pragmapack (1)

struct student
{
	int marks;
	int number;
	char name[20];
};

struct node
{
	struct node* prev;
	struct student* data;
	struct node* next;
};

struct node* createnode()
{
	int marks;
	int number;
	char name[20];
	struct node* newnode= NULL;

	newnode = (struct node*)malloc(sizeof(struct node));
	//td=(struct student*)malloc(sizeof(struct student));
	if(newnode==NULL)
	{
		printf("Linked list is empty\n");
	}
	else
	{
		newnode->data=(struct student*)malloc(sizeof(struct student));
		newnode->prev=NULL;
		printf("Enter marks\n");
		scanf("%d",&(newnode->data->marks));
	
		printf("Enter name\n");
		scanf("%s",&(newnode->data->name));
		
		printf("Enter number\n");
		scanf("%d",&(newnode->data->number));
		
		newnode->next=NULL;
	}
}

void createDlinkedList(struct node** head_first,struct node** head_last)
{


	struct node* tempnode=NULL;
	tempnode=createnode();

	if(*head_first==NULL)
	{
		*head_first=tempnode;
		*head_last=tempnode;
	}
	else
	{
		tempnode->prev=(*head_last);
		(*head_last)->next=tempnode;
		(*head_last)=tempnode;

	}
}


void display(struct node* head_first)
{
	struct node* travnode=NULL;
	if(head_first==NULL)
	{
		printf("Linked list is empty\n");
	}
	else
	{
		travnode=(head_first);
		printf("NULL ==> ");
		while(travnode!=NULL)
		{
			printf("{Name:%s,Marks:%d,Number:%d} ==> ",travnode->data->name,travnode->data->marks,travnode->data->number);
			travnode=travnode->next;
		}
	}
	printf("NULL\n");
}

void sort(struct node** head_first,struct node** head_last)
{
	struct node* temp1=*head_first;
	struct node* temp2=*head_last;
	int marks,number;
	char name[20];
	

	while(temp1->next!=NULL)
	{
		temp2=temp1->next;
		while(temp2!=NULL)
		{
			if(temp1->data->marks<temp2->data->marks)
			{
				marks=temp1->data->marks;	number=temp1->data->number;		strcpy(name,temp1->data->name);
				temp1->data->marks=temp2->data->marks;		temp1->data->number=temp2->data->number;		strcpy(temp1->data->name,temp2->data->name);
				temp2->data->marks=marks;	temp2->data->number=number;		strcpy(temp2->data->name,name);
				
			}
			temp2=temp2->next;
		}
		temp1=temp1->next;
	}
}


void main()
{
	int pos,n;
	struct node* first = NULL;
	struct node* last =NULL;
	char ch;
	printf("%d\n",sizeof(struct node));
	printf("%d\n",sizeof(struct student));
	do
	{
		printf("1.create doubly Linked List\n2.Display Linked List\n3.Sort According Marks obtained\n0.Exit(0)\n");
		printf("Enter choice\n");
		scanf("%d",&ch);

		switch(ch)
		{
		case 1 : createDlinkedList(&first,&last);
			break;
		case 2 : display(first);
			break;

		case 3 : sort(&first,&last);
			break;
	
		default : printf("Enter valied choice\n");
			break;
			
		}
	}while(ch!=0);

}