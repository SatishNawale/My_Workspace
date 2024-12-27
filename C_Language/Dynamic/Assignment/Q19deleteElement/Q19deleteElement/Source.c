#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void main()
{
	int *i,*sum,*j,*n,*n1,temp;

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


	//to delete element at desired position
	printf("\nEnter index to delete\n");
	n1 = (int*)malloc(sizeof(int));
	scanf("%d",n1);
	for(*i=*n1; *i<*n-1; (*i)++)
	{
		*(p+*i) = *(p+*i+1);
	}

	p = (int*)realloc(p,(*n-1)*sizeof(int));

	printf("\nRequired array is\n");

	for(*i=0; *i<*n-1; (*i)++)
	{
		printf("%d\t",*(p+*i));
	}
	getch();
}