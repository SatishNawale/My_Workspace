#include<stdio.h>


/*
void quick_sort(int* arr,int L,int H)
{
	int low,high,pivot,i,temp;
	pivot = arr[L];
	low = L+1;
	high = H;

	while(low<=high)
	{
		while(arr[low]<=pivot)
		{
			low++;
		}
		while(arr[high]>=pivot)
		{
			high--;
		}
		if(low<high)
		{
			temp=arr[low];
			arr[low]=arr[high];
			arr[high]=temp;
			high--;
			low++;
		}
	}
	temp = arr[L];
	arr[L] = arr[high];
	arr[high] = temp;
	if(L<high)
	{
		quick_sort(arr,L,high-1);
	}
	if(low<H)
	{
		quick_sort(arr,low,H);

	}
}
*/