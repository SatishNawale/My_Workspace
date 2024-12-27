#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int maximum(int a, int b)
{
	if(a>b) return a;
	else return b;
}

struct node
{
	int data;
	struct node* left;
	struct node* right;
};

struct node* createnode(int data)
{
	struct node* newnode = NULL;
	newnode = (struct node*)malloc(sizeof(struct node));
	if(newnode==NULL)
	{
		printf("memeory not allocated\n");
	}

	else
	{
		newnode->data = data;
		newnode->left = NULL;
		newnode->right = NULL;
	}
	return newnode;
}

void create_BST(struct node** root,int data)
{
	struct node* tempnode = createnode(data);
	struct node* temp = NULL;
	if(tempnode==NULL)
	{
		printf("Memory not allocated\n");
	}

	else
	{
		if((*root)==NULL)
		{
			(*root)=tempnode;
		}
		else
		{
			temp = *root;
			while(temp!=NULL)
			{
				if(((temp)->data)>tempnode->data)
				{
					if((temp)->left == NULL)
					{
						(temp)->left = tempnode;
						break;
					}
					else 
					{
						temp = temp->left;
					}
				}
				else
				{
					if(temp->right == NULL)
					{
						temp->right = tempnode;
						break;
					}
					else
					{
						temp = temp->right;
					}
				}
			}
		}
	}
}


void inorder(struct node* root)			//LDR
{
	if(root==NULL)
	{
		return;
	}

	inorder(root->left);
	printf("%d->",root->data);
	inorder(root->right);
}

void preorder(struct node* root)		//DLR
{
	if(root==NULL)
	{
		return;
	}
	printf("%d->",root->data);
	preorder(root->left);
	preorder(root->right);
}

void postorder(struct node* root)		//LRD
{
	if(root==NULL)
	{
		return;
	}
	postorder(root->left);
	postorder(root->right);
	printf("%d->",root->data);
}

void BFS(struct node* root)
{
	struct node* que[100];
	int front = 0, rear = 1;

	if(root == NULL)
	{
		printf("Teree is empty\n");
	}

	else
	{
		que[0] = root;
		while(front!=rear)
		{
			struct node* current = que[front];
			printf("%d->",current->data);
			front++;
			if(current->left!=NULL)
			{
				que[rear] = current->left;
				rear++;
			}
			if(current->right!=NULL)
			{
				que[rear] = current->right;
				rear++;
			}

		}
		printf("\n");
	}
}

void level_kth_element(struct node* root,int level)
{
	int flag=0;
	if(level==0)
	{
		printf("%d->",root->data);
		flag++;
		return;
	}
		level_kth_element(root->left,level-1);
		level_kth_element(root->right,level-1);
		if(flag>0)
		{
			printf("Graph has no %d th level\n",level);
		}
		printf("\n");
}

void leaf_nodes(struct node* root)
{
	if(root->left==NULL&&root->right==NULL)
	{
		printf("%d->",root->data);
		return;
	}
	if(root->left!=NULL)
	{
		leaf_nodes(root->left);
	}
	if(root->right!=NULL)
	{
		leaf_nodes(root->right);
	}
}


int height(struct node* root)
{
	if(root==NULL)
	{
		return 0;
	}

	else
	{
		return (maximum(height(root->left),height(root->right))+1);
	}
}

void number_of_leafs(struct node* root, int* leaf_count)
{
	if(root->left==NULL&&root->right==NULL)
	{
		(*(leaf_count))++;
	}
	if(root->left!=NULL)
	{
		number_of_leafs(root->left,leaf_count);
	}
	if(root->right!=NULL)
	{
		number_of_leafs(root->right,leaf_count);
	}
}

int leaf_count(struct node* root)
{
	if(root==NULL)
	{
		return 0;
	}
	if(root->left==NULL&&root->right==NULL)
	{
		return 1;
	}
	else
	{
		return(leaf_count(root->left)+leaf_count(root->right));
	}

}

void delete_all_nodes(struct node* root)
{
	if(root==NULL) return;
	delete_all_nodes(root->left);
	delete_all_nodes(root->right);
	free(root);
}

void delete_leaf_nodes(struct node* root)
{
	if(root->left==NULL&&root->right==NULL)
	{
		root==NULL;
		free(root);
		return;
	}
	if(root->left!=NULL)
	{
		delete_leaf_nodes(root->left);
	}
	
	if(root->right!=NULL)
	{
		delete_leaf_nodes(root->right);
	}
	
}
int total_nodes(struct node* root)
{
	int l=0,r=0;
	if(root==NULL)
	{
		return 0;
	}
	l = total_nodes(root->left);
	r = total_nodes(root->right);
	return (1+l+r);
}

