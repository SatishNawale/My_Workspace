#include<stdio.h>
#include<conio.h>

void main()
{
	int arr[100][100],i=0,j=0,m,n,largest=-2147483648;

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


	//Find Largest element

	printf("\nTranspose of given Matrix is\n");

	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
				if(arr[i][j]>=largest)
				{
					largest = arr[i][j];
				}
		}
	}

	printf("\nLargest element in Given Matrix is = %d",largest);
	



	getch();
}