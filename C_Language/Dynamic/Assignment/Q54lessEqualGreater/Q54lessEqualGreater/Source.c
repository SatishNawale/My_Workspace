#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void main()
{

	int i, equal,greater,less,n;

	int* p = NULL;

	
	printf("Enter size of array\n");
	scanf("%d",&n);

	p = (int*)malloc(sizeof(int)*n);

	printf("\nEnter array elements\n");
	for(i= 0;i<n; i++)
	   {
		   scanf("%d",p+i);
	   }
	printf("\nGiven array is\n");
	for(i=0; i<n; i++)
	{
		printf("%d",*(p+i));
	}

	//to find numbers equal less greater than zero

	equal=0;
	greater=0;
	less=0;
	for(i=0; i<n; i++)
	{
		if(*(p+i)==0)
		{
			equal++;
		}
		else if(*(p+i)<0)
		{
			less++;
		}
		else
		{
			greater++;
		}
	}

	printf("\n\nNumbers less than 0 = %d\nNumbers equal to 0 = %d\nNumbers greater than 0 = %d",less,equal,greater);




	free(p);
	getch();
}