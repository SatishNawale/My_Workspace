#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void main()
{
	int *i,*sum,*j,*n,N,count=0;

	int* p;
	i = (int*)malloc(sizeof(int));
	printf("Please enter size of an Array");
	n = (int*)malloc(sizeof(int));
	scanf("%d",n);

	printf("\nPlease enter array Elements");
	p = (int*) malloc(*n*sizeof(int));

	for(*i=0; *i<*n; (*i)++)
	{
		scanf("%d",p+*i);
	}

	printf("\nGiven Array is\n");
	for(*i=0; *i<*n; (*i)++)
	{
		printf("%d ",*(p+*i));
	}

	//to find given number appears more than N/2 times
	printf("\nEnter given number N\n");
	scanf("%d",&N);

	for(*i=0; *i<*n; (*i)++)
	{
		if(*(p+*i)==N)
		{
			count++;
		}
	}

	if(count>*n/2)
	{
		printf("\nGiven number appears more than N/2 times");

	}
	else printf("\nGiven number does not appears more than N/2 times");
	getch();
}