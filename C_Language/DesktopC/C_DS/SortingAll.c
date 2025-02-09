#include<stdio.h>
#include<conio.h>
#include<stdlib.h>


//array == 35 5 10 25 45 10 98 70 22 15
void display_array(int* arr,int size)
{
	int i;
	printf("[\t");
	for(i=0; i<size; i++)
	{
		printf("%d\t",arr[i]);
	}
	printf("]");
	printf("\n");
}

void bubble_sort(int* arr,int size)
{
	
	int i,j,temp;
	for(i=1; i<size; i++)
	{
		for(j=0; j<size-i; j++)
		{
			if(arr[j]>arr[j+1])
			{
				temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}
}



void selection_sort(int* arr, int size)
{
	int i, j, temp;
	for(i=0; i<size-1; i++)
	{
		for(j=i+1; j<size; j++)
		{
			if(arr[i]>arr[j])
			{
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
}

void insertion_sort(int* arr,int size)
{
	int temp,empty,i;

	for(i=1; i<size; i++)
	{
		empty=i;
		temp = arr[i];
			while(empty>0 && arr[empty-1]>temp)
			{
				arr[empty]=arr[empty-1];
				empty--;
			}
			arr[empty]=temp;
	}
}

void quick_sort(int* arr,int L,int H)
{
	int low,high,pivot,i,temp;
	pivot = arr[L];
	low = L+1;
	high = H;

	while(low<=high)
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






void merge(int* arr, int low, int mid, int high)
{
	int i = low, j = mid +1, k = 0, brr[100];

	while(i<=mid && j<=high)
	{
		if(arr[i]<arr[j])
		{
			brr[k] = arr[i];
			k++;
			i++;
		}
		else
		{
			brr[k] = arr[j];
			k++;
			j++;
		}
	}
	while(i<=mid)
	{
		brr[k] = arr[i];
		i++;
		k++;
	}
	while(j<=high)
	{
		brr[k] = arr[j];
		k++;
		j++;
	}

	k=0; 
	for(i=low; i<=high; i++)
	{
		arr[i] = brr[k];
		k++;
	}
}




void merge_sort(int* arr, int low, int high)
{
	int mid;
	if(low < high)
	{
		mid = (low + high)/2;

		merge_sort(arr, low, mid);
		merge_sort(arr, mid+1, high);
		merge(arr, low, mid, high);
	}
}

int binary_search(int* arr, int low, int high, int search)
{
	int mid;
	if(low<=high)
	{
		mid = (low + high)/2;
		if(search == arr[mid])
		{
			return mid;
		}
		else if(search < arr[mid])
		{
			return binary_search(arr,low,mid-1,search);
		}
		else if(search > arr[mid])
		{
			return binary_search(arr,mid+1,high,search);
		}
	}
	else return -1;
}
int binary_search_loop(int* arr, int low, int high, int search)
{
	int mid;
	while(low<=high)
	{
		mid = (low + high)/2;
		if(search == arr[mid])
		{
			return mid;
		}
		else if(search < arr[mid])
		{
			high = mid - 1;
		}
		else if(search > arr[mid])
		{
			low = mid + 1;
		}
	}
	return -1;
}
void create_array(int* arr,int* n)
{
	int i,j,temp;
	printf("Enter size of an array\n");
		scanf("%d",n);

		printf("Enter array elements\n");
		for(i=0; i<*n; i++)
		{
			scanf("%d",&arr[i]);
		}

		printf("Given array is\n");
		display_array(arr,*n);
}


void main()
{
	int count=0;
	int ch;
	int arr[100];
	int n;
	int search,index;
	printf("Please create array First\n");
	
	do
	{
		
		
		printf("1.create array\n2.bubble sort\n3.selection sort\n4.insertion sort\n5.Quick sort\n6.merge sort\n7.BinarySearch(recursion)\n8.BinarySearch(Using Loop)\n0.Exit\n");
		printf("enter your choice\n");
		scanf("%d",&ch);
		switch(ch)
		{
		case 1 :
			create_array(arr,&n);
			break;
		case 2 : bubble_sort(arr,n);
			printf("Sorted Array using bubble sort is\n");
			display_array(arr,n);
			break;
		case 3 : selection_sort(arr,n);
			printf("Sorted Array using selection sort is\n");
			display_array(arr,n);
			break;
		case 4 : insertion_sort(arr,n);
			printf("Sorted Array using insertion sort is\n");
			display_array(arr,n);
			break;
		case 5 : quick_sort(arr,0,n-1);
			printf("Sorted Array using quick sort is\n");
			display_array(arr,n);
			break;
		case 6 : merge_sort(arr, 0, n-1);
			printf("Sorted array using merge sort is\n");
			display_array(arr,n);
			break;
		case 7 : printf("Enter element to find\n");
			scanf("%d",&search);
			index = binary_search(arr,0,n-1,search);
			if(index!=-1) printf("Element found at position %d\n",index+1
				);
			else printf("Element not found\n");
			break;
		case 8 : printf("Enter element to find\n");
			scanf("%d",&search);
			index = binary_search_loop(arr,0,n-1,search);
			if(index!=-1) printf("Element found at position %d\n",index+1);
			else printf("Element not found\n");
			break;
		case 0 : exit;
			break;
		default : printf("Enter valied choice\n");
		}
	}while(ch!=0);
	
	getch();
}