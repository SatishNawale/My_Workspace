#include<stdio.h>
#include<conio.h>

void main()
{
	int arr[100][100],i=0,j=0,m,n,flag=0,search;

	printf("Enter Number of Rows and Columns\n");
	scanf("%d",&m);
	scanf("%d",&n);


	
	printf("\nEnter elements of Matrix \n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}
	

	//display matrix
	printf("\nGiven Matrix is\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d\t",arr[i][j]);
		}
		printf("\n");
	}


	printf("\nEnter Searhing element\n");
	scanf("%d",&search);

	//Find given matrix is Symmetric or not or not

	printf("\nTranspose of given Matrix is\n");

	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
				if(arr[i][j]==search)
				{
					flag=1;
					printf("\nElement present at index arr[%d][%d]\n",i,j);
					break;
				}
		}
		if(flag==1) break;
	}

	
	if(flag==0) printf("\nElement Not present in Given 2D array");


	getch();
}