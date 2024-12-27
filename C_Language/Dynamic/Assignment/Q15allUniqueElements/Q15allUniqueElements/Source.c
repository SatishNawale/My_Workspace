#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void main()
{
	int i,n,temp,j,count=0;
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

	printf("\nAll unique elements are\n");
	
	for(i=0; i<n; i++)
	{
		count=0;
		for(j=i-1; j>=0; j--)
		{
			if(*(p+i)==*(p+j))
			{
				count++;
			}
		}
		if(count==0)
		{
			printf("%d\t",*(p+i));
		}
		
	}

	

	free(p);

	getch();
}