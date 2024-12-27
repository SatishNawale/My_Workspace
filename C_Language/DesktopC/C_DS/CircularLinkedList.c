#include<conio.h>
#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node* next;
};


struct node* createnode()
{
	int value;
	struct node* newnode = NULL;
	newnode = (struct node*) malloc(sizeof(struct node));

	if(newnode==NULL)
	{
		printf("Memory not allocated\n");
	}

	else
	{
		printf("Enter data value\n");
		scanf("%d",&value);
		newnode->data = value;
		newnode->next = NULL;
	}
}



void createLinkedList(struct node** head,struct node** last)
{
	struct node* tempnode = NULL;
	struct node* travnode = NULL;
	tempnode = createnode();

	if(*head == NULL)
	{
		*head = tempnode;
		*last = tempnode;
		tempnode->next=*head;
	}
	else
	{
		travnode = *head;
		do
		{
			travnode=travnode->next;
		}while(travnode->next!=*head);
		travnode->next=tempnode;
		*last = tempnode;
		tempnode->next=*head;
	}


}

void displayLinkedList(struct node* head)
{
	struct node* temp = NULL;
	temp=head;
	if((temp)==NULL)
	{
		printf("Linked List is Empty\n");
	}
	else
	{
		do
		{
			printf("%d -> ",temp->data);
			temp = temp->next;
		}while(temp!=(head));
	printf(" NULL\n\n");
	}
}


void insertAtLast(struct node** head,struct node** last)
{
	createLinkedList(head,last);
}


void insertAtFirst(struct node** head,struct node** last)
{
	struct node* travnode=NULL;
	struct node* tempnode = NULL;

	if(*head==NULL)
	{
		createLinkedList(head,last);
	}
	else
	{
		tempnode = createnode();
		travnode = *head;
		do
		{
			travnode=travnode->next;	
		}while(travnode->next!=*head);
		travnode->next = tempnode;
		tempnode->next=*head;
		*head = tempnode;
	}


}
int countnode(struct node* head)
{
	struct node* travenode = NULL;
	int count = 0;
	if(head==NULL)
	{
		return 0;
	}
	else
	{
		while(travenode!=head)
		{
			count++;
			travenode = travenode->next;
		}
	}
}

void deleteFirst(struct node** head,struct node** last)
{
	struct node* travenode = NULL;
	if(*head == NULL)
	{
		printf("Linked List is empty\n");
	}
	else
	{
		(*last)->next = (*head)->next;
		*head = (*last)->next;
	}
}

void deleteLast(struct node** head, struct node** last)
{
	struct node* travenode = NULL;
	if(*head == NULL)
	{
		printf("Linked List is empty\n");
	}
	else
	{
		travenode= *head;
		while(travenode->next != *last)
		{
			travenode = travenode -> next;
		}
		*last = travenode;
		travenode->next = *head;
	}
}
void main()
{
	struct node* first = NULL;
	struct node* last = NULL;
	int pos,n;
	int choice;

	do
	{
		printf("\n\n");
		printf("1.create Linked List\n2.Diaplay Linked List\n3.Insert at First\n4.insert at Last\n5.Delete first\n6.Delete last\n");
		printf("Enter your choice\n");
		scanf("%d",&choice);

		switch(choice)
		{
		case 1 : createLinkedList(&first,&last);
			break;

		case 2 : displayLinkedList(first);
			break;

		case 3 : insertAtFirst(&first,&last);
			break;
		
		case 4 : insertAtLast(&first,&last);
			break;
		case 5 :
			deleteFirst(&first,&last);
			break;
		case 6 :
			deleteLast(&first,&last);
			break;
	
		case 0 : exit(0);
			break;

		default : printf("Enter valied input\n");
		}

	}while(choice!=0);

	
	
	//free(struct node)
	getch();
}





