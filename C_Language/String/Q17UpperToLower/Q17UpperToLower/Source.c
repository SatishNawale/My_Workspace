#include<stdio.h>
#include<conio.h>

void main()
{
	int max_sum=0,curr_sum=0,i=0,n,arr[100];
	
	printf("Enter size of an array\n");
	scanf("%d",&n);
	
	printf("Enter array elements\n");
	for(i=0; i<n; i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Given array is\n");
	for(i=0; i<n; i++)
	{
		printf("%d\t",arr[i]);
	}
	max_sum=0;
	for(i=0; i<n; i++)
	{
		curr_sum=curr_sum+arr[i];
		if(curr_sum>max_sum) 
		{
				max_sum=curr_sum;
		}
		else
		{
				curr_sum=0;
		}
	}
	printf("\nThe maximum sum of contguous subarray is = %d",max_sum);
	
	getch();
}