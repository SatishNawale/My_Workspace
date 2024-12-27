#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void main()
{
	int i,n,temp,j;
	int* p;

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


	//to sort array half ascending half decending

	for(i=0; i<(n/2)-1; i++)
	{
		for(j=i+1; j<n/2; j++)
		{
		if(*(p+i)<*(p+j))
			{
				temp=*(p+i);
				*(p+i) = *(p+j);
				*(p+j) = temp;
			}
		}

	}
	for(i=n/2; i<n-1; i++)
	{
		for(j=i+1; j<n; j++)
		{
			if(*(p+i)>*(p+j))
			{
				temp = *(p+i);
				*(p+i) = *(p+j);
				*(p+j) = temp;
			}
		}
	}

	printf("\nSorted array is\n");
	for(i=0; i<n; i++)
	{
		printf("%d\t",*(p+i));
	}

	getch();
}