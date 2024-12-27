#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void main()
{
	int i,j,n,index1,index2,max=-2147483648;
	int* p = NULL;

	printf("enter size of array\n");
	scanf("%d",&n);
	p = (int*)malloc(sizeof(int)*n);
	printf("\nEnter array elements\n");
	for(i=0; i<n; i++)
	{
		scanf("%d",p+i);
	}

	//to find elements with largest difference
	
	for(i=0; i<n; i++)
	{
		for(j=0; j<n; j++)
		{
			if(max<(*(p+i)-*(p+j)))
			{
				max = (*(p+i) - *(p+j));
				index1 = i;
				index2 = j;
			}
		}
	}

	printf("\nTwo elements with max difference are\n");
	printf("\n%d\t%d",*(p+index1),*(p+index2));

	getch();
}