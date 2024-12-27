#include<stdio.h>
#include<conio.h>

void quick_sort(int* arr, int L, int H)
{
	int pivot=arr[L], low = L+1, high = H, temp;

	while(low < high)
	{
		while(arr[low]<pivot)
		{
			low++;
		}
		while(arr[high]>pivot)
		{
			high--;
		}
		if(low<high)
		{
			temp = arr[low];
			arr[low] = arr[high];
			arr[high] = temp;
			low++;
			high--;
		}
	}
	temp = arr[high];
	arr[high] = arr[L];
	arr[L] = temp;

	if(L<high)
	{
		quick_sort(arr,L,high-1);
	}
	if(low<H)
	{
		quick_sort(arr,low,H);
	}
}
void main()
{
	int arr[100], n, i;

	printf("Enter array size\n");
	scanf("%d", &n);

	printf("Enter array elements\n");
	for(i=0; i<n; i++)
	{
		scanf("%d", &arr[i]);
	}

	printf("\ngiven array is \n");
	for(i=0; i<n; i++)
	{
		printf("%d\t",arr[i]);
	}
	printf("\n");

	quick_sort(arr,0,n-1);

	printf("\nSorted array is \n");
	for(i=0; i<n; i++)
	{
		printf("%d\t",arr[i]);
	}
	printf("\n");

	getch();
}