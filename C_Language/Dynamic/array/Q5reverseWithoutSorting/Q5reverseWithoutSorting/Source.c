#include<stdio.h>
#include<conio.h>
#include<stdlib.h>


void main()
{
	int i;
	int* n = (int*) malloc(sizeof(int));
	int* p;

	printf("Please enter size of array\n");
	scanf("%d", n);

	printf("Please enter array elements\n");
	p = (int*) malloc(*n*sizeof(int));

	for(i=0; i<*n; i++)
	{
		scanf("%d",p+i);
	}

	printf("Given array is \n");
	for(i=0; i<*n; i++)
	{

	}


	getch();
}