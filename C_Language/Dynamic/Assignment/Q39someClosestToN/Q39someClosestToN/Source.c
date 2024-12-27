#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void main()
{
	int i,j,given,n,index1,index2,min=2147483647,max=0,sum = 0;
	int* p = NULL;

	printf("enter size of array\n");
	scanf("%d",&n);
	p = (int*)malloc(sizeof(int)*n);
	printf("\nEnter array elements\n");
	for(i=0; i<n; i++)
	{
		scanf("%d",p+i);
	}

	printf("\nEnter given number\n");
	scanf("%d",&given);

	//to find elements with largest difference
	
	for(i=0; i<n; i++)
	{
		if(max<*(p+i))
		{
			max = *(p+i);
		}
	}

	for(i=0; i<n; i++)
	{
		for(j=0; j<n; j++)
		{
			if(i==j)
			{
				continue;
			}
			sum = *(p+i) + *(p+j);
			if(sum<given)
			{
				min = given - sum;
				if(min<max)
				{
					max = min;
					index1=i;
					index2=j;
				}
			}
			else
			{
				min = sum - given;
				if(min<max)
				{
					max = min;
					index1=i;
					index2=j;
				}
			}
		}
	}

	printf("\nTwo elements sum closest to Given number are\n");
	printf("\n%d\t%d",*(p+index1),*(p+index2));

	getch();
}