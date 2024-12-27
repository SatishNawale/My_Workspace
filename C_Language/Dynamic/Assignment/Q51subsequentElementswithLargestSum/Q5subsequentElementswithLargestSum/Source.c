#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void main()
{
	int i=0,cur_sum=0,max_sum=0,n,index;

	int* p = NULL;
	printf("Enter size of an array\n");
	scanf("%d",&n);


	printf("\nEnter array elements\n");
	p = (int*) malloc(sizeof(int)*n);
	for(i=0; i<n; i++)
	{
		scanf("%d",p+i);
	}
	for(i=0; i<n-1; i++)
	{
		cur_sum = *(p+i)+*(p+i+1);
		if(max_sum<cur_sum)
		{
			max_sum = cur_sum;
			index=i;
		}
	}

	printf("\nMaximum sum subsequent elements is %d",max_sum);
	free(p);

	getch();
}