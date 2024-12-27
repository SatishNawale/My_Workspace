#include<stdio.h>
#include<conio.h>

void main()
{
	int i=0,j=0,arr[100][100],R1,R2,m,n,temp;

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

	printf("\nNumber of row to interchage with another row\n");
	scanf("%d",&R1);
	scanf("%d",&R2);

	//to interchage rows

	for(j=0;j<n;j++)
		{
				temp = arr[R1][j];
				arr[R1][j] = arr[R2][j];
				arr[R2][j] = temp;
			
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