#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void main()
{
	int i,n;
	int* p=NULL;
	int* q=NULL;

	printf("Enter size of an array\n");
	scanf("%d",&n);

	printf("\nPlease enter array elements\n");
	
	p = (int*) malloc(n*sizeof(int));
	for(i=0; i<n; i++)
	{
		scanf("%d",(p+i));
	}

	printf("\nGiven array is \n");
	for(i=0; i<n; i++)
	{
		printf("%d\t", *(p+i));
	}

	//to copy elements into another array

	q = (int*) malloc(n*sizeof(int));

	for(i=0;i<n;i++)
	{
		*(q+i) = *(p+i);
	}

	printf("\nNew array is\n");
	for(i=0; i<n; i++)
	{
		printf("%d\t", *(q+i));
	}


	getch();
}