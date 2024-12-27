#include<stdio.h>
#include<conio.h>

void main()
{
	int i=0,j=0,arr[100][100],C1,C2,m,n,temp;

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

	printf("\nNumber of columns to interchage with another columns\n");
	scanf("%d",&C1);
	scanf("%d",&C2);

	//to interchage rows

	for(j=0;j<n;j++)
		{
				temp = arr[j][C1];
				arr[j][C1] = arr[j][C2];
				arr[j][C2] = temp;
			
		}
	
	
	printf("\nrequired Matrix is\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d\t",arr[i][j]);
		}
		printf("\n");
	}

	getch();
}