/*void search(struct node* root, int data,int* count)
{
	if(root==NULL) return;

	if(root->data == data)
	{
		printf("Given element is present in tree\n");
		(*count)++;
		return;
	}
	
	else if(root->data<data)
	{
		search(root->left,data,count);
	}
	else
	{
		search(root->right,data,count);
	}
}
*/

int search(struct node* root,int data,int* flag)
{
	if((*flag)!=0)
	{
		return 1;
	}
	if(root == NULL)
	{
		return 0;
	}
	else
	{
		if(root->data == data)
		{
			(*flag)=1;
			return 1;
		}
		if(root->right!=NULL)  search(root->right,data,(flag));
		if(root->left!=NULL) search(root->left,data,(flag));
		if(*flag==0)
		{
			return 0;
		}
	}
}

void copy_tree(struct node* root)
{
	int count = 0,i=0;
	struct node* arr = NULL;
	count = total_nodes(root);
	arr = (struct node*)malloc(sizeof(struct node*)*count);
	if(root==NULL)
	{
		printf("Tree is empty\n");
		return;
	}

	while(i<count)
	{
		if(root->left!=NULL)
		{

		}
	}

}
void delete_node(struct node* root,int data,int* flag)
{
	if(root==NULL)
	{
		printf("Tree is empty\n");
	}
	else
	{
		if(search(root,data,flag))
		{
			while(root!=NULL)
			{
				if(root->data==data)
				{

				}
			}
		}
		else
		{
			printf("Data is not present in tree\n");
		}
	}


}
void main()
{
	int data,ch,flag=0,find=0;
	int level,leaf_count=0;
	struct node* root = NULL;


	do
	{
		printf("Enter your choice\n");
		printf("1.Create Binary search tree\n2.inorder Display\n3.preorder Display\n4.postordered Display\n5.BFS\n");
		printf("6. Level Kth elements\n7.Leaf Nodes\n8.Height of Tree\n9.Total Leafs\n10.Total Number of elements\n");
		printf("11.Delete all nodes\n12.Search element\n13.Delete all leafs\n");
		printf("Enter your choice\n");
		scanf("%d",&ch);


		switch(ch)
		{
			case 1 : printf("Enter data to stor\n");
					scanf("%d",&data);
					create_BST(&root,data);
					break;

			case 2 : 
				if(root==NULL) printf("Tree is empty\n");
				else
				{
					printf("inorder data\n");
					inorder(root);
					printf("\n");
				}
				
					break;

			case 3 :
				if(root==NULL) printf("Tree is empty\n");
				else
				{
					printf("preorder data\n");
					preorder(root);
					printf("\n");
				}
				
					break;

			case 4 : 
				if(root==NULL) printf("Tree is empty\n");
				else
				{
					printf("postorder data\n");
					postorder(root);
					printf("\n");
				}
				
					break;

			case 5 : 
				if(root==NULL) printf("Tree is empty\n");
				else
				{
					BFS(root);
				}
				break;

			case 6 : 
				if(root==NULL) printf("Tree is empty\n");
				else
				{
					printf("Enter level\n");
					scanf("%d",&level);
					level_kth_element(root,level);
				}
					break;

			case 7 : 
				if(root==NULL) printf("Tree is empty\n");
				else
				{
					leaf_nodes(root);
					printf("\n\n");
				}
				
				break;

			case 8 : printf("Height of Tree is %d\n",height(root));
				break;

			case 9 : number_of_leafs(root,&leaf_count);
				printf("Total number of Leafs = %d\n",leaf_count);
				//printf("Total number of Leafs = %d\n", leaf_count(root));
				break;

			case 10 : //total_nodes(root);
				printf("Total number of Nodes in tree = %d\n",total_nodes(root));
				break;

			case 11 : 
				if(root==NULL) printf("Tree is empty\n");
				else
				{
					delete_all_nodes(root);
					root = NULL;
				}
				break;
			case 12 : 
				/*if(root==NULL) printf("Tree is empty\n");
				else
				{
					printf("enter value to find in tree\n");
					scanf("%d",&find);
					search(root,find,&count);
					if(count!=0)
					{
						printf("given element not present in tree\n");
					}
				}*/
				printf("Enter element to find \n");
				scanf("%d", &find);
				if(search(root,find,&flag))
				{
					printf("Given element is present in tree\n");
				}
				else
				{
					printf("Given element is not present in tree\n");
				}
				flag=0;
				break;
			case 13 : 
				delete_leaf_nodes(root);
				break;

			case 14 : 
				printf("Enter data to delete\n");
				scanf("%d",&data);
				delete_node(root,data,&flag);
				flag=0;
				break;

			case 0 : exit(0);
					break;

			default : printf("Enter valied choice\n");
		}

	}while(ch!=0);


	getch();
}