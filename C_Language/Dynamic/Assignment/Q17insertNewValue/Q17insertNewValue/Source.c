#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void main()
{
	int i=0,n;
	int insert;
	int* p = NULL;

	printf("Enter size of array\n");
	scanf("%d",&n);

	printf("\nEnter array elements\n");
	p = (int*) malloc(n*sizeof(int));
	for(i=0; i<n; i++)
	{
		scanf("%d",p+i);
	}

	printf("\nGiven array is\n");
	for(i=0; i<n; i++)
	{
		printf("%d",*(p+i));
	}

	printf("\nEnter element to insert\n");
	p = (int*) realloc(p,(n+1)*sizeof(int));

	scanf("%d",p+n);

	printf("\nRequired array is\n");
	for(i=0; i<n+1; i++)
	{
		printf("%d\t", *(p+i));
	}
free(p);
	getch();
}