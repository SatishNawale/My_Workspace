#include<stdio.h>
#include<conio.h>

void main()
{
	int arr[100][100],i=0,j=0,m,n,sum=0;

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


	//Find sum of elements of matrix


	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
				sum += arr[i][j];
		}
	}
	printf("\nsum of all elements of Matrix is : %d", sum);
	



	getch();
}