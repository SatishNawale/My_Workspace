#include<stdio.h>
#include<conio.h>

void main()
{
	int arr[100][100],i=0,j=0,m,n;

	printf("Enter Number of Rows : ");
	scanf("%d",&m);
	printf("\nEnter Number of Columns : ");
	scanf("%d",&n);


	
	printf("\nEnter elements of Matrix \n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("Enter arr[%d][%d] value : ",i,j);
			scanf("%d",&arr[i][j]);
			printf("\n");
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

	//printf diagonal
	printf("\nDiagonal is \n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			if(i==j)
			{
				printf("%d\t",arr[i][j]);
			}
			else printf(" \t");
		}
		printf("\n");
	}
	



	getch();
}