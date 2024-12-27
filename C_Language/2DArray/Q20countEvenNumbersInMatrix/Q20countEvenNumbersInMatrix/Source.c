#include<stdio.h>
#include<conio.h>

void main()
{
	int i=0,j=0,arr[100][100],m,n,count=0;

	printf("Enter Number of rows\n");
	scanf("%d",&m);
	printf("Enter Number of Columns\n");
	scanf("%d",&n);

	printf("\nEnter elements to Matrix\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}

	printf("\nGiven Matrix is\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d\t",arr[i][j]);
		}
		printf("\n");
	}


	//to count number

	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			if(arr[i][j]%2==0)
			{
				count++;
			}
		}
	}
	
	
	printf("\nNumber of Even values in Given Matrix is %d",count);
	

	getch();
}