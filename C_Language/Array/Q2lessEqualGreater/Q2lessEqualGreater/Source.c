#include<stdio.h>
#include<conio.h>

void main()
{
	int i=0,arr[100],n,less=0,greater=0,equal=0;
	int* p;

	printf("Please enter size of an Array\n");
	scanf("%d",&n);

	printf("\nPlease enter array elements\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}

	printf("\nGiven Array is\n");
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}

	//to find elements less, greater or equal to zero
	
	for(i=0;i<n;i++)
	{
		if(arr[i]<0)
		{
				less++;
		}
		if(arr[i]==0) 
		{
			equal++;
		}
		if(arr[i]>0)
		{
			greater++;
		}
	}
	
		printf("\nElements Equal to Zero = %d",equal);
		printf("\nElements Greater than Zero = %d",greater);
		printf("\nElements Less than Zero = %d",less);
	
		printf("\n%d",sizeof(p));
	getch();
}
