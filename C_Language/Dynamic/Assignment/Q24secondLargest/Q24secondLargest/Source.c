#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void main()
{
	int i,j,temp,max,max2,n;
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
	max2 = *p;
	max = *p;
	for(i=0; i<n; i++)
	{
		if(max<*(p+i))
		{
			max2=max;
			max = *(p+i);
		}
	}


	printf("\nMaximum = %d\nSecond Maximum = %d",max,max2);

	free(p);
	getch();
}