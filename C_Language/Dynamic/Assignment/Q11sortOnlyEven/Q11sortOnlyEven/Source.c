#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void main()
{
	int i,n,temp,j,count=0;
	int* p;
	int* q;

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


	//to sort array half ascending half decending
	//creating new array to store positive elements


	for(i=0; i<n; i++)
	{
		if(*(p+i)%2==0)
		{
			count++;
		}

	}

	q = (int*)malloc(count*sizeof(int));
	j=0;
	for(i=0; i<n; i++)
	{
		if(*(p+i)%2==0)
		{
			*(q+j)=*(p+i);
			j++;
		}
	}

	//to sort array
	for(i=0; i<count-1; i++)
	{
		for(j=i+1; j<count; j++)
		{
			if(*(q+i)>*(q+j))
			{
				temp = *(q+i);
				*(q+i) = *(q+j);
				*(q+j) = temp;
			}
		}
	}
	
	j=0;
	for(i=0; i<n; i++)
	{
		if(*(p+i)%2==0)
		{
			*(p+i) = *(q+j);
			j++;
		}
	}

	printf("\nSorted array is\n");
	for(i=0; i<n; i++)
	{
		printf("%d\t",*(p+i));
	}

	getch();
}