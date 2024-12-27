#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void main()
{
	int* a = NULL;
	int i,j, temp,temp1;
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


	//to find second largest element
	
	temp = *(a);
	temp1 = *(a);
	for(i=0; i<*n-1; i++)
	{
		if(temp < *(a+i))
		{
			temp = *(a+i); 
			temp1  =temp;
		}
	}

	printf("\nSecond largest element is %d",temp1);









	getch();
}