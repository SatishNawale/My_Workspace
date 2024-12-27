#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void main()
{
	int i,n,temp,j,count=0;
	int* p;
	int* q;

	printf("Please enter size of an array\n");
	scanf("%d",&n);

	printf("\nPlease enter array Elements\n");
	p = (int*)malloc(n*sizeof(int));

	for(i=0; i<n; i++)
	{
		scanf("%d", (p+i));
	}


	printf("\nGiven array is \n");
	for(i=0; i<n; i++)
	{
		printf("%d\t",*(p+i));
	}

	
	for(i=0; i<n-1; i++)
	{
		if(*(p+i)%2!=0)
		{
			for(j=i+1; j<n; j++)
			{
				if(*(p+j)%2==0)
				{
					temp = *(p+i);
					*(p+i) = *(p+j);
					*(p+j) = temp;
				}
			}
		}
	}

	printf("\n\n");
	for(i=0; i<n; i++)
	{
		printf("%d\t", *(p+i));
	}


	free(p);

	getch();
}