#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void main()
{
	int *i,*sum,*j,*n,cur_sum=0,max_sum=0;

	int* p;
	i = (int*)malloc(sizeof(int));
	printf("Please enter size of an Array");
	n = (int*)malloc(sizeof(int));
	scanf("%d",n);

	printf("\nPlease enter array Elements");
	p = (int*) malloc(*n*sizeof(int));

	for(*i=0; *i<*n; (*i)++)
	{
		scanf("%d",p+*i);
	}

	printf("\nGiven Array is\n");
	for(*i=0; *i<*n; (*i)++)
	{
		printf("%d ",*(p+*i));
	}

	//to find sum
	for(*i=0; *i<*n; (*i)++)
	{
		cur_sum += *(p+*i);
		if(cur_sum>max_sum)
		{
			max_sum = cur_sum;
		}
		if(cur_sum<max_sum)
		{
			cur_sum=0;
		}
	}

	printf("\nMaximum sum contiguous subarray is %d",max_sum);

	getch();
}