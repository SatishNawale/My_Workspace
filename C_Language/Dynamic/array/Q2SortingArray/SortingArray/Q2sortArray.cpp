#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void main()
{
	int* a = NULL;
	int i, temp,j;
	int* n = NULL;

	printf("Enter size of an Array\n");
	n = (int*) malloc(sizeof(int));
	scanf("%d",n);

	printf("\nEnter array elements\n");
	a = (int*) malloc((*n)*sizeof(int));
	for(i=0;i<*n;i++)
	{
		scanf("%d",(a+i));
	}

	printf("\nGiven array is \n");
	for(i=0;i<*n;i++)
	{
		printf("%d ",*(a+i));
	}


	//to sort array by selection sort
	for(j=0;j<*n;j++)
	{
		for(i=j+1; i<*n; i++)
		{
			if(*(a+i)<*(a+j))
			{
				temp = *(a+j);
				*(a+j) = *(a+i);
				*(a+i) = temp;
			}
		}
	}
	printf("\nSorted arry is \n");
	for(i=0;i<*n;i++)
	{
		printf("%d ",*(a+i));
	}


	getch();
}