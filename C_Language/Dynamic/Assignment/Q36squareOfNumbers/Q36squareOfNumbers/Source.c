#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void main()
{
	int i=0,n;
	int* p = NULL;

	printf("Enter size of an array\n");
	scanf("%d",&n);

	p = (int*) malloc(n*sizeof(int));

	printf("\nEnter array elements\n");
	for(i=0; i<n; i++)
	{
		scanf("%d",p+i);
	}

	printf("\nGiven array is\n");
	for(i=0; i<n; i++)
	{
		printf("%d\t",*(p+i));
	}

	//to store square of numbers in same array
	for(i=0; i<n; i++)
	{
		*(p+i) = (*(p+i))*(*(p+i));
	}

	printf("\nRequired array is\n");
	for(i=0; i<n; i++)
	{
		printf("%d\t",*(p+i));
	}

free(p);
	getch();
}