#include<stdio.h>
#include<conio.h>

void main()
{
	int arr[100][100],i=0,j=0,m,n,flag=0;

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


	//Find given matrix is Symmetric or not or not

	printf("\nTranspose of given Matrix is\n");

	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
				printf("%d\t",arr[j][i]);
		}
		printf("\n");
	}

	



	getch();
}