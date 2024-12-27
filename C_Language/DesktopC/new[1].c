void deleteAtFirst(struct node** head1, struct node** head2)
{
	struct node* tempnode = NULL;
	if (*head1 == NULL)
	{
		printf("LinkList is Empty\n");
	}
	else if ((*head1)->next == NULL)
	{
		free(*head1);
		*head1 = NULL;
		*head2 = NULL;
	}
	else
	{
		tempnode = *head1;
		*head1 = (*head1)->next;
		free(tempnode);
	}
	
}
void deleteAtLast(struct node** head1, struct node** head2)
{
	struct node* tempnode = NULL;
	if (*head1 == NULL)
	{
		printf("LinkList is Empty\n");
	}
	else if ((*head1)->next == NULL)
	{
		free(*head1);
		*head1 = NULL;
		*head2 = NULL;
	}
	else
	{
		tempnode = *head2;
		(*head2)->prev->next = NULL;
		*head2 = (*head2)->prev;
		free(tempnode);

	}
}
void deleteAtPosition(struct node** head1, struct node** head2,int pos)
{
	int n, i;
	struct node* travnode = *head1;
	n = countNode(*head1);
	if (*head1 == NULL)
	{
		printf("LinkList is Empty\n");
	}
	else if (pos==1)
	{
		deleteAtFirst(head1, head2);
	}
	else if (pos == n)
	{
		deleteAtLast(head1, head2);
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
void deleteAndEnterNewPosition(struct node** head1, struct node** head2, int pos)
{
	deleteAtPosition(head1, head2, pos);
	insertAtPosition(head1, head2, pos);
}
void sortLinkList(struct node* head)
{
	int temp;
	struct node* trav1 = head;
	struct node* trav2 = NULL;
	if (head == NULL)
	{
		printf("Link List Is Empty\n");
	}
	else
	{
		while (trav1 != NULL)
		{
			trav2 = trav1->next;
			while (trav2 != NULL)
			{
				if (trav1->data > trav2->data)
				{
					temp = trav1->data;
					trav1->data = trav2->data;
					trav2->data = temp;
				}
				trav2 = trav2->next;
			}
			trav1 = trav1->next;
		}
	}
}