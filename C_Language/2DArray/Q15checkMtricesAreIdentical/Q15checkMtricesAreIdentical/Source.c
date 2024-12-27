#include<stdio.h>
#include<conio.h>

void main()
{
	int arr[100][100],arr1[100][100],i=0,j=0,m,n,m1,n1,flag=0;

	printf("Enter Number of Rows for first Matrix : ");
	scanf("%d",&m);
	printf("\nEnter Number of Columns for first Matrix : ");
	scanf("%d",&n);

	printf("\nEnter Number of Rows for second Matrix : ");
	scanf("%d",&m1);
	printf("\nEnter Number of Columns for scond Matrix : ");
	scanf("%d",&n1);
	
	if(m1!=m&&n1!=n)
	{
		printf("\nGiven matrices are not Identical");
	}
	else {
	printf("\nEnter elements of first Matrix \n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}
	
	printf("\nEnter elements of Second Matrix \n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&arr1[i][j]);
		}
	}
	//display matrix

	printf("\nGiven first Matrix is\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d\t",arr[i][j]);
		}
		printf("\n");
	}
	
	printf("\nGiven second Matrix is\n");
	for(i=0;i<m1;i++)
	{
		for(j=0;j<n1;j++)
		{
			printf("%d\t",arr1[i][j]);
		}
		printf("\n");
	}

	// check given matrices are Identical
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			if(arr[i][j]!=arr1[i][j])
			{
				printf("\nGiven matrices are not Identical");
				flag=1;
				break;
			}
		}
		if(flag==1) break;
		printf("\n");
	}

	if(flag==0) printf("\nGiven matrices are Identical");
	}
	getch();
}