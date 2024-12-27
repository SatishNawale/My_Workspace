#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void main()
{
	int i,j,temp,min,max,n;
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


	//to find minimum and maximum
	min = *p;
	max = *p;
	for(i=0; i<n; i++)
	{
		if(*(p+i)<min)
		{
			min = *(p+i);
		}
		if(*(p+i)>max)
		{
			max = *(p+i);
		}
	}


	printf("\nMinimum = %d\nMaximum = %d",min,max);

	free(p);
	getch();
}