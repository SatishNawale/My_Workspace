#include<stdio.h>
#include<conio.h>

void main()
{
	int arr[100][100],i=0,j=0,m,n,flag=0;

	printf("Enter Number of Rows and Columns\n");
	scanf("%d",&m);
	scanf("%d",&n);


	if(m!=n)
	{
		printf("\nGiven Matrix is not Identity\n");

	}
	else{
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


	//Find given matrix is upper triangular or not

	

	for(i=1;i<m;i++)
	{
		for(j=0;j<i;j++)
		{
			if(i==j)
			{
				if(arr[i][j]!=1)
				{
				flag=1;
				printf("\nGiven matrix is not identity Matrix\n");
				break;
				}
			}
			else
			{
				if(arr[i][j]!=0)
				{
					flag=1;
					printf("\nGiven Matrix is not identity Matrix");
					break;
				}
			}
		}
		if(flag==1) break;
	}

	if(flag==0)
	{
		printf("\nGiven Matrix is a Identity Matrix");

	}
	}



	getch();
}