#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void main()
{
	int *i,*sum,*j,*n;

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

	//to find sum
	sum = (int*)malloc(sizeof(int));
	*sum = 0;
	for(*i=0; *i<*n; (*i)++)
	{
		*sum+=*(p+*i);
	}

	printf("\nSum of all elements of an Array is = %d",*sum);


	getch();
}