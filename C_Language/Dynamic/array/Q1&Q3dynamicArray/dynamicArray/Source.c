#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void main()
{
	int* p=NULL;
	int* i=NULL;
	int* n=NULL;
	int* N=NULL;
	int flag=0;

	n = (int*)malloc(sizeof(int));
	printf("Einter size of Array\n");
	scanf("%d",n);



	i = (int*)malloc(sizeof(int));
	N = (int*)malloc(sizeof(int));
	p = (int*) malloc((*n)*sizeof(int));
	

	

	printf("\nEnter array elements\n");
	for(*i=0;*i<*n;(*i)++)
	{
		scanf("%d",p+*i);
	}

	printf("\nGiven array is\n");
	for(*i=0;*i<*n;(*i)++)
	{
		printf("%d ",*(p+*i));
	}

	
	//to find given element in array
	flag=0;
	printf("\nEnter element you want to find in array\n");
	scanf("%d",N);

	for(*i=0;*i<*n;(*i)++)
	{
		if(*(p+*i)==*N)
		{
			printf("\nGiven element is present at %d index",*i);
			flag++;
			break;
		}
	}
	if(flag>0)
		
	{
		printf("\nElement not found");
	}

	getch();
}