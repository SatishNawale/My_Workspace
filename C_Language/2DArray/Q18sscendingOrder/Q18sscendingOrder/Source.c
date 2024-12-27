#include<stdio.h>
#include<conio.h>

void main()
{
	int i=0,j=0,arr[100][100],m,n,temp,l=0,k=0;

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


	//to interchage rows

	for(i=0;i<m;i++)
	{
		for(j=0;j<n-1;j++)
		{
			for(k=j+1;k<n;k++)
			{
				if(arr[i][j]>=arr[i][k])
				{
					temp=arr[i][j];
					arr[i][j]=arr[i][k];
					arr[i][k]=temp;
				}
			}
		}
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