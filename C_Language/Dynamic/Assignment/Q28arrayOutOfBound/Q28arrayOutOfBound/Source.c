#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void main()
{
	int i=0,n,index=0;
	int* p = NULL;

	printf("Enter size of an array\n");
	scanf("%d",&n);

	printf("\nEnter array elements\n");
	p = (int*)malloc(sizeof(int)*n);

	for(i=0; i<n; i++)
	{
		scanf("%d",p+i);
	}

	printf("\nEnter index to find element\n");
	scanf("%d",&index);

	
		if(index<=n)
		{
			printf("%d",*(p+n));
		}

		else
		{
			printf("\nArray out of bound\n");
		
		}

	getch();
}