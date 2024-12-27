#include<stdio.h>
#include<conio.h>

void main()
{
	int arr1[100][100],arr2[100][100],arr3[100][100],i=0,j=0,m,n;

	printf("Enter Number of Rows and Columns\n");
	scanf("%d",&m);
	scanf("%d",&n);

	printf("\nEnter elements of First Matrix \n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&arr1[i][j]);
		}
	}
	printf("\nEnter elements of Second Mtrix\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&arr2[i][j]);
		}
	}

	//display matrix
	printf("\nFirst Matrix is\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d\t",arr1[i][j]);
		}
		printf("\n");
	}
	printf("\nSecond Matrix is \n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d\t",arr2[i][j]);
		}
		printf("\n");
	}


	//Add first and second

	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			arr3[i][j]=arr1[i][j] + arr2[i][j];
		}
	}

	printf("\nAddition of First and Second Matrix is \n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d\t",arr3[i][j]);
		}
		printf("\n");
	}


	getch();
}