/*

/*	case 5 : 
			printf("Enter Position:\n");
			scanf("%d",&pos);
			insertAtPosition(&first,pos);
			break;
/*
		case 6 : deleteFirst(&first);
			break;

		case 7 : deleteLast(&first);
			break;

		case 8 : deleteLastP(&first);
			break;

		case 9 : 
			printf("Enter position\n");
			scanf("%d",&pos);
			deleteAtPosition(&first,pos);
			break;

		case 10 : 
			printf("Enter position:\n");
			scanf("%d",&pos);
			replacenode(&first,pos);
			break;

		case 11 : sortLinkedList(first);
			break;

		case 12 : 
			printf("NULL -> ");
			reverseRecursion(first);
			break;
			1
void insertAtPosition(struct node** head,  int pos)
{
	struct node* tempnode=NULL;
	struct node* travenode = NULL;
	int count = countnode(*head);
	int i;
	if(pos<1||pos>count+1)
	{
		printf("Enter valied choice\n");
	}
	else
	{
		travenode=*head;
		for(i=1; i<pos; i++)
		{
			travenode = travenode->next;
		}

	}
	
}
int countnode(struct node* head)
{
	int count=0;
	while(head!=NULL)
	{
		head = head->next;
		count++;
	}
	return count;
}




void insertAtPosition(struct node** head,int pos)
{
	int i=1,n;
	struct node* travenode = NULL;
	struct node* tempnode = NULL;


	

	n = countnode(*head);

	if(pos==1)
	{
		insertAtFirst(head);
	}
	else if(pos==n+1)
	{
		createLinkedList(head);
	}
	else if(pos<1 || pos > n+1)
	{
		printf("Please enter valied Position\n");
	}
	else
	{
		tempnode = createnode();
		travenode=*head;
		for(i=1; i<pos-1; i++)
		{
			travenode = travenode->next;
		}
		tempnode->next = travenode->next;
		travenode -> next = tempnode;
	}


}


void deleteFirst(struct node** head)
{
	struct node* temp = NULL;
		temp = *head;
		(*head)= (*head)->next;
		free(temp);
}

void deleteLast(struct node** head)
{
	struct node* temp=NULL;
	struct node* travenode=NULL;

	if(*head==NULL)
	{
		printf("Linked List Is Empty\n");
	}

	else if((*head)-> next == NULL)
	{
		free((*head));
		*head = NULL;
	}
	
	else
	{
		travenode = *head;
		while(travenode->next->next!=NULL)
		{
			travenode = travenode->next;
		}
		free(travenode->next);
		travenode->next=NULL;
	}
}




//using two pointer
void deleteLastP(struct node** head)
{
	struct node* trave1 = NULL;
	struct node* trave2 = NULL;

	trave1 = *head;
	trave2 = *head;
	if(*head==NULL)
	{
		printf("Linked list is empy\n");
	}
	else if((*head)->next == NULL)
	{
		free(*head);
		*head= NULL;
	}
	else if((*head)->next->next==NULL)
	{
		free((*head)->next);
		(*head)->next = NULL;
	}
	else
	{
		while(trave2->next!=NULL)
		{
			trave1=trave1->next;
			trave2=trave1->next;
		}
		free(trave2);
		trave1->next=NULL;
	}
}

void deleteAtPosition(struct node** head,int pos)
{
	int n, i;
	struct node* trav1=NULL;
	struct node* trav2=NULL;


	n = countnode(*head);

	if(pos==1)
	{
		deleteFirst(head);
	}
	else if(pos == n)
	{
		deleteLastP(head);
	}
	else
	{
		trav1=*head;
		trav2=*head;
		for(i=1; i<pos-1; i++)
		{
			trav1=trav1->next;
		}
		trav2=trav1->next;
		trav1->next=trav2->next;
		free(trav2);
	}
}

void replacenode(struct node** head,int pos)
{

	deleteAtPosition(head,pos);
	insertAtPosition(head,pos);

}

void sortLinkedList(struct node* head)
{
	int i,j,n;
	int temp = 0;
	struct node* trav1=head;
	struct node* trav2=head;
	
	n = countnode(head);
	if(head==NULL)
	{
		printf("Linked List is empry\n");
	}
	else
	{
	while(trav1->next!=NULL)
	{
		trav2 = trav1->next;
		while(trav2!=NULL)
		{
			if(trav1->data>=trav2->data)
			{
				temp=trav1->data;
				trav1->data=trav2->data;
				trav2->data=temp;
			}
			trav2=trav2->next;
		}
		trav1=trav1->next;
	}
	}
}

void reverseRecursion(struct node* head)
{

	if(head==NULL)
	{
		return;
	}
	else
	{
		reverseRecursion(head->next);
		printf("%d -> ",head->data);
	}


}
*/