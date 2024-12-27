#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct node
{
	struct node* prev;
	int data;
	struct node* next;
};

struct node* createnode()
{
	int value;
	struct node* newnode= NULL;
	newnode = (struct node*)malloc(sizeof(struct node));

	if(newnode==NULL)
	{
		printf("Linked list is empty\n");
	}
	else
	{
		newnode->prev=NULL;
		printf("Enter vlaue\n");
		scanf("%d",&value);
		newnode->data=value;
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
	struct node* travenode=NULL;
	if(head_first==NULL)
	{
		printf("Linked list is empty\n");
	}
	else
	{
		travenode=(head_first);
		while(travenode!=NULL)
		{
			printf("%d -> ",travenode->data);
			travenode=travenode->next;
		}
	}
	printf("NULL\n");
}
int countnode(struct node* head_first)
{
	int count=0;
	while(head_first!=0)
	{
		(head_first)=head_first->next;
		count++;
	}
}

void insertAtFirst(struct node** head_first,struct node** head_last)
{
	struct node* tempnode=NULL;
	if(*head_first==NULL)
	{
		createDlinkedList(head_first,head_last);
	}
	else 
	{
		tempnode=createnode();
		tempnode->next=*head_first;
		*head_first=tempnode;
	}
}
void insertAtLast(struct node** head_first,struct node** head_last)
{
	createDlinkedList(head_first,head_last);
}


void insertAtPosition(struct node** head_first,struct node** head_last,int pos)
{
	
	struct node* tempnode=NULL;
	struct node* travnode=NULL;
	struct node* temp=NULL;
	int n = countnode(*head_first);
	int i;

	travnode=*head_first;
	
	if(pos==1)
	{
		insertAtFirst(head_first,head_last);
	}
	
	else if(pos==n+1)
	{
		insertAtLast(head_first,head_last);
	}
	else if(pos<1||pos>n+1)
	{
		printf("Invalid position\n");
	}
	else
	{
		tempnode=createnode();
		for(i=1; i<pos-1; i++)
		{
			travnode=travnode->next;
		}
		travnode->next->prev=tempnode;
		temp = travnode->next;
		travnode->next=tempnode;
		free(temp);
	}

}


void deleteAtFirst(struct node** head_first, struct node** head_last)
{
	struct node* tempnode = NULL;
	if (*head_first == NULL)
	{
		printf("LinkList is Empty\n");
	}
	else if ((*head_first)->next == NULL)
	{
		free(*head_first);
		*head_first= NULL;
		*head_first= NULL;
	}
	else
	{
		tempnode = *head_first;
		*head_first = (*head_first)->next;
		free(tempnode);
	}
	
}
void deleteAtLast(struct node** head_first, struct node** head_last)
{
	struct node* tempnode = NULL;
	if (*head_first == NULL)
	{
		printf("LinkList is Empty\n");
	}
	else if ((*head_first)->next == NULL)
	{
		free(*head_first);
		*head_first = NULL;
		*head_last = NULL;
	}
	else
	{
		tempnode = *head_last;
		(*head_last)->prev->next = NULL;
		*head_last = (*head_last)->prev;
		free(tempnode);

	}
}
void deleteAtPosition(struct node** head_first, struct node** head_last,int pos)
{
	int n, i;
	struct node* travnode = *head_first;
	n = countnode(*head_first);
	if (*head_first == NULL)
	{
		printf("LinkList is Empty\n");
	}
	else if (pos==1)
	{
		deleteAtFirst(head_first, head_last);
	}
	else if (pos == n)
	{
		deleteAtLast(head_first, head_last);
	}
	else if (pos<1 || pos>n)
	{
		printf("Invalid Position\n");
	}
	else
	{
		for (i = 1; i < pos; i++)
		{
			travnode = travnode->next;
		}
		travnode->prev->next = travnode->next;
		travnode->next->prev = travnode->prev;
		free(travnode);
	}
}

void searchElement(int n,struct node* head_first,struct node* head_last)
{
	int flag=0;
	int m = countnode(head_first);
	struct node* trav1=head_first;
	struct node* trav2=head_last;
	int i=1,j=n;
	while(i<=j)
	{
		if(trav1->data==n)
		{
			printf("Element present at %d node\n",i);
			flag=1;
			break;
		}
		else if(trav2->data==n)
		{
			printf("Element present at %d node\n",j);
			flag=1;
			break;
		}
		trav1=trav1->next;
		trav2=trav2->prev;
		i++;
		j--;
	}
	if(flag==0)
	{
		printf("Element is not present in linked list\n");
	}
}


void main()
{
	int pos,n;
	struct node* first = NULL;
	struct node* last =NULL;
	char ch;

	do
	{
		printf("1.create doubly Linked List\n2.Display Linked List\n3.Display Reverse\n4.Insert at first\n5.Insert at last\n6.Insert at position\n0");
		printf("7.Delete at first\n8.Delete at last\n9.Delete at position\n10.Search element\n0.Exit(0)");
		printf("Enter choice\n");
		scanf("%d",&ch);

		switch(ch)
		{
		case 1 : createDlinkedList(&first,&last);
			break;
		case 2 : display(first);
			break;
		//case 3 : displayReverseLL(first);
		//	break;
		case 4 : insertAtFirst(&first,&last);
			break;
		case 5 : insertAtLast(&first,&last);
			break;
		case 6 : 
			printf("Enter position\n");
			scanf("%d",&pos);
			insertAtPosition(&first,&last,pos);
			break;
		case 7:deleteAtFirst(&first,&last);
			break;
		case 8: deleteAtLast(&first,&last);
			break;
		case 9 : printf("Enter position\n");
			scanf("%d",&pos);
			deleteAtPosition(&first,&last,pos);
			break;
		case 10 : printf("Enter element to search\n");
			scanf("%d",&n);
			searchElement(n,first,last);
			break;
		case 0 : exit(0);
			break;
		default : printf("Enter valied choice\n");
			break;
		}
	}while(ch!=0);

	


	getch();